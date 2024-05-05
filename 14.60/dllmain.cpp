#include "ue.h"
#include "memory.h"
#include "log.h"
#include "listen.h"
#include "hook.h"

DWORD Main(LPVOID)
{
    if (bDebugging)
    {
        AllocConsole();
        FILE* sFile;
        freopen_s(&sFile, "CONOUT$", "w", stdout);
        SetConsoleTitleA("Hassium 14.60 || Loading Funcs....");
    }
    MH_Initialize();
    InitGObjects();
    FFree = decltype(FFree)(Memory::MergeOffset(Offsets::Free));
    UKismetSystemLibrary::GetDefaultObj()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Apollo_Terrain", nullptr);
    GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::KickPlayer), Hooking::Patch3, nullptr);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::KickPlayer));
    
    
    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::CollectGarbage), Hooking::Patch4, nullptr);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::CollectGarbage));
    

    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::TickFlush), Hooking::TickFlushHook, (void**)&Hooking::TickFlushOriginal);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::TickFlush));
    
    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::GetNetMode), Hooking::GetNetMode, nullptr);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::GetNetMode));
    
    //MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::ActorGetNetMode), Hooking::GetNetModeActor, nullptr);
    //MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::ActorGetNetMode));

    MH_CreateHook((LPVOID)Memory::MergeOffset(0x2653520), Hooking::ChangeGameSessionIdHook, nullptr);
    MH_EnableHook((LPVOID)Memory::MergeOffset(0x2653520));

    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::ReadyToStartMatch), Hooking::ReadyToStartMatchHook, (void**)&Hooking::ReadyToStartMatchOriginal);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::ReadyToStartMatch));

    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::SpawnDefaultPawnFor), Hooking::SpawnDefaultPawnFor, nullptr);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::SpawnDefaultPawnFor));
    
    Memory::VirtualHook(&AFortPlayerPawnAthena::GetDefaultObj()->Vft, 0x100, Hooking::ServerAcknowledgePossesion, nullptr);

    //static auto HandleStartingNewPlayer = UObject::FindObject<UFunction>("/Script.Enigne.GameModeBase.HandleStartingNewPlayer");
    //Memory::HookFunction(HandleStartingNewPlayer, Hooking::HandleStartingNewPlayer, (void**)&Hooking::HandleStartingNewPlayerOriginal);

    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
        break;
    }
    return TRUE;
}

