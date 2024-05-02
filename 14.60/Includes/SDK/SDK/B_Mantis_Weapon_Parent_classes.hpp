#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xE98 - 0xE38)
// BlueprintGeneratedClass B_Mantis_Weapon_Parent.B_Mantis_Weapon_Parent_C
class AB_Mantis_Weapon_Parent_C : public AB_Melee_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortMantisWeaponComponent*            FortMantisWeapon;                                  // 0xE40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerCharacter;                                   // 0xE48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_MeleeAttackAbility;                              // 0xE50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 T_HudElementToHide;                                // 0xE70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          Timer_ShowReticleStatus;                           // 0xE90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Mantis_Weapon_Parent_C* GetDefaultObj();

	void ReticleStatusDisplay(bool Hide);
	void ShowReticleStatusDisplay();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Mantis_Weapon_Parent(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_Hide, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
};

}


