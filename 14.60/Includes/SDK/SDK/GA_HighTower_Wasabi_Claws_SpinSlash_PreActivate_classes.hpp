#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xAB8 - 0xAA8)
// BlueprintGeneratedClass GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate.GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C
class UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Tag_SpinSlash_Activate;                            // 0xAB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue);
};

}


