#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C
// (None)

class UClass* UHighTower_HoneyDew_LayerAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighTower_HoneyDew_LayerAnimBP_C");

	return Clss;
}


// HighTower_HoneyDew_LayerAnimBP_C HighTower_HoneyDew_LayerAnimBP.Default__HighTower_HoneyDew_LayerAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHighTower_HoneyDew_LayerAnimBP_C* UHighTower_HoneyDew_LayerAnimBP_C::GetDefaultObj()
{
	static class UHighTower_HoneyDew_LayerAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighTower_HoneyDew_LayerAnimBP_C*>(UHighTower_HoneyDew_LayerAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C.CustomLocomotionFullBodyAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBodyAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionFullBodyAdditive                                 (Parm, OutParm, NoDestructor)

void UHighTower_HoneyDew_LayerAnimBP_C::CustomLocomotionFullBodyAdditive(const struct FPoseLink& InPoseFullBodyAdditive, struct FPoseLink* CustomLocomotionFullBodyAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_HoneyDew_LayerAnimBP_C", "CustomLocomotionFullBodyAdditive");

	Params::UHighTower_HoneyDew_LayerAnimBP_C_CustomLocomotionFullBodyAdditive_Params Parms{};

	Parms.InPoseFullBodyAdditive = InPoseFullBodyAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionFullBodyAdditive != nullptr)
		*CustomLocomotionFullBodyAdditive = std::move(Parms.CustomLocomotionFullBodyAdditive);

}


// Function HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C.CustomLocomotionFullBodyLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughCustomFullBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionFullBodyLayer                                    (Parm, OutParm, NoDestructor)

void UHighTower_HoneyDew_LayerAnimBP_C::CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_HoneyDew_LayerAnimBP_C", "CustomLocomotionFullBodyLayer");

	Params::UHighTower_HoneyDew_LayerAnimBP_C_CustomLocomotionFullBodyLayer_Params Parms{};

	Parms.PassThroughCustomFullBody = PassThroughCustomFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionFullBodyLayer != nullptr)
		*CustomLocomotionFullBodyLayer = std::move(Parms.CustomLocomotionFullBodyLayer);

}


// Function HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C.CustomLocomotionPreIKLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePreIK                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionPreIKLayer                                       (Parm, OutParm, NoDestructor)

void UHighTower_HoneyDew_LayerAnimBP_C::CustomLocomotionPreIKLayer(const struct FPoseLink& InPosePreIK, struct FPoseLink* CustomLocomotionPreIKLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_HoneyDew_LayerAnimBP_C", "CustomLocomotionPreIKLayer");

	Params::UHighTower_HoneyDew_LayerAnimBP_C_CustomLocomotionPreIKLayer_Params Parms{};

	Parms.InPosePreIK = InPosePreIK;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionPreIKLayer != nullptr)
		*CustomLocomotionPreIKLayer = std::move(Parms.CustomLocomotionPreIKLayer);

}


// Function HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHighTower_HoneyDew_LayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_HoneyDew_LayerAnimBP_C", "AnimGraph");

	Params::UHighTower_HoneyDew_LayerAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C.Update Yaw Delta
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              YawDelta                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DecayRate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AbsYawDeltaSlowDecay                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Decay                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHighTower_HoneyDew_LayerAnimBP_C::Update_Yaw_Delta(float YawDelta, float DeltaTime, float DecayRate, float AbsYawDeltaSlowDecay, float Decay, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_HoneyDew_LayerAnimBP_C", "Update Yaw Delta");

	Params::UHighTower_HoneyDew_LayerAnimBP_C_Update_Yaw_Delta_Params Parms{};

	Parms.YawDelta = YawDelta;
	Parms.DeltaTime = DeltaTime;
	Parms.DecayRate = DecayRate;
	Parms.AbsYawDeltaSlowDecay = AbsYawDeltaSlowDecay;
	Parms.Decay = Decay;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHighTower_HoneyDew_LayerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_HoneyDew_LayerAnimBP_C", "BlueprintUpdateAnimation");

	Params::UHighTower_HoneyDew_LayerAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C.ExecuteUbergraph_HighTower_HoneyDew_LayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortnite_M_Avg_Player_AnimBlueprint_C*K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHighTower_HoneyDew_LayerAnimBP_C::ExecuteUbergraph_HighTower_HoneyDew_LayerAnimBP(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_Event_DeltaTimeX, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_HoneyDew_LayerAnimBP_C", "ExecuteUbergraph_HighTower_HoneyDew_LayerAnimBP");

	Params::UHighTower_HoneyDew_LayerAnimBP_C_ExecuteUbergraph_HighTower_HoneyDew_LayerAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint = K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


