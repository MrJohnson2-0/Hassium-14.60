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

			GetGameMode()->WarmupRequiredPlayerCount = 1;
			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
			GetGameState()->OnRep_CurrentPlaylistInfo();



			//Dont check for map info, very skunked, + I freed all the playerStartActors so theres no need for this

			float TimeSeconds = UGameplayStatics::GetDefaultObj()->GetTimeSeconds(UWorld::GetWorld());
			float Test = 99999.f;

			GetGameMode()->WarmupRequiredPlayerCount = 1;
			GetGameMode()->WarmupCountdownDuration = Test;
			GetGameMode()->WarmupEarlyCountdownDuration = TimeSeconds;
			GetGameState()->WarmupCountdownStartTime = TimeSeconds;
			GetGameState()->WarmupCountdownEndTime = TimeSeconds + Test;

			GetGameMode()->GameSession = SpawnActor2<AGameSession>({});
			GetGameMode()->GameSession->MaxPlayers = 100;

			GetGameState()->GameSessionId = L"ID";
			GetGameState()->OnRep_GameSessionID();

			GetGameState()->OnRep_CurrentPlaylistInfo();

			GetGameMode()->WarmupRequiredPlayerCount = 1;

			GetGameState()->AirCraftBehavior = Playlist->AirCraftBehavior;
			GetGameMode()->bWorldIsReady = true; // Calls SpawnDefaultPawnFor????/

			static bool Listening = false;
			if (!Listening)
			{
				Listening = true;
				Listening::Listen();
				//Dont need to spawn game session
				
				GetGameMode()->WarmupRequiredPlayerCount = 1;
				GetGameMode()->DefaultPawnClass = UObject::FindObject<UClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");
				GetGameState()->DefaultParachuteDeployTraceForGroundDistance = 10000;
			}

		}

		bool Ret = false;

		//Returning True is stripped on Chapter 2 and up+
		if (GetGameState()->PlayersLeft >= GetGameMode()->WarmupRequiredPlayerCount)
		{
			Ret = true;
		}
		else
		{
			Ret = ReadyToStartMatchOriginal(GameMode);
		}

		return Ret;
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

	void ServerAcknowledgePossesion(APlayerController* Controller, APawn* P) 
	{
		std::cout << "ServerAcknowledgePossesion";
		Controller->AcknowledgedPawn = P;
	}

	void (*HandleStartingNewPlayerOriginal)(AGameModeBase* Base, AFortPlayerControllerAthena* NewPlayer);
	void HandleStartingNewPlayer(AGameModeBase* Base, AFortPlayerControllerAthena* NewPlayer)
	{
		std::cout << "Join!!!!!!";

		auto PS = reinterpret_cast<AFortPlayerStateAthena*>(NewPlayer->PlayerState);
		NewPlayer->bHasServerFinishedLoading = true;
		NewPlayer->OnRep_bHasServerFinishedLoading();

		PS->bHasStartedPlaying = true;
		PS->OnRep_bHasStartedPlaying();

		return HandleStartingNewPlayerOriginal(Base, NewPlayer);
	}

	BYTE* ChangeGameSessionIdHook()
	{
		return nullptr;
	}
}