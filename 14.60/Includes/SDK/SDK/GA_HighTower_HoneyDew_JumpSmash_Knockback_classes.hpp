#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xCF0 - 0xCE0)
// BlueprintGeneratedClass GA_HighTower_HoneyDew_JumpSmash_Knockback.GA_HighTower_HoneyDew_JumpSmash_Knockback_C
class UGA_HighTower_HoneyDew_JumpSmash_Knockback_C : public UGA_Athena_Knockback_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_Grav;                                           // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HighTower_HoneyDew_JumpSmash_Knockback_C* GetDefaultObj();

	void LaunchFinished();
	void ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_Knockback(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}


