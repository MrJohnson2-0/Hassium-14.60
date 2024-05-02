#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LagerRuntime.FortAthenaLivingWorldConfigData
// (None)

class UClass* UFortAthenaLivingWorldConfigData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldConfigData");

	return Clss;
}


// FortAthenaLivingWorldConfigData LagerRuntime.Default__FortAthenaLivingWorldConfigData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldConfigData* UFortAthenaLivingWorldConfigData::GetDefaultObj()
{
	static class UFortAthenaLivingWorldConfigData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldConfigData*>(UFortAthenaLivingWorldConfigData::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldEventData
// (None)

class UClass* UFortAthenaLivingWorldEventData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEventData");

	return Clss;
}


// FortAthenaLivingWorldEventData LagerRuntime.Default__FortAthenaLivingWorldEventData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEventData* UFortAthenaLivingWorldEventData::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEventData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEventData*>(UFortAthenaLivingWorldEventData::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldManager
// (None)

class UClass* UFortAthenaLivingWorldManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldManager");

	return Clss;
}


// FortAthenaLivingWorldManager LagerRuntime.Default__FortAthenaLivingWorldManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldManager* UFortAthenaLivingWorldManager::GetDefaultObj()
{
	static class UFortAthenaLivingWorldManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldManager*>(UFortAthenaLivingWorldManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnSpawnedActorDestroy");

	Params::UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
// (Final, Native, Private)
// Parameters:
// class AFortAthenaPatrolPath*       PatrolPath                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnPatrolPathAdded");

	Params::UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params Parms{};

	Parms.PatrolPath = PatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      PointProvider                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerUnregisterPointProvider");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
// (Final, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleVerboseLogging");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
// (Final, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleGenerateEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
// (Final, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleActorMinimap");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      PointProvider                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerRegisterPointProvider");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
// (Final, Exec, Native, Public)
// Parameters:
// int32                              ProviderIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int32 ProviderIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerProviderDebugActor");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params Parms{};

	Parms.ProviderIndex = ProviderIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
// (Final, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerGenerateEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
// (Final, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerFlush");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// (None)

class UClass* IFortAthenaLivingWorldPointProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProviderInterface");

	return Clss;
}


// FortAthenaLivingWorldPointProviderInterface LagerRuntime.Default__FortAthenaLivingWorldPointProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IFortAthenaLivingWorldPointProviderInterface* IFortAthenaLivingWorldPointProviderInterface::GetDefaultObj()
{
	static class IFortAthenaLivingWorldPointProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IFortAthenaLivingWorldPointProviderInterface*>(IFortAthenaLivingWorldPointProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorFailed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFortAthenaLivingWorldPointProviderInterface::OnSpawnedActorFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "OnSpawnedActorFailed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IFortAthenaLivingWorldPointProviderInterface::OnSpawnedActor(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "OnSpawnedActor");

	Params::IFortAthenaLivingWorldPointProviderInterface_OnSpawnedActor_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnEventRequested
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFortAthenaLivingWorldPointProviderInterface::OnEventRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "OnEventRequested");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFortAthenaLivingWorldPointProviderFilterRulesPointFilter                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IFortAthenaLivingWorldPointProviderInterface::IsEnabled(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "IsEnabled");

	Params::IFortAthenaLivingWorldPointProviderInterface_IsEnabled_Params Parms{};

	Parms.PointFilter = PointFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFortAthenaLivingWorldPointProviderFilterRulesPointFilter                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IFortAthenaLivingWorldPointProviderInterface::GetValidLocation(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, struct FVector* OutPosition, struct FRotator* OutRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetValidLocation");

	Params::IFortAthenaLivingWorldPointProviderInterface_GetValidLocation_Params Parms{};

	Parms.PointFilter = PointFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       FilterTags                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void IFortAthenaLivingWorldPointProviderInterface::GetFiltersTags(struct FGameplayTagContainer* FilterTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetFiltersTags");

	Params::IFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterTags != nullptr)
		*FilterTags = std::move(Parms.FilterTags);

}


// Class LagerRuntime.FortAthenaLivingWorldVolume
// (Actor)

class UClass* AFortAthenaLivingWorldVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldVolume");

	return Clss;
}


// FortAthenaLivingWorldVolume LagerRuntime.Default__FortAthenaLivingWorldVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaLivingWorldVolume* AFortAthenaLivingWorldVolume::GetDefaultObj()
{
	static class AFortAthenaLivingWorldVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaLivingWorldVolume*>(AFortAthenaLivingWorldVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered
// (Final, Native, Private)
// Parameters:
// class AActor*                      PointProvider                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnPointProviderRegistered(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnPointProviderRegistered");

	Params::AFortAthenaLivingWorldVolume_OnPointProviderRegistered_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaPatrolPathPointProvider
// (Actor)

class UClass* AFortAthenaPatrolPathPointProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPatrolPathPointProvider");

	return Clss;
}


// FortAthenaPatrolPathPointProvider LagerRuntime.Default__FortAthenaPatrolPathPointProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaPatrolPathPointProvider* AFortAthenaPatrolPathPointProvider::GetDefaultObj()
{
	static class AFortAthenaPatrolPathPointProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaPatrolPathPointProvider*>(AFortAthenaPatrolPathPointProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnSpawnedActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaPatrolPathPointProvider::OnSpawnedActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnSpawnedActorDestroyed");

	Params::AFortAthenaPatrolPathPointProvider_OnSpawnedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortCheatManager_LivingWorldManager
// (None)

class UClass* UFortCheatManager_LivingWorldManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_LivingWorldManager");

	return Clss;
}


// FortCheatManager_LivingWorldManager LagerRuntime.Default__FortCheatManager_LivingWorldManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_LivingWorldManager* UFortCheatManager_LivingWorldManager::GetDefaultObj()
{
	static class UFortCheatManager_LivingWorldManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_LivingWorldManager*>(UFortCheatManager_LivingWorldManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawn(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawn");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


