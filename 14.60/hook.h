#pragma once

namespace Enums
{
	enum ENetMode // https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/ENetMode/ Documentation of All Enums!
	{
		NM_Standalone,
		NM_DedicatedServer,
		NM_ListenServer,
		NM_Client,
		NM_MAX,
	};
}

namespace Hooking {
	int Patch()
	{
		return 0;
	}
	bool Patch2()
	{
		return true;
	}
	char Patch3()
	{
		return 1;
	}
	void Patch4()
	{
		return;
	}

	void (*ServerReadyToStartMatchOriginal)(AFortPlayerController* PlayerController); //No UE Doc For This its a /Script/FortniteGame.Function not a /Script/Engine.Function;
	void ServerReadyToStartMatchHook(AFortPlayerController* PlayerController)
	{
		return ServerReadyToStartMatchOriginal(PlayerController);
	}

	Enums::ENetMode GetNetMode() { // https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UWorld/GetNetMode/ UWorldGetNetMode
		return Enums::ENetMode::NM_DedicatedServer;
	}

	Enums::ENetMode GetNetModeActor() // https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/GameFramework/AActor/GetNetMode/
	{
		return Enums::ENetMode::NM_DedicatedServer;
	}

	static __int64 (*DispatchRequestOriginal)(__int64 a1, __int64* a2, int a3);

	static __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
	{
		return DispatchRequestOriginal(a1, a2, 3);
	}

	void (*TickFlushOriginal)(UNetDriver* NetDriver, float DeltaSeconds);
	void TickFlushHook(UNetDriver* NetDriver, float DeltaSeconds) // https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/TickFlush/
	{
		if (NetDriver && NetDriver->ClientConnections.Num() > 0 && NetDriver->ClientConnections[0]->InternalAck)
		{
			// ServerReplicateActors https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/ServerReplicateActors/
			void** ReplicationDriverVFT = *(void***)GetWorld()->NetDriver->ReplicationDriver;
			Listening::ServerReplicateActors = decltype(Listening::ServerReplicateActors)(ReplicationDriverVFT[0x5E]);
			Listening::ServerReplicateActors(NetDriver->ReplicationDriver);
		}
		return TickFlushOriginal(NetDriver, DeltaSeconds);
	}

	bool(*ReadyToStartMatchOriginal)(AFortGameModeAthena* GameMode);
	bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
	{
		TArray<AActor*> WarmupActors;
		UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

		int WarmupSpots = WarmupActors.Num();

		WarmupActors.Free();

		if (WarmupSpots == 0)
			return false;

		static bool bReadyToStartMatchHook = false;
		if (bReadyToStartMatchHook)
			return false;
		bReadyToStartMatchHook = true;
		static bool bInit = false;
		if (!bInit)
		{
			bInit = true;
			UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
			if (!Playlist)
			{
				return false;
			}
			GetGameMode()->WarmupRequiredPlayerCount = 1;
			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
			GetGameState()->OnRep_CurrentPlaylistInfo();



			//Dont check for map info, very skunked, + I freed all the playerStartActors so theres no need for this

			GetGameMode()->GameSession = SpawnActor2<AFortGameSessionDedicatedAthena>({});
			GetGameMode()->GameSession->MaxPlayers = 100;

			static bool Listening = false;
			if (!Listening)
			{
				Listening = true;
				Listening::Listen();
				
				GetGameMode()->WarmupRequiredPlayerCount = 1;
				//Why just why GetGameMode()->DefaultPawnClass = UObject::FindObject<UClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");
				GetGameMode()->bWorldIsReady = true;
			}

		}

		if (GetGameMode()->AlivePlayers.Num() >= 1) return true;
		LOG("Returning False: bReadyToStartMatch");
		return false;
	}
        static uint8 NextTeam = 3; //Dont change or bad sigma
	static uint8 LastPlayers = 0;
	EFortTeam PickTeamHook(AFortGameModeAthena* GM, uint8 Preffered, AFortPlayerControllerAthena* PC)
	{
		uint8 Return = 3;
		AFortGameStateAthena* GameState = (AFortGameStateAthena*)UWorld::GetWorld()->GameState;
		LastPlayers++;
		if (LastPlayers >= GameState->CurrentPlaylistInfo.BasePlaylist->MaxSquadSize)
		{
			NextTeam++;
			LastPlayers = 0;
		}

		return EFortTeam(Return);
	}
	void (*HandleStartingNewPlayerOG)(AFortGameModeAthena* GM, AFortPlayerControllerAthena* PC);
	void HandleStartingNewPlayerHook(AFortGameModeAthena* GM, AFortPlayerControllerAthena* PC)
	{
		((AFortPlayerStateAthena*)PC->PlayerState)->SquadId = ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex - 3;
		((AFortPlayerStateAthena*)PC->PlayerState)->OnRep_SquadId();
		
		FGameMemberInfo PlayerInfo = FGameMemberInfo();
		PlayerInfo.ReplicationID = -1;
		PlayerInfo.ReplicationKey = -1;
		PlayerInfo.MostRecentArrayReplicationKey = -1;
		PlayerInfo.TeamIndex = ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex;
		PlayerInfo.SquadId = ((AFortPlayerStateAthena*)PC->PlayerState)->SquadId;
		PlayerInfo.MemberUniqueId = PC->PlayerState->UniqueId;

		GetGameState()->GameMemberInfoArray.Members.Add(PlayerInfo);
		GetGameState()->GameMemberInfoArray.MarkArrayDirty();

		return HandleStartingNewPlayerOG(GM, PC);
	}

	APawn* SpawnDefaultPawnFor(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
	{
		if (NewPlayer && StartSpot)
		{
			auto Transform = StartSpot->GetTransform();

			return GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);
		}

		return 0;
	}
}
