#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
#include "Includes/SDK/SDK.hpp"
using namespace SDK;

UFortEngine* GetEngine()
{
	auto Engine = UObject::FindObject<UFortEngine>("FortEngine_0");
	return Engine;
}
UWorld* GetWorld()
{
	auto World = GetEngine()->GameViewport->World;
	return World;
}

uintptr_t GetBaseAddr()
{
	auto BaseAddr = __int64(GetModuleHandleA(0));
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