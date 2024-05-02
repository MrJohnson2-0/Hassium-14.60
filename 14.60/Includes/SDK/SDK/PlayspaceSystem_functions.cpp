#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlayspaceSystem.PlayspacePlayerController
// (Actor, PlayerController)

class UClass* APlayspacePlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspacePlayerController");

	return Clss;
}


// PlayspacePlayerController PlayspaceSystem.Default__PlayspacePlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayspacePlayerController* APlayspacePlayerController::GetDefaultObj()
{
	static class APlayspacePlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayspacePlayerController*>(APlayspacePlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.GameplayVolume
// (Actor)

class UClass* AGameplayVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayVolume");

	return Clss;
}


// GameplayVolume PlayspaceSystem.Default__GameplayVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayVolume* AGameplayVolume::GetDefaultObj()
{
	static class AGameplayVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayVolume*>(AGameplayVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.GameplayVolume.UpdateSize
// (Final, Native, Protected, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     NewScale                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayVolume::UpdateSize(struct FVector& NewScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayVolume", "UpdateSize");

	Params::AGameplayVolume_UpdateSize_Params Parms{};

	Parms.NewScale = NewScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.OverlapComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UOverlapComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverlapComponent");

	return Clss;
}


// OverlapComponent PlayspaceSystem.Default__OverlapComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverlapComponent* UOverlapComponent::GetDefaultObj()
{
	static class UOverlapComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlapComponent*>(UOverlapComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOverlapComponent::OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlapComponent", "OnEndActorOverlap");

	Params::UOverlapComponent_OnEndActorOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.OverlapComponent.OnBeginActorOverlap
// (Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UOverlapComponent::OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlapComponent", "OnBeginActorOverlap");

	Params::UOverlapComponent_OnBeginActorOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.Playspace
// (Actor)

class UClass* APlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Playspace");

	return Clss;
}


// Playspace PlayspaceSystem.Default__Playspace
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayspace* APlayspace::GetDefaultObj()
{
	static class APlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayspace*>(APlayspace::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
// (Final, Native, Protected)
// Parameters:

void APlayspace::OnRep_PlayspaceUsers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_PlayspaceUsers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.Playspace.OnRep_MatchStartTime
// (Native, Protected)
// Parameters:

void APlayspace::OnRep_MatchStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_MatchStartTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
// (Final, Native, Protected)
// Parameters:

void APlayspace::OnRep_bMatchHasEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_bMatchHasEnded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.Playspace.OnRep_bIsInitialized
// (Final, Native, Protected)
// Parameters:

void APlayspace::OnRep_bIsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_bIsInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspaceComponent
// (None)

class UClass* UPlayspaceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent");

	return Clss;
}


// PlayspaceComponent PlayspaceSystem.Default__PlayspaceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent* UPlayspaceComponent::GetDefaultObj()
{
	static class UPlayspaceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent*>(UPlayspaceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
// (None)

class UClass* UPlayspaceComponent_PlayerSpawning::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_PlayerSpawning");

	return Clss;
}


// PlayspaceComponent_PlayerSpawning PlayspaceSystem.Default__PlayspaceComponent_PlayerSpawning
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_PlayerSpawning* UPlayspaceComponent_PlayerSpawning::GetDefaultObj()
{
	static class UPlayspaceComponent_PlayerSpawning* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_PlayerSpawning*>(UPlayspaceComponent_PlayerSpawning::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
// (None)

class UClass* UPlayspaceControllerComponent_PlayerSpawning::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceControllerComponent_PlayerSpawning");

	return Clss;
}


// PlayspaceControllerComponent_PlayerSpawning PlayspaceSystem.Default__PlayspaceControllerComponent_PlayerSpawning
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceControllerComponent_PlayerSpawning* UPlayspaceControllerComponent_PlayerSpawning::GetDefaultObj()
{
	static class UPlayspaceControllerComponent_PlayerSpawning* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceControllerComponent_PlayerSpawning*>(UPlayspaceControllerComponent_PlayerSpawning::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UPlayspaceControllerComponent_PlayerSpawning::ServerMarkReadyForSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "ServerMarkReadyForSpawning");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
// (Final, Native, Private)
// Parameters:

void UPlayspaceControllerComponent_PlayerSpawning::OnRep_ReplicatedSpawnInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "OnRep_ReplicatedSpawnInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FReplicatedSpawnInfo        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FReplicatedSpawnInfo UPlayspaceControllerComponent_PlayerSpawning::GetSpawnInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "GetSpawnInfo");

	Params::UPlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PlayspaceSystem.PlayspaceGameMode
// (Actor)

class UClass* APlayspaceGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceGameMode");

	return Clss;
}


// PlayspaceGameMode PlayspaceSystem.Default__PlayspaceGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayspaceGameMode* APlayspaceGameMode::GetDefaultObj()
{
	static class APlayspaceGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayspaceGameMode*>(APlayspaceGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceGameState
// (Actor)

class UClass* APlayspaceGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceGameState");

	return Clss;
}


// PlayspaceGameState PlayspaceSystem.Default__PlayspaceGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayspaceGameState* APlayspaceGameState::GetDefaultObj()
{
	static class APlayspaceGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayspaceGameState*>(APlayspaceGameState::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceGameStateComponent
// (None)

class UClass* UPlayspaceGameStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceGameStateComponent");

	return Clss;
}


// PlayspaceGameStateComponent PlayspaceSystem.Default__PlayspaceGameStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceGameStateComponent* UPlayspaceGameStateComponent::GetDefaultObj()
{
	static class UPlayspaceGameStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceGameStateComponent*>(UPlayspaceGameStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
// (None)

class UClass* UPlayspaceGameStateComponent_PlayerSpawningManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceGameStateComponent_PlayerSpawningManager");

	return Clss;
}


// PlayspaceGameStateComponent_PlayerSpawningManager PlayspaceSystem.Default__PlayspaceGameStateComponent_PlayerSpawningManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceGameStateComponent_PlayerSpawningManager* UPlayspaceGameStateComponent_PlayerSpawningManager::GetDefaultObj()
{
	static class UPlayspaceGameStateComponent_PlayerSpawningManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceGameStateComponent_PlayerSpawningManager*>(UPlayspaceGameStateComponent_PlayerSpawningManager::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceLibrary
// (None)

class UClass* UPlayspaceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceLibrary");

	return Clss;
}


// PlayspaceLibrary PlayspaceSystem.Default__PlayspaceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceLibrary* UPlayspaceLibrary::GetDefaultObj()
{
	static class UPlayspaceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceLibrary*>(UPlayspaceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceManagerComponent
// (None)

class UClass* UPlayspaceManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceManagerComponent");

	return Clss;
}


// PlayspaceManagerComponent PlayspaceSystem.Default__PlayspaceManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceManagerComponent* UPlayspaceManagerComponent::GetDefaultObj()
{
	static class UPlayspaceManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceManagerComponent*>(UPlayspaceManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
// (Final, Native, Private)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPlayspaceManagerComponent::ProcessOverlapEvents(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceManagerComponent", "ProcessOverlapEvents");

	Params::UPlayspaceManagerComponent_ProcessOverlapEvents_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
// (Final, Native, Private)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayVolume*             Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceManagerComponent::OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceManagerComponent", "OnPlayerEndOverlapGameplayVolume");

	Params::UPlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
// (Final, Native, Private)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayVolume*             Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceManagerComponent::OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceManagerComponent", "OnPlayerBeginOverlapGameplayVolume");

	Params::UPlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspacePlayerManagerComponent
// (None)

class UClass* UPlayspacePlayerManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspacePlayerManagerComponent");

	return Clss;
}


// PlayspacePlayerManagerComponent PlayspaceSystem.Default__PlayspacePlayerManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspacePlayerManagerComponent* UPlayspacePlayerManagerComponent::GetDefaultObj()
{
	static class UPlayspacePlayerManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspacePlayerManagerComponent*>(UPlayspacePlayerManagerComponent::StaticClass()->DefaultObject);

	return Default;
}

}


