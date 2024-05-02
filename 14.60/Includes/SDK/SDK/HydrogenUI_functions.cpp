#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HydrogenUI.HydrogenWidgetBase
// (None)

class UClass* UHydrogenWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HydrogenWidgetBase");

	return Clss;
}


// HydrogenWidgetBase HydrogenUI.Default__HydrogenWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UHydrogenWidgetBase* UHydrogenWidgetBase::GetDefaultObj()
{
	static class UHydrogenWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UHydrogenWidgetBase*>(UHydrogenWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function HydrogenUI.HydrogenWidgetBase.OnMutatorAvailable
// (Native, Protected, BlueprintCallable)
// Parameters:
// class AFortGameplayMutator*        MutatorActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHydrogenWidgetBase::OnMutatorAvailable(class AFortGameplayMutator* MutatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenWidgetBase", "OnMutatorAvailable");

	Params::UHydrogenWidgetBase_OnMutatorAvailable_Params Parms{};

	Parms.MutatorActor = MutatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenUI.HydrogenWidgetBase.MutatorReady
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaMutator_Hydrogen* MutatorActor                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHydrogenWidgetBase::MutatorReady(class AFortAthenaMutator_Hydrogen* MutatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenWidgetBase", "MutatorReady");

	Params::UHydrogenWidgetBase_MutatorReady_Params Parms{};

	Parms.MutatorActor = MutatorActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HydrogenUI.HydrogenWidgetBase.GetHydrogenMutator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortAthenaMutator_Hydrogen* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaMutator_Hydrogen* UHydrogenWidgetBase::GetHydrogenMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenWidgetBase", "GetHydrogenMutator");

	Params::UHydrogenWidgetBase_GetHydrogenMutator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenUI.HydrogenWidgetBase.GetCaptureProgressPercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AHydrogenObjectiveActor*     InObjective                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHydrogenWidgetBase::GetCaptureProgressPercent(class AHydrogenObjectiveActor* InObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenWidgetBase", "GetCaptureProgressPercent");

	Params::UHydrogenWidgetBase_GetCaptureProgressPercent_Params Parms{};

	Parms.InObjective = InObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


