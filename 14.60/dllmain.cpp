#include "ue.h"

DWORD Main(LPVOID)
{
    if (Debugging)
    {
        AllocConsole();
        FILE* sFile;
        freopen_s(&sFile, "CONOUT$", "w", stdout);
        SetConsoleTitleA("Hassium 14.60 || Loading Funcs...");
        std::cout << "BaseAddr: {}" + GetBaseAddr();
        if (GetEngine == UFortEngine::GetDefaultObj)
        {
            std::cout << "FortEngine_0 is Default Object of class UFortEngine";
        }
        else {
            std::cout << "UFortEngine DefaultObject: ";
        }
    }
    GetKKSL()->ExecuteConsoleCommand(GetWorld(), L"open Apollo_Terrain", nullptr);
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

