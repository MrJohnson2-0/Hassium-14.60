#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_MED_Tapas_Pack_AnimBP.M_MED_Tapas_Pack_AnimBP_C
// (None)

class UClass* UM_MED_Tapas_Pack_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_Tapas_Pack_AnimBP_C");

	return Clss;
}


// M_MED_Tapas_Pack_AnimBP_C M_MED_Tapas_Pack_AnimBP.Default__M_MED_Tapas_Pack_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_Tapas_Pack_AnimBP_C* UM_MED_Tapas_Pack_AnimBP_C::GetDefaultObj()
{
	static class UM_MED_Tapas_Pack_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_Tapas_Pack_AnimBP_C*>(UM_MED_Tapas_Pack_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_MED_Tapas_Pack_AnimBP.M_MED_Tapas_Pack_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_Tapas_Pack_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Tapas_Pack_AnimBP_C", "AnimGraph");

	Params::UM_MED_Tapas_Pack_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_MED_Tapas_Pack_AnimBP.M_MED_Tapas_Pack_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_Tapas_Pack_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Tapas_Pack_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_Tapas_Pack_AnimBP.M_MED_Tapas_Pack_AnimBP_C.OnEndPlayingEmote
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_Tapas_Pack_AnimBP_C::OnEndPlayingEmote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Tapas_Pack_AnimBP_C", "OnEndPlayingEmote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_Tapas_Pack_AnimBP.M_MED_Tapas_Pack_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Tapas_Pack_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Tapas_Pack_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_MED_Tapas_Pack_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Tapas_Pack_AnimBP.M_MED_Tapas_Pack_AnimBP_C.ExecuteUbergraph_M_MED_Tapas_Pack_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Tapas_Pack_AnimBP_C::ExecuteUbergraph_M_MED_Tapas_Pack_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Tapas_Pack_AnimBP_C", "ExecuteUbergraph_M_MED_Tapas_Pack_AnimBP");

	Params::UM_MED_Tapas_Pack_AnimBP_C_ExecuteUbergraph_M_MED_Tapas_Pack_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


