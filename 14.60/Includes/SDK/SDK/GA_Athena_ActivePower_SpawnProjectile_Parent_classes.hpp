#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x320 (0xF80 - 0xC60)
// BlueprintGeneratedClass GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C
class UGA_Athena_ActivePower_SpawnProjectile_Parent_C : public UGA_Athena_ActivePower_StandardActivation_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                ProjectileToSpawn;                                 // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_ProjectileSpeed;                               // 0xC70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_ProjectileGravity;                             // 0xC90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Proj_UseProjectileSpeedAndGrav;                    // 0xCB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7533[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Proj_SpawnSocket;                                  // 0xCB4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7534[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_SpawnPitchOffset;                              // 0xCC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               Proj_SpawnWorldOffset;                             // 0xCE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Proj_SpawnForwardOffset;                           // 0xCEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ProjUsesAbilityChargeMult;                         // 0xCF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7535[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Proj_ChargePercent;                                // 0xCF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Proj_HitApplicationTag;                          // 0xCF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Proj_HitEffectLevel;                               // 0xD00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7536[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      Spec_Hit;                                          // 0xD08(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	struct FGameplayTag                          T_Proj_ExplodeApplicationTag;                      // 0xDC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Proj_ExplodeEffectLevel;                           // 0xDC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7537[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      Spec_Explode;                                      // 0xDD0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	class AFortProjectileBase*                   LastProjectileSpawned;                             // 0xE88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_SpawnProjectileNotify;                           // 0xE90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CommitOnEveryProjectile;                           // 0xE98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7538[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnProjectileSpawned;                               // 0xEA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                          GC_SpawnProjectile;                                // 0xEB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnProjectileGCUsesParams;                       // 0xEB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UsesAdditionalExplosionContainer;                  // 0xEB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7539[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          T_Proj_AdditionalExplodeApplicationTag;            // 0xEBC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Proj_AdditionalExplodeEffectLevel;                 // 0xEC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      Spec_AdditionalExplode;                            // 0xEC8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)

	static class UClass* StaticClass();
	static class UGA_Athena_ActivePower_SpawnProjectile_Parent_C* GetDefaultObj();

	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor();
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	bool ShouldOnlyShowTrajectoryOnUse();
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	void AddAdditionalExplosionContainer(class AFortProjectileBase* Projectile, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue);
	struct FGameplayCueParameters SpawnProjectileGCParams();
	void InitAbility(const struct FFortGameplayEffectContainerSpec& CallFunc_MakeEffectContainers_Hit, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeEffectContainers_Explode);
	void MakeEffectContainers(struct FFortGameplayEffectContainerSpec* Hit, struct FFortGameplayEffectContainerSpec* Explode, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1);
	void Get_Homing_Target(class AActor** HomingTarget);
	void GetProjectileSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Direction, float CallFunc_GetValueAtLevel_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1);
	void PowerSpawnProjectile(class AFortProjectileBase** ProjectileSpawned, const struct FGameplayCueParameters& CallFunc_SpawnProjectileGCParams_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, class AActor* CallFunc_Get_Homing_Target_HomingTarget, const struct FVector& CallFunc_GetProjectileSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetProjectileSpawnLocationAndRotation_Direction, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool Temp_bool_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Select_Default, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
	void CleanupTrajectoryIndicatorOnUnequip();
	void InitTrajectoryVariables();
	void UpdateTrajectory();
	void CastMontageNotifyStart(const struct FGameplayTag& NotifyTag);
	void PowerCommitFailed();
	void CastMontageCancelledOrInterrupted();
	void CastMontageNotifyEndAbility();
	void ResetCommitDoOnce();
	void CastMontageBlendOut();
	void ExecuteUbergraph_GA_Athena_ActivePower_SpawnProjectile_Parent(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_NotifyTag, class AFortProjectileBase* CallFunc_PowerSpawnProjectile_ProjectileSpawned, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue);
	void OnProjectileSpawned__DelegateSignature(class AFortProjectileBase* ProjectileSpawned);
};

}


