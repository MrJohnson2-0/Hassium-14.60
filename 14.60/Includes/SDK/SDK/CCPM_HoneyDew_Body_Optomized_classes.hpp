#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x498 - 0x450)
// BlueprintGeneratedClass CCPM_HoneyDew_Body_Optomized.CCPM_HoneyDew_Body_Optomized_C
class ACCPM_HoneyDew_Body_Optomized_C : public ACCPM_Parent_WatchCosmeticStat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                          EffectColor;                                       // 0x458(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         AnimInstance;                                      // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmoteIntroDuration;                                // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmoteOutroDuration;                                // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EffectPositionOffset;                              // 0x478(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmoteTimeQuant;                                    // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoneyDewRedVariant;                              // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHoneyDewStage2;                                  // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_69F9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   NewVar_0;                                          // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACCPM_HoneyDew_Body_Optomized_C* GetDefaultObj();

	void Insert_Name_Here(class UMaterialInstanceDynamic** Head_Skeletal_Mesh_MID, class UMaterialInterface** Face_Skeletal_Mesh_Mat_Ind_0, class UMaterialInterface** Face_Skeletal_Mesh_Mat_Ind_1, class UMaterialInstanceDynamic** Body_Skeletal_Mesh_MID, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetMID_MID, class UMaterialInstanceDynamic* CallFunc_GetMID_MID_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1);
	void BindOrUnbindOnPlayerEmoteStopped(bool Bind, class AFortPawn* Pawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void OnFinishedCharacterCustomization(class AFortPlayerPawn* Pawn);
	void OnPawnStoppedEmote(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);
	void OnPawnAndPartChanged();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_CCPM_HoneyDew_Body_Optomized(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_Insert_Name_Here_Head_Skeletal_Mesh_MID, class UMaterialInterface* CallFunc_Insert_Name_Here_Face_Skeletal_Mesh_Mat_Ind_0, class UMaterialInterface* CallFunc_Insert_Name_Here_Face_Skeletal_Mesh_Mat_Ind_1, class UMaterialInstanceDynamic* CallFunc_Insert_Name_Here_Body_Skeletal_Mesh_MID, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, class UF_MED_HighTower_Honeydew_AnimBP_C* K2Node_DynamicCast_AsF_MED_High_Tower_Honeydew_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class AFortPlayerPawn* K2Node_CustomEvent_Pawn, bool CallFunc_IsInFrontend_ReturnValue, class UFortItemDefinition* K2Node_CustomEvent_MontageItemDef, class AFortPawn* K2Node_CustomEvent_PawnEmoting, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMID_MID, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_Insert_Name_Here_Head_Skeletal_Mesh_MID_1, class UMaterialInterface* CallFunc_Insert_Name_Here_Face_Skeletal_Mesh_Mat_Ind_0_1, class UMaterialInterface* CallFunc_Insert_Name_Here_Face_Skeletal_Mesh_Mat_Ind_1_1, class UMaterialInstanceDynamic* CallFunc_Insert_Name_Here_Body_Skeletal_Mesh_MID_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_Add_FloatFloat_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FMcpVariantChannelInfo& CallFunc_Array_Get_Item, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue_2, bool CallFunc_MatchesTag_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, float CallFunc_Montage_GetPosition_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_RoundFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_5, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMID_MID_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlayingEmote_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2);
};

}


