#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xB38 - 0xAF8)
// BlueprintGeneratedClass GA_Hightower_Wasabi_Claws_Mantis.GA_Hightower_Wasabi_Claws_Mantis_C
class UGA_Hightower_Wasabi_Claws_Mantis_C : public UGA_Melee_Mantis_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         SendSpinSlashEvent;                                // 0xB00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7796[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Tag_Ziplining;                                     // 0xB08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          Tag_ZiplineExit;                                   // 0xB28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_SpinSlash_PreActivate;                         // 0xB30(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Hightower_Wasabi_Claws_Mantis_C* GetDefaultObj();

	void K2_ActivateAbility();
	void OnGenericNotifyFromAnimation(const struct FGameplayTag& NotifyTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Hightower_Wasabi_Claws_Mantis(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FGameplayTag& K2Node_Event_NotifyTag, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, bool CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags);
};

}


