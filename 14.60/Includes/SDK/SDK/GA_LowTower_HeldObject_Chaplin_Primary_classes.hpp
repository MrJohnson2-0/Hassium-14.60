#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0xC78 - 0xAA8)
// BlueprintGeneratedClass GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C
class UGA_LowTower_HeldObject_Chaplin_Primary_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ActivationTime;                                    // 0xAB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargingTime;                                      // 0xAB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProjectileForwardOffset;                           // 0xAB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7846[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MaxChargeTime;                                     // 0xAC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                ProjectileTemplate;                                // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxChargeInitialSpeed;                             // 0xAE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ProjectileUpOffset;                                // 0xB08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7847[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MinChargeInitialSpeed;                             // 0xB10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                ActiveHeldObject;                                  // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ProjectileGravityScale;                            // 0xB38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          ExplosionEffectApplicationTag;                     // 0xB58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          AutoShootOnMaxChargeTimerHandle;                   // 0xB60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GCNL_PrimaryChargeFX;                              // 0xB68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MinimumChargeTime;                                 // 0xB70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GCN_PrimaryShoot;                                  // 0xB90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GCN_SmallProjectile;                               // 0xB98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BeginChargeTimerHandle;                            // 0xBA0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        SmallProjectileInitialSpeed;                       // 0xBA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SmallProjectileCount;                              // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7849[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        SmallProjectileMaxCount;                           // 0xBD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        DamageDataTableLevelCount;                         // 0xBF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_784A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  ForceFeedbackSmallProjectile;                      // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ForceFeedbackChargeProjectile;                     // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_784B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OverrideTransform;                                 // 0xC10(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                          GameplayTagCueExplosion;                           // 0xC40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ThrowAnimationMontage;                             // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPendingEnd;                                       // 0xC50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_784C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          WaitForTossAnimationTimerHandle;                   // 0xC58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          WaitForTimerAnimationTimerHandle;                  // 0xC60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        WaitForFireAnimationTime;                          // 0xC68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ServerWaitForThrowAnimationTimerModifier;          // 0xC6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GCN_PrimaryChargedShoot;                           // 0xC70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_LowTower_HeldObject_Chaplin_Primary_C* GetDefaultObj();

	void PlayForcedFeedBack(bool bSmallProjectile, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn, bool CallFunc_IsValid_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue);
	void ConvertChargeTimeIntoLevel(int32* Out, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_ConvertToScalingLevel_Out);
	void ConvertToScalingLevel(int32 Scale, int32* Out, int32 OutLevel, bool K2Node_SwitchInteger_CmpSuccess);
	void SpawnSmallProjectile(bool CallFunc_IsServer_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FVector& CallFunc_GetProjectileSpawnLocationAndDirection_Location, const struct FRotator& CallFunc_GetProjectileSpawnLocationAndDirection_Direction, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetFortAvatarPawn(class AFortPlayerPawn** AsFort_Player_Pawn, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void GetProjectileSpawnLocationAndDirection(struct FVector* Location, struct FRotator* Direction, float SpawnDownDistanceOffset, float SpawnRightDistanceOffset, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void OnNotifyEnd_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag);
	void OnNotifyBegin_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag);
	void OnCancelled_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag);
	void OnInterrupted_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag);
	void OnBlendOut_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag);
	void OnCompleted_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnAbilityInputReleased();
	void BindAutoShootOnMaxCharge();
	void AutoShootOnMaxCharge();
	void ForceShoot();
	void ClientFX_BeginCharge();
	void ClientFX_EndCharge();
	void ClientPlaySmallProjectileMontage();
	void BindBeginCharge();
	void BeginCharge();
	void AbilityCleanup();
	void PreAbilityEnd();
	void ServerWaitTossAnimation();
	void InvalidateTimers();
	void WaitForAnimationTimer();
	void ClientPlayLargeProjectileMontage();
	void SetChargeTime();
	void SetChargingTimerValues(float ChargingTime, float ActivationTime);
	void ExecuteUbergraph_GA_LowTower_HeldObject_Chaplin_Primary(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHeldObjectComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_1, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_5, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool K2Node_Event_bWasCancelled, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_2, float CallFunc_GetValueAtLevel_ReturnValue_3, class ABGA_LowTower_Held_Chaplin_Parent_C* K2Node_DynamicCast_AsBGA_Low_Tower_Held_Chaplin_Parent, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_GetValueAtLevel_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetValueAtLevel_ReturnValue_5, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_6, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_7, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_3, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_8, float CallFunc_GetValueAtLevel_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetValueAtLevel_ReturnValue_10, int32 CallFunc_ConvertChargeTimeIntoLevel_Out, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_11, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_2, bool CallFunc_IsValid_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue_1, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_4, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, float K2Node_CustomEvent_ChargingTime, float K2Node_CustomEvent_ActivationTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_Greater_FloatFloat_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FVector& CallFunc_GetProjectileSpawnLocationAndDirection_Location, const struct FRotator& CallFunc_GetProjectileSpawnLocationAndDirection_Direction, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
};

}


