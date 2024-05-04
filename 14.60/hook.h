#pragma once

namespace Hooking {
	int Patch()
	{
		return 0;
	}
	bool Patch2()
	{
		return true;
	}
	void(*ReadyToStartMatchOriginal)(AFortGameModeBase* GMB);
	void ReadyToStartMatchHook(AFortGameModeBase* GMB)
	{

	}
	void (*ProcessEvent0)(UObject* Obj, UFunction* UEFunction, void* Params);
	void ProcessEvent_Hook(UObject* Obj, UFunction* UEFunction, void* Params)
	{
		std::string UEFuncName = UEFunction->GetName();
		static bool bReadyToStartMatchHook = false;
		if (UEFuncName == "ReadyToStartMatch" && !bReadyToStartMatchHook)
		{
			bReadyToStartMatchHook = true;
			std::cout << "ReadyToStartMatchCalled!!!!!!!!!!!!!!!";
			UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_DefaultSolo.Playlist_DefaultSolo");
			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistId = Playlist->PlaylistId;
			GetGameMode()->CurrentPlaylistName = Playlist->PlaylistName;
			GetGameMode()->CurrentPlaylistId = Playlist->PlaylistId;
			GetGameState()->OnRep_CurrentPlaylistInfo();
			GetGameState()->OnRep_CurrentPlaylistId();
		}

		if (UEFuncName == "SpawnDefaultPawnFor")
		{
			AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Obj;
			TArray<AActor*> SpawnLocs;
			if (bCreative)
			{
				UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartCreative::StaticClass(), &SpawnLocs);
			}
			else {
				UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &SpawnLocs);
			}
			
			FVector SpawnLocationForPawn = SpawnLocs[(rand() % (size_t)SpawnLocs.Num())]->K2_GetActorLocation();
			AFortPlayerPawnAthena* Pawn = SpawnActor<AFortPlayerPawnAthena>(SpawnLocationForPawn, nullptr);
			PC->Possess(Pawn);
		}

		if (UEFuncName == "ServerAcknowledgePossesion")
		{
			auto InParams = (Params::APlayerController_ServerAcknowledgePossession_Params*)Params;
			AFortPlayerPawnAthena* Pawn = (AFortPlayerPawnAthena*)Obj;
			AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Obj;
			PC->AcknowledgedPawn = Pawn; //Sigma Behavior!!!!!!!
		}

		return ProcessEvent0(Obj, UEFunction, Params);
	}
}