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
    UKismetSystemLibrary::GetDefaultObj()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Apollo_Terrain", nullptr);
    GetEngine()->GameInstance->LocalPlayers.Remove(0);
    

    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::ReadyToStartMatch), Hooking::ReadyToStartMatchHook, (void**)&Hooking::ReadyToStartMatchOriginal);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::ReadyToStartMatch));

    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::SpawnDefaultPawnFor), Hooking::SpawnDefaultPawnFor, nullptr);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::SpawnDefaultPawnFor));

    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::KickPlayer), Hooking::Patch3, nullptr);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::KickPlayer));

    MH_CreateHook((LPVOID)Memory::MergeOffset(Offsets::CollectGarbage), Hooking::Patch4, nullptr);
    MH_EnableHook((LPVOID)Memory::MergeOffset(Offsets::CollectGarbage));

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

