#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xAB8 - 0xAA8)
// BlueprintGeneratedClass GA_HighTower_Grape_BrambleShield_Cancel.GA_HighTower_Grape_BrambleShield_Cancel_C
class UGA_HighTower_Grape_BrambleShield_Cancel_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Event_ForceEndShield;                              // 0xAB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HighTower_Grape_BrambleShield_Cancel_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HighTower_Grape_BrambleShield_Cancel(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


