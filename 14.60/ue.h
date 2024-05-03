#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
#include "Includes/SDK/SDK.hpp"
using namespace SDK;
#include "Includes/minhook/MinHook.h"
#pragma comment(lib, "Includes/minhook/minhook.lib")

void HookFunction(uintptr_t Address, LPVOID Detour, LPVOID* OG)
{
	MH_CreateHook((LPVOID)Address, Detour, (void**)&OG);
	MH_EnableHook((LPVOID)Address);
}

UFortEngine* GetEngine()
{
	static auto Engine = UObject::FindObject<UFortEngine>("FortEngine_");
	return Engine;
}
UWorld* GetWorld()
{
	return GetEngine()->GameViewport->World;
}

uintptr_t GetBaseAddr()
{
	__int64 BaseAddr = __int64(GetModuleHandleW(0));
	return BaseAddr;
}

UKismetStringLibrary* GetKSL()
{
	auto Default = UKismetStringLibrary::GetDefaultObj();
	return Default;
}

UKismetSystemLibrary* GetKKSL()
{
	auto Default = UKismetSystemLibrary::GetDefaultObj();
	return Default;
}

bool Debugging = true;