#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xB00 - 0xAA8)
// BlueprintGeneratedClass GA_HighTower_CooldownOnLand_Parent.GA_HighTower_CooldownOnLand_Parent_C
class UGA_HighTower_CooldownOnLand_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Tag_SurfaceSwimming;                               // 0xAB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_IgnoreApplication;                              // 0xAB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          Tag_InVehicle;                                     // 0xAD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Tag_AssetTagToRemove;                              // 0xAE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_HighTower_CooldownOnLand_Parent_C* GetDefaultObj();

	void Added_110E5507443E119AB2CF2885652DF496();
	void Added_FF63B9CA43E2AA1106AA64B0B845E754();
	void SetUpWaits();
	void SetUpBinds();
	void PawnLanded(struct FHitResult& Hit);
	void CallRemove();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HighTower_CooldownOnLand_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


