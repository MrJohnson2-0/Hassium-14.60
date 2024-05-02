#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xCE8 - 0xCE0)
// BlueprintGeneratedClass GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp.GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C
class UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C : public UGA_Athena_Knockback_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool K2Node_Event_bWasCancelled);
};

}


