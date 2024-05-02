#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xB48 - 0xAA8)
// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C
class UGA_Athena_FloppingRabbit_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_Active;                                         // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_Active;                                          // 0xAB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_InWorld;                                        // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_InWorld;                                         // 0xAE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                Projectile;                                        // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Wire;                                              // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FailsafeDelay;                                     // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_ReelIn;                                         // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_ReelIn;                                          // 0xB20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_FloppingRabbit_Weap_Athena_C*       WeaponRod;                                         // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_FloppingRabbit_Passive_C* GetDefaultObj();

	void SaveOutRod(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void SetBobberHidden(bool HideBobber, class AFortWeapon** CurrentWeapon, class AB_FloppingRabbit_Weap_Athena_C** CastedToRabbitWeapon, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void Removed_DCA556AE47E7D8C25D9A27899D5C963C();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void Seat_Changed(int32 SeatIndex);
	void EndFishing();
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive(int32 EntryPoint, bool CallFunc_IsMobilePlatform_ReturnValue, class AFortWeapon* CallFunc_SetBobberHidden_CurrentWeapon, class AB_FloppingRabbit_Weap_Athena_C* CallFunc_SetBobberHidden_CastedToRabbitWeapon, class AFortWeapon* CallFunc_SetBobberHidden_CurrentWeapon_1, class AB_FloppingRabbit_Weap_Athena_C* CallFunc_SetBobberHidden_CastedToRabbitWeapon_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, bool K2Node_Event_bWasCancelled, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, int32 K2Node_CustomEvent_SeatIndex, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, class AFortWeapon* CallFunc_SetBobberHidden_CurrentWeapon_2, class AB_FloppingRabbit_Weap_Athena_C* CallFunc_SetBobberHidden_CastedToRabbitWeapon_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortWeapon* CallFunc_SetBobberHidden_CurrentWeapon_3, class AB_FloppingRabbit_Weap_Athena_C* CallFunc_SetBobberHidden_CastedToRabbitWeapon_3);
};

}


