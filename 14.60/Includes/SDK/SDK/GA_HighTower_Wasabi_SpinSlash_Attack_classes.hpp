#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x157 (0xDE0 - 0xC89)
// BlueprintGeneratedClass GA_HighTower_Wasabi_SpinSlash_Attack.GA_HighTower_Wasabi_SpinSlash_Attack_C
class UGA_HighTower_Wasabi_SpinSlash_Attack_C : public UGA_Athena_ActivePower_GenericTargetApply_Parent_C
{
public:
	uint8                                        Pad_76DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Tag_MajorHit;                                      // 0xC98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        GCIndex;                                           // 0xCA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_76DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  GC_Hits;                                           // 0xCA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScalableFloat                        JumpDuration;                                      // 0xCB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        JumpAddedDistance;                                 // 0xCD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        JumpAddedHeight;                                   // 0xCF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        EndAddedSpeed;                                     // 0xD18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         FloorMaintainedZVelocityAtZero;                    // 0xD38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_76DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialForwardVector;                              // 0xD3C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitialVelocityClamped;                            // 0xD48(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_76DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        PercentForwardVelocityToMaintain;                  // 0xD58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        PercentVerticalVelocityToMaintain;                 // 0xD78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MaxSpeedToMaintain;                                // 0xD98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_MoveSpeedOnLanded;                              // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           Handle_GE_MoveSpeedOnLanded;                       // 0xDC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_KnockedBack;                                   // 0xDC8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_ApplyRootMotionMoveToForce* Task_RootMotion;                                   // 0xDD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*     Task_OnKnockedBack;                                // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HighTower_Wasabi_SpinSlash_Attack_C* GetDefaultObj();

	void InitAbility();
	void OnTimedOutAndDestinationReached_327E240B4BC99F957739F0BDD995EB10();
	void OnTimedOut_327E240B4BC99F957739F0BDD995EB10();
	void Added_7A61119A4C9CD054FAEE2C99FA82B74E();
	void CastMontageNotifyStart(const struct FGameplayTag& NotifyTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void Landed(struct FHitResult& Hit);
	void BindOnKnockedBack();
	void ExecuteUbergraph_GA_HighTower_Wasabi_SpinSlash_Attack(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, const struct FGameplayTag& K2Node_Event_NotifyTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_FMax_ReturnValue, float K2Node_Select_Default, float CallFunc_GetValueAtLevel_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_FMax_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Select_Default_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_10, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool K2Node_Event_bWasCancelled, float CallFunc_VSize_ReturnValue, float K2Node_Select_Default_2, const struct FVector& CallFunc_Vector_ClampSizeMax_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Variable);
};

}


