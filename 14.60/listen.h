#pragma once

namespace Listening
{
	bool (*InitListen)(UNetDriver* NetDriver, void* InNotify, FURL& ListenURL, bool bReUseAddressAndPort, FString& Error); // https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/Engine/UNetDriver/InitListen/
	void (*SetWorld)(UNetDriver* NetDriver,UWorld* World); // https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/SetWorld/
	int32 (*ServerReplicateActors)(void*); // https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/ServerReplicateActors/
	bool (*InitHost)(AOnlineBeacon* Beacon); // https://docs.unrealengine.com/4.26/en-US/API/Plugins/OnlineSubsystemUtils/AOnlineBeaconHost/InitHost/
	void (*PauseBeaconRequests)(AOnlineBeacon* Beacon, bool bPause); // https://docs.unrealengine.com/4.27/en-US/API/Plugins/OnlineSubsystemUtils/AOnlineBeacon/PauseBeaconRequests/
	UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* InWorld, FName NetDriverDefinition); // https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/Engine/UEngine/CreateNetDriver/
	void Listen()
	{
		CreateNetDriver = decltype(CreateNetDriver)(Memory::MergeOffset(0x50D2BF0));
		InitHost = decltype(InitHost)(Memory::MergeOffset(0xC61330));
		SetWorld = decltype(SetWorld)(Memory::MergeOffset(0x4E3E980));
		PauseBeaconRequests = decltype(PauseBeaconRequests)(Memory::MergeOffset(0x293C9C0));
		InitListen = decltype(InitListen)(Memory::MergeOffset(0xC61890));

		FName NetDriverDefinition = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(TEXT("GameNetDriver"));
		UNetDriver* NetDriver = CreateNetDriver(GetEngine(), GetWorld(), NetDriverDefinition);
		if (NetDriver)
		{
			NetDriver->NetDriverName = NetDriverDefinition;
			NetDriver->World = GetWorld();
			FString Error;
			FURL url = FURL();
			url.Port = 7777;

			InitListen(NetDriver, GetWorld(), url, false, Error);
			SetWorld(NetDriver, GetWorld());
			GetWorld()->NetDriver = NetDriver;
			int LevelCollectionsNum = GetWorld()->LevelCollections.Num();
			for (int i = 0; i < LevelCollectionsNum; i++)
			{
				auto LevelCollections = GetWorld()->LevelCollections;
				LevelCollections[i].NetDriver = NetDriver;
			}
		}
	}
}