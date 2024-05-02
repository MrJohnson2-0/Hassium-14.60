#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
#include "Includes/SDK/SDK.hpp"
using namespace SDK;
#include "Includes/minhook/MinHook.h"
#pragma comment(lib, "Includes/minhook/minhook.lib")

UFortEngine* GetEngine()
{
	auto Engine = UObject::FindObject<UFortEngine>("FortEngine_");
	return Engine;
}
UWorld* GetWorld()
{
	auto World = GetEngine()->GameViewport->World;
	return World;
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