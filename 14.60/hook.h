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

	void (*ServerReadyToStartMatchOriginal)(AFortPlayerController* PlayerController); //No UE Doc For This its literally AFortPlayerController;
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
		UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &ActorsToFree); //Freeing PlayerStartActors
		int Num = ActorsToFree.Num();
		ActorsToFree.Free();
		if (Num == 0) //No Actors Will need to be free! 
		{
			return false;
		}
		static bool bReadyToStartMatchHook = false;
		if (bReadyToStartMatchHook)
			return false;
		bReadyToStartMatchHook = true;
		static bool bInit = false;
		if (!bInit)
		{
			bInit = true;
			UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena /Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
			GetGameState()->OnRep_CurrentPlaylistInfo();

			//Dont check for map info, very skunked, + I freed all the playerStartActors so theres no need for this

			static bool Listening = false;
			if (!Listening)
			{
				Listening = true;
				Listening::Listen();
				//Dont need to spawn game session
				GetGameMode()->GameSession->MaxPlayers = 100;
				GetGameState()->GameSessionId = L"ID";
				GetGameState()->OnRep_GameSessionID();
				GetGameMode()->StartMatch();
				GetGameMode()->StartPlay();
				/*
				EAthenaGamePhase Gamephase = GetGameState()->GamePhase;
				GetGameState()->GamePhase = EAthenaGamePhase::Warmup; //Unnecessary for just ingame
				GetGameState()->OnRep_GamePhase(Gamephase);
				*/
				GetGameMode()->WarmupRequiredPlayerCount = 1;
				GetGameMode()->WarmupEarlyCountdownDuration = 150.0f;
				GetGameState()->WarmupCountdownStartTime = 150.0f;
				GetGameState()->WarmupCountdownEndTime = 150.0f;
				GetGameMode()->bWorldIsReady = true; // Calls SpawnDefaultPawnFor????/
				
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