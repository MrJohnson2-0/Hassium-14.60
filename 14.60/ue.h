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

template <class T>
T* SpawnActor2(FVector Loc, FRotator Rotation = FRotator{ 0,0,0 }, UClass* Class = T::StaticClass(), FVector Scale3D = { 1, 1,1 })
{
	FQuat Quat{};
	FTransform Transform{};
	auto DEG = 3.14159 / 180;
	auto Divide = DEG / 2;
	auto SP = sin(Rotation.Pitch * Divide);
	auto CP = cos(Rotation.Pitch * Divide);

	auto SY = sin(Rotation.Yaw * Divide);
	auto CY = cos(Rotation.Yaw * Divide);

	auto SR = sin(Rotation.Roll * Divide);
	auto CR = cos(Rotation.Roll * Divide);

	Quat.X = CR * SP * SY - SR * CP * CY;
	Quat.Y = -CR * SP * CY - SR * CP * SY;
	Quat.Z = CR * CP * SY - SR * SP * CY;
	Quat.W = CR * CP * CY + SR * SP * SY;

	Transform.Rotation = Quat;
	Transform.Scale3D = Scale3D;
	Transform.Translation = Loc;

	auto Actor = UGameplayStatics::GetDefaultObj()->BeginSpawningActorFromClass(GetWorld(), T::StaticClass, Transform, false, nullptr);
	if (Actor)
		UGameplayStatics::GetDefaultObj()->FinishSpawningActor(Actor, Transform);
	return (T*)Actor;
}
