#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10F (0x1008 - 0xEF9)
// BlueprintGeneratedClass GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C
class UGA_Athena_ActivePower_LeapGlider_Parent_C : public UGA_Athena_ActivePower_Leap_Parent_C
{
public:
	uint8                                        Pad_6F5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaGliderItemDefinition*           Glider_Cosmetic_Override;                          // 0xF08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OpenGliderSoundCue;                                // 0xF10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LensEffectClass;                                   // 0xF18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitterCameraLensEffectBase*          LensEffect;                                        // 0xF20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_SkyDivingMessageTag;                             // 0xF28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          T_StartRedeploy;                                   // 0xF48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         GenericFailsafeHit;                                // 0xF50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ParachuteOpened;                                   // 0xF51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F5D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 T_OpenParahcute;                                   // 0xF58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 BlockedTags;                                       // 0xF78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_GrantedActive;                                  // 0xF98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_InfCooldown;                                    // 0xFB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_MinActiveTime;                                  // 0xFD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_MinActiveTime;                                 // 0xFE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_Active;                                         // 0x1000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_ActivePower_LeapGlider_Parent_C* GetDefaultObj();

	void InitAbility(bool CallFunc_IsValidClass_ReturnValue, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue);
	void OnSync_5B9655A74696A7C0515A278467F52358();
	void Added_9CF55B3043720DD4EE05809F2B45DD91();
	void OnSync_48D3266A4217EF7058D7FCA507015CB5();
	void EventReceived_46002FDB48565B7FA88DA089C488CA73(const struct FGameplayEventData& Payload);
	void OnSync_3ADE1BE041AF08C4CB1C9FA374F2E496();
	void OnSync_68C1AC134C9324B6EC0F089B02953286();
	void CleanupAbility();
	void CastMontageBlendOut();
	void CastMontageNotifyEndAbility();
	void CastMontageCancelledOrInterrupted();
	void PowerCommitFailed();
	void K2_ActivateAbility();
	void CastMontageNotifyStart(const struct FGameplayTag& NotifyTag);
	void MovementModeChangeFailSafe(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void GenericFailSafe();
	void OnLand(struct FHitResult& Hit);
	void K2_OnEndAbility(bool bWasCancelled);
	void BoardDroppedMidGlide(class UFortWorldItem* ItemDropped);
	void WeaponUnequipped();
	void HandleItemEquip();
	void ExecuteUbergraph_GA_Athena_ActivePower_LeapGlider_Parent(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayTag& K2Node_Event_NotifyTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool K2Node_Event_bWasCancelled, class UFortWorldItem* K2Node_CustomEvent_ItemDropped, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1);
};

}


