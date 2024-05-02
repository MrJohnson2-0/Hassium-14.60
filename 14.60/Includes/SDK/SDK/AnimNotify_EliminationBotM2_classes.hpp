#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C
class UAnimNotify_EliminationBotM2_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_EliminationBotM2_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TeleportationDrone_C* K2Node_DynamicCast_AsBP_Teleportation_Drone, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AGCN_RezOut_C* K2Node_DynamicCast_AsGCN_Rez_Out, bool K2Node_DynamicCast_bSuccess_1, class AGCN_RezIn_C* K2Node_DynamicCast_AsGCN_Rez_In, bool K2Node_DynamicCast_bSuccess_2);
};

}


