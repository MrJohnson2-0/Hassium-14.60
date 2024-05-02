#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_HoneyDew_Swing_4.GCN_HighTower_HoneyDew_Swing_4_C
// (None)

class UClass* UGCN_HighTower_HoneyDew_Swing_4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_HoneyDew_Swing_4_C");

	return Clss;
}


// GCN_HighTower_HoneyDew_Swing_4_C GCN_HighTower_HoneyDew_Swing_4.Default__GCN_HighTower_HoneyDew_Swing_4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_HoneyDew_Swing_4_C* UGCN_HighTower_HoneyDew_Swing_4_C::GetDefaultObj()
{
	static class UGCN_HighTower_HoneyDew_Swing_4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_HoneyDew_Swing_4_C*>(UGCN_HighTower_HoneyDew_Swing_4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_HighTower_HoneyDew_Swing_4.GCN_HighTower_HoneyDew_Swing_4_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnExecute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGCN_HighTower_HoneyDew_Swing_4_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_HighTower_HoneyDew_Swing_4_C", "OnExecute");

	Params::UGCN_HighTower_HoneyDew_Swing_4_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


