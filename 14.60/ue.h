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