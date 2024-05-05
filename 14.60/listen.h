#pragma once

namespace Listening
{
	bool (*InitListen)(UNetDriver* NetDriver, void* InNotify, FURL& ListenURL, bool bReUseAddressAndPort, FString& Error); // https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/Engine/UNetDriver/InitListen/
	void (*SetWorld)(UNetDriver* NetDriver,UWorld* World); // https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/SetWorld/
	int32 (*ServerReplicateActors)(void*); // https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/ServerReplicateActors/
	bool (*InitHost)(AOnlineBeacon* Beacon); // https://docs.unrealengine.com/4.26/en-US/API/Plugins/OnlineSubsystemUtils/AOnlineBeaconHost/InitHost/
	void (*PauseBeaconRequests)(AOnlineBeacon* Beacon, bool bPause); // https://docs.unrealengine.com/4.27/en-US/API/Plugins/OnlineSubsystemUtils/AOnlineBeacon/PauseBeaconRequests/
	void Listen()
	{
		InitHost = decltype(InitHost)(Memory::MergeOffset(0xC61330));
		SetWorld = decltype(SetWorld)(Memory::MergeOffset(0x4E3E980));
		PauseBeaconRequests = decltype(PauseBeaconRequests)(Memory::MergeOffset(0x293C9C0));
		InitListen = decltype(InitListen)(Memory::MergeOffset(0xC61890));
		auto NewBC = SpawnActor<AFortOnlineBeaconHost>({}, {});
		NewBC->ListenPort = 7777;

		InitHost(NewBC);
		PauseBeaconRequests(NewBC, false);
		GetWorld()->NetDriver = NewBC->NetDriver;
		if (!GetWorld()->NetDriver)
		{
			std::cout << "No Driver Found!";
			return;
		}
		else if (GetWorld()->NetDriver)
		{
			GetWorld()->NetDriver->World = GetWorld();
			GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			FURL URL = FURL();
			URL.Port = 7777;

			GetGameMode()->GameSession->MaxPlayers = 100;
			InitListen(GetWorld()->NetDriver, GetWorld(), URL, true, Err);
			SetWorld(GetWorld()->NetDriver, GetWorld());

			GetWorld()->LevelCollections[0].NetDriver = GetWorld()->NetDriver;
			GetWorld()->LevelCollections[1].NetDriver = GetWorld()->NetDriver;
			
			std::cout << "Finished Listening" << std::endl;
			SetConsoleTitleA("Hassium 14.60 || Server Started Listening On Port: 7777");
		}
	}
}