#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LowTowerRuntime.FortHardyAnimInstance
// (None)

class UClass* UFortHardyAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHardyAnimInstance");

	return Clss;
}


// FortHardyAnimInstance LowTowerRuntime.Default__FortHardyAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHardyAnimInstance* UFortHardyAnimInstance::GetDefaultObj()
{
	static class UFortHardyAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHardyAnimInstance*>(UFortHardyAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class LowTowerRuntime.FortHardyComponent_Telemetry
// (None)

class UClass* UFortHardyComponent_Telemetry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHardyComponent_Telemetry");

	return Clss;
}


// FortHardyComponent_Telemetry LowTowerRuntime.Default__FortHardyComponent_Telemetry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHardyComponent_Telemetry* UFortHardyComponent_Telemetry::GetDefaultObj()
{
	static class UFortHardyComponent_Telemetry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHardyComponent_Telemetry*>(UFortHardyComponent_Telemetry::StaticClass()->DefaultObject);

	return Default;
}


// Function LowTowerRuntime.FortHardyComponent_Telemetry.SetExtractionReason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHardyExtractionReason  Reason                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHardyComponent_Telemetry::SetExtractionReason(enum class EHardyExtractionReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHardyComponent_Telemetry", "SetExtractionReason");

	Params::UFortHardyComponent_Telemetry_SetExtractionReason_Params Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowTowerRuntime.FortLaurelAnimInstance
// (None)

class UClass* UFortLaurelAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLaurelAnimInstance");

	return Clss;
}


// FortLaurelAnimInstance LowTowerRuntime.Default__FortLaurelAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLaurelAnimInstance* UFortLaurelAnimInstance::GetDefaultObj()
{
	static class UFortLaurelAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLaurelAnimInstance*>(UFortLaurelAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function LowTowerRuntime.FortLaurelAnimInstance.SetLaurelInformation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInHasItemInInventory                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInPawnIsDestroyingBuildingForNav                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasPawnGoal                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InGoalActor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLaurelAnimInstance::SetLaurelInformation(bool bInHasItemInInventory, bool bInPawnIsDestroyingBuildingForNav, bool bInHasPawnGoal, class AActor* InGoalActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLaurelAnimInstance", "SetLaurelInformation");

	Params::UFortLaurelAnimInstance_SetLaurelInformation_Params Parms{};

	Parms.bInHasItemInInventory = bInHasItemInInventory;
	Parms.bInPawnIsDestroyingBuildingForNav = bInPawnIsDestroyingBuildingForNav;
	Parms.bInHasPawnGoal = bInHasPawnGoal;
	Parms.InGoalActor = InGoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowTowerRuntime.FortLaurelAnimInstance.SetAnimInstanceInformation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsActive                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLaurelAnimInstance::SetAnimInstanceInformation(bool bInIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLaurelAnimInstance", "SetAnimInstanceInformation");

	Params::UFortLaurelAnimInstance_SetAnimInstanceInformation_Params Parms{};

	Parms.bInIsActive = bInIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowTowerRuntime.FortLaurelComponent_Telemetry
// (None)

class UClass* UFortLaurelComponent_Telemetry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLaurelComponent_Telemetry");

	return Clss;
}


// FortLaurelComponent_Telemetry LowTowerRuntime.Default__FortLaurelComponent_Telemetry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLaurelComponent_Telemetry* UFortLaurelComponent_Telemetry::GetDefaultObj()
{
	static class UFortLaurelComponent_Telemetry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLaurelComponent_Telemetry*>(UFortLaurelComponent_Telemetry::StaticClass()->DefaultObject);

	return Default;
}


// Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetLaurelType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELaurelType             Type                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLaurelComponent_Telemetry::SetLaurelType(enum class ELaurelType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLaurelComponent_Telemetry", "SetLaurelType");

	Params::UFortLaurelComponent_Telemetry_SetLaurelType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetExtractionReason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELaurelExtractionReason Reason                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLaurelComponent_Telemetry::SetExtractionReason(enum class ELaurelExtractionReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLaurelComponent_Telemetry", "SetExtractionReason");

	Params::UFortLaurelComponent_Telemetry_SetExtractionReason_Params Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowTowerRuntime.FortLaurelComponent_Telemetry.OnDropAllItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELaurelDropItemReason   DropItemReason                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLaurelComponent_Telemetry::OnDropAllItems(enum class ELaurelDropItemReason DropItemReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLaurelComponent_Telemetry", "OnDropAllItems");

	Params::UFortLaurelComponent_Telemetry_OnDropAllItems_Params Parms{};

	Parms.DropItemReason = DropItemReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


