#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C
// (None)

class UClass* UM_MED_HighTower_Tapas_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_HighTower_Tapas_AnimBP_C");

	return Clss;
}


// M_MED_HighTower_Tapas_AnimBP_C M_MED_HighTower_Tapas_AnimBP.Default__M_MED_HighTower_Tapas_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_HighTower_Tapas_AnimBP_C* UM_MED_HighTower_Tapas_AnimBP_C::GetDefaultObj()
{
	static class UM_MED_HighTower_Tapas_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_HighTower_Tapas_AnimBP_C*>(UM_MED_HighTower_Tapas_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_HighTower_Tapas_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_HighTower_Tapas_AnimBP_C", "AnimGraph");

	Params::UM_MED_HighTower_Tapas_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C.OnBeginTargeting
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_HighTower_Tapas_AnimBP_C::OnBeginTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_HighTower_Tapas_AnimBP_C", "OnBeginTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C.OnEndTargeting
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_HighTower_Tapas_AnimBP_C::OnEndTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_HighTower_Tapas_AnimBP_C", "OnEndTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C.OnEndSkydiving
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_HighTower_Tapas_AnimBP_C::OnEndSkydiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_HighTower_Tapas_AnimBP_C", "OnEndSkydiving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C.OnCharacterCustomizationLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_HighTower_Tapas_AnimBP_C::OnCharacterCustomizationLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_HighTower_Tapas_AnimBP_C", "OnCharacterCustomizationLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C.ExecuteUbergraph_M_MED_HighTower_Tapas_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForBackbling_bIsWearingBackbling                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForBackbling_bIsBackblingLong                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_HighTower_Tapas_AnimBP_C::ExecuteUbergraph_M_MED_HighTower_Tapas_AnimBP(int32 EntryPoint, bool CallFunc_CheckForBackbling_bIsWearingBackbling, bool CallFunc_CheckForBackbling_bIsBackblingLong, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_HighTower_Tapas_AnimBP_C", "ExecuteUbergraph_M_MED_HighTower_Tapas_AnimBP");

	Params::UM_MED_HighTower_Tapas_AnimBP_C_ExecuteUbergraph_M_MED_HighTower_Tapas_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CheckForBackbling_bIsWearingBackbling = CallFunc_CheckForBackbling_bIsWearingBackbling;
	Parms.CallFunc_CheckForBackbling_bIsBackblingLong = CallFunc_CheckForBackbling_bIsBackblingLong;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


