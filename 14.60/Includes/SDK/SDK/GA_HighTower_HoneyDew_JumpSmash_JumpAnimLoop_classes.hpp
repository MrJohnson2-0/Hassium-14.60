#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xAB8 - 0xAA8)
// BlueprintGeneratedClass GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C
class UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          JumpLoop;                                          // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C* GetDefaultObj();

	void OnNotifyEnd_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag);
	void OnNotifyBegin_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag);
	void OnCancelled_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag);
	void OnInterrupted_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag);
	void OnBlendOut_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag);
	void OnCompleted_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag);
	void OnMovementModeChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void K2_ActivateAbility();
	void StopTheFallLoop();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_5, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_bWasCancelled);
};

}


