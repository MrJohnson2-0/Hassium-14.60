#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Hightower_Tomato_Rifle_Rifle_AnimBP.Hightower_Tomato_Rifle_Rifle_AnimBP_C
// (None)

class UClass* UHightower_Tomato_Rifle_Rifle_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hightower_Tomato_Rifle_Rifle_AnimBP_C");

	return Clss;
}


// Hightower_Tomato_Rifle_Rifle_AnimBP_C Hightower_Tomato_Rifle_Rifle_AnimBP.Default__Hightower_Tomato_Rifle_Rifle_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHightower_Tomato_Rifle_Rifle_AnimBP_C* UHightower_Tomato_Rifle_Rifle_AnimBP_C::GetDefaultObj()
{
	static class UHightower_Tomato_Rifle_Rifle_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHightower_Tomato_Rifle_Rifle_AnimBP_C*>(UHightower_Tomato_Rifle_Rifle_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hightower_Tomato_Rifle_Rifle_AnimBP.Hightower_Tomato_Rifle_Rifle_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHightower_Tomato_Rifle_Rifle_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hightower_Tomato_Rifle_Rifle_AnimBP_C", "AnimGraph");

	Params::UHightower_Tomato_Rifle_Rifle_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Hightower_Tomato_Rifle_Rifle_AnimBP.Hightower_Tomato_Rifle_Rifle_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHightower_Tomato_Rifle_Rifle_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hightower_Tomato_Rifle_Rifle_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UHightower_Tomato_Rifle_Rifle_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Hightower_Tomato_Rifle_Rifle_AnimBP.Hightower_Tomato_Rifle_Rifle_AnimBP_C.ExecuteUbergraph_Hightower_Tomato_Rifle_Rifle_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_DynamicCast_AsFort_Weapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTargeting_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHightower_Tomato_Rifle_Rifle_AnimBP_C::ExecuteUbergraph_Hightower_Tomato_Rifle_Rifle_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_GetIsTargeting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hightower_Tomato_Rifle_Rifle_AnimBP_C", "ExecuteUbergraph_Hightower_Tomato_Rifle_Rifle_AnimBP");

	Params::UHightower_Tomato_Rifle_Rifle_AnimBP_C_ExecuteUbergraph_Hightower_Tomato_Rifle_Rifle_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon = K2Node_DynamicCast_AsFort_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetIsTargeting_ReturnValue = CallFunc_GetIsTargeting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


