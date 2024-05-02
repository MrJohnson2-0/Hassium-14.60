#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotifyState_StopMontagePlayDate.AnimNotifyState_StopMontagePlayDate_C
// (None)

class UClass* UAnimNotifyState_StopMontagePlayDate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_StopMontagePlayDate_C");

	return Clss;
}


// AnimNotifyState_StopMontagePlayDate_C AnimNotifyState_StopMontagePlayDate.Default__AnimNotifyState_StopMontagePlayDate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotifyState_StopMontagePlayDate_C* UAnimNotifyState_StopMontagePlayDate_C::GetDefaultObj()
{
	static class UAnimNotifyState_StopMontagePlayDate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_StopMontagePlayDate_C*>(UAnimNotifyState_StopMontagePlayDate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotifyState_StopMontagePlayDate.AnimNotifyState_StopMontagePlayDate_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortnite_M_Avg_Player_AnimBlueprint_C*K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHighTower_Date_LayerAnimBP_C*K2Node_DynamicCast_AsHigh_Tower_Date_Layer_Anim_BP               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAnimNotifyState_StopMontagePlayDate_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_1, class UHighTower_Date_LayerAnimBP_C* K2Node_DynamicCast_AsHigh_Tower_Date_Layer_Anim_BP, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_StopMontagePlayDate_C", "Received_NotifyTick");

	Params::UAnimNotifyState_StopMontagePlayDate_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue = CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint = K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsHigh_Tower_Date_Layer_Anim_BP = K2Node_DynamicCast_AsHigh_Tower_Date_Layer_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


