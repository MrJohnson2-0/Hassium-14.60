#include "ue.h"
#include "log.h"

DWORD Main(LPVOID)
{
    if (Debugging)
    {
        AllocConsole();
        FILE* sFile;
        freopen_s(&sFile, "CONOUT$", "w", stdout);
        InitGObjects();
        MH_Initialize();
        
        LOG("BaseAddr: 0x{}" + GetBaseAddr());
    }
    //GetEngine()->GameInstance->LocalPlayers[0]->PlayerController->SwitchLevel(L"Apollo_Terrain");
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

