#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x60 - 0x3C)
// BlueprintGeneratedClass AnimNotifyState_HolsterWeaponWithTag.AnimNotifyState_HolsterWeaponWithTag_C
class UAnimNotifyState_HolsterWeaponWithTag_C : public UAnimNotifyState_HolsterWeapon_C
{
public:
	uint8                                        Pad_6F2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 SkipHolsterGameplayTags;                           // 0x40(0x20)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UAnimNotifyState_HolsterWeaponWithTag_C* GetDefaultObj();

	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, bool bHasTag, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Received_NotifyBegin_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


