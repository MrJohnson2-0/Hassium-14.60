#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0xC96 - 0xC60)
// BlueprintGeneratedClass GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C
class UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C : public UGA_Athena_ActivePower_StandardActivation_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         CommitOnEveryTargeting;                            // 0xC68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_644C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag_ApplyEffectNotify;                             // 0xC6C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_644D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_ToApply;                                        // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EffectLevel;                                       // 0xC80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GEH_ToApply;                                       // 0xC84(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_ApplyEffect;                                    // 0xC8C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyEffectGCUsesParams;                           // 0xC94(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EndAbilityAfterApply;                              // 0xC95(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C* GetDefaultObj();

	struct FGameplayEffectSpecHandle MakeEffectSpec(bool CallFunc_IsValidClass_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue);
	struct FGameplayCueParameters ApplyEffectGCParams();
	void PowerCommitFailed();
	void CastMontageCancelledOrInterrupted();
	void CastMontageNotifyEndAbility();
	void CastMontageNotifyStart(const struct FGameplayTag& NotifyTag);
	void ApplyEffectToSelf();
	void CastMontageBlendOut();
	void ExecuteUbergraph_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTag& K2Node_Event_NotifyTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayCueParameters& CallFunc_ApplyEffectGCParams_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue);
};

}


