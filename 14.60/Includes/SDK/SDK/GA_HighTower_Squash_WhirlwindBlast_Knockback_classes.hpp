#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xCE8 - 0xCE0)
// BlueprintGeneratedClass GA_HighTower_Squash_WhirlwindBlast_Knockback.GA_HighTower_Squash_WhirlwindBlast_Knockback_C
class UGA_HighTower_Squash_WhirlwindBlast_Knockback_C : public UGA_Athena_Knockback_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_HighTower_Squash_WhirlwindBlast_Knockback_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HighTower_Squash_WhirlwindBlast_Knockback(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
};

}


