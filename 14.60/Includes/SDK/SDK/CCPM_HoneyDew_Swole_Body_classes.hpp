#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x488 - 0x450)
// BlueprintGeneratedClass CCPM_HoneyDew_Swole_Body.CCPM_HoneyDew_Swole_Body_C
class ACCPM_HoneyDew_Swole_Body_C : public ACCPM_Parent_WatchCosmeticStat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                          EffectColor;                                       // 0x458(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         AnimInstance;                                      // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmoteIntroDuration;                                // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmoteOutroDuration;                                // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EffectPositionOffset;                              // 0x478(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmoteTimeQuant;                                    // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACCPM_HoneyDew_Swole_Body_C* GetDefaultObj();

	void BindOrUnbindOnPlayerEmoteStopped(bool Bind, class AFortPawn* Pawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void OnPawnAndPartChanged();
	void OnPawnStoppedEmote(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);
	void ExecuteUbergraph_CCPM_HoneyDew_Swole_Body(int32 EntryPoint, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetMID_MID, class UMaterialInstanceDynamic* CallFunc_GetMID_MID_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsPlayingEmote_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_GetPosition_ReturnValue, class UF_MED_HighTower_Honeydew_Swole_AnimBP_C* K2Node_DynamicCast_AsF_MED_High_Tower_Honeydew_Swole_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_RoundFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Sin_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsInFrontend_ReturnValue, class UFortItemDefinition* K2Node_CustomEvent_MontageItemDef, class AFortPawn* K2Node_CustomEvent_PawnEmoting, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetMID_MID_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_3);
};

}


