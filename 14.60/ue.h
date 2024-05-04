#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
#include "Includes/SDK/SDK.hpp"
using namespace SDK;
#include "Includes/minhook/MinHook.h"
#pragma comment(lib, "Includes/minhook/minhook.lib")

bool bDebugging = true;
bool bCreative = false;

void HookAddress(uintptr_t Address, LPVOID Detour, LPVOID* OG = nullptr)
{
	MH_CreateHook((LPVOID)Address, Detour, OG);
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

AFortGameModeAthena* GetGameMode()
{
	return (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
}

AFortGameStateAthena* GetGameState()
{
	return (AFortGameStateAthena*)GetWorld()->GameState;
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

template <class T>
T* SpawnActor(FVector loc, AActor* Owner)
{
	FTransform Transform = {};
	Transform.Rotation = { 0,0,0,1 };
	Transform.Scale3D = { 1,1,1 };
	Transform.Translation = loc;
	AActor* BeginSpawn = UGameplayStatics::GetDefaultObj()->BeginDeferredActorSpawnFromClass(GetWorld(), T::StaticClass(), Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner);
	return (T*)UGameplayStatics::GetDefaultObj()->FinishSpawningActor(BeginSpawn, Transform);
}

