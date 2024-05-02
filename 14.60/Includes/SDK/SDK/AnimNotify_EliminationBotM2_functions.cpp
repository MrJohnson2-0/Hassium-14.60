#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C
// (None)

class UClass* UAnimNotify_EliminationBotM2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_EliminationBotM2_C");

	return Clss;
}


// AnimNotify_EliminationBotM2_C AnimNotify_EliminationBotM2.Default__AnimNotify_EliminationBotM2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_EliminationBotM2_C* UAnimNotify_EliminationBotM2_C::GetDefaultObj()
{
	static class UAnimNotify_EliminationBotM2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_EliminationBotM2_C*>(UAnimNotify_EliminationBotM2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TeleportationDrone_C*    K2Node_DynamicCast_AsBP_Teleportation_Drone                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGCN_RezOut_C*               K2Node_DynamicCast_AsGCN_Rez_Out                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGCN_RezIn_C*                K2Node_DynamicCast_AsGCN_Rez_In                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAnimNotify_EliminationBotM2_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TeleportationDrone_C* K2Node_DynamicCast_AsBP_Teleportation_Drone, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AGCN_RezOut_C* K2Node_DynamicCast_AsGCN_Rez_Out, bool K2Node_DynamicCast_bSuccess_1, class AGCN_RezIn_C* K2Node_DynamicCast_AsGCN_Rez_In, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_EliminationBotM2_C", "Received_Notify");

	Params::UAnimNotify_EliminationBotM2_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Teleportation_Drone = K2Node_DynamicCast_AsBP_Teleportation_Drone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGCN_Rez_Out = K2Node_DynamicCast_AsGCN_Rez_Out;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGCN_Rez_In = K2Node_DynamicCast_AsGCN_Rez_In;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


