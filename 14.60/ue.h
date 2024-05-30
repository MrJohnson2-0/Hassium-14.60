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

	auto Actor = UGameplayStatics::GetDefaultObj()->BeginSpawningActorFromClass(UWorld::GetWorld(), Class, Transform, false, nullptr);
	if (Actor)
		UGameplayStatics::GetDefaultObj()->FinishSpawningActor(Actor, Transform);
	return (T*)Actor;
}


inline UObject* (*StaticFindObject_)(UClass* Class, UObject* Package, const wchar_t* OrigInName, bool ExactClass) = decltype(StaticFindObject_)(__int64(GetModuleHandleW(0)) + 0x3774c20);
inline UObject* (*StaticLoadObject_)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation) = decltype(StaticLoadObject_)(__int64(GetModuleHandleW(0)) + 0x3776110);
template <typename T>
inline T* StaticFindObject(std::string ObjectPath, UClass* Class = UObject::StaticClass())
{
	return (T*)StaticFindObject_(Class, nullptr, std::wstring(ObjectPath.begin(), ObjectPath.end()).c_str(), false);
}

template <typename T>
inline T* StaticLoadObject(std::string Path, UClass* InClass = T::StaticClass(), UObject* Outer = nullptr)
{
	return (T*)StaticLoadObject_(InClass, Outer, std::wstring(Path.begin(), Path.end()).c_str(), nullptr, 0, nullptr, false);
}