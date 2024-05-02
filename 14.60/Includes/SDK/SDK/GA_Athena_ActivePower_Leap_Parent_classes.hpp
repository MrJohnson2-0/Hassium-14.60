#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x299 (0xEF9 - 0xC60)
// BlueprintGeneratedClass GA_Athena_ActivePower_Leap_Parent.GA_Athena_ActivePower_Leap_Parent_C
class UGA_Athena_ActivePower_Leap_Parent_C : public UGA_Athena_ActivePower_StandardActivation_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Tag_TargetingLandApplication;                      // 0xC68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Target;                                         // 0xC70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         TargetGCUsesParams;                                // 0xC78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ApplyEffectLevelTargetLand;                        // 0xC7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthena_Power_Leap_Type           LeapType;                                          // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag_LeapNotify;                                    // 0xC84(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Land;                                           // 0xC8C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LandGCUsesParams;                                  // 0xC94(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasLand;                                           // 0xC95(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DEC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CastMontageLandSection;                            // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TargetOnLand;                                      // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OnLeapSetIgnoreNextFall;                           // 0xCA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OnLeapResetFallHeight;                             // 0xCA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DED[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          GC_Leap;                                           // 0xCA4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LeapGCUsesParams;                                  // 0xCAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_VerticalLaunchMagnitude;                       // 0xCB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_HorizontalLaunchMagnitude;                     // 0xCD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_VertitcalVelocityPercentMaintained;            // 0xCF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VerticalVelocityMustMatchImpulse;                  // 0xD10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_HorizontalVelocityPercentMaintained;           // 0xD18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VerticalLaunchMagnitudeUsesCharge;                 // 0xD38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HorizontalLaunchMagnitudeUsesCharge;               // 0xD39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BaseLaunchDirectionOnAcceleration;                 // 0xD3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_ArcLeapDistance;                               // 0xD40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ETraceTypeQuery                   ArcLeapLocationTraceChannel;                       // 0xD60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArcTraceRadius;                                    // 0xD64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_ArcNoTargetLeapDistanceMultiplier;             // 0xD68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ArcLeapDistanceUsesCharge;                         // 0xD88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag_TargetingApplication;                          // 0xD8C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ApplyEffectLevelTarget;                            // 0xD94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ZeroAccelerationAssumesForward;                    // 0xD98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TriggerLandOnEnterWater;                           // 0xD99(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LandedInWater;                                     // 0xD9A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                         BlockPlayerMovementForLand;                        // 0xD9B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DoesTargetingWhileLeaping;                         // 0xD9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_WhileLeapingTraceFrames;                       // 0xDA0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_LeapingTargetCapsuleRadius;                    // 0xDC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_LeapingTargetCapsuleHalfHeight;                // 0xDE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TargetWhileLeapingInterval;                        // 0xE00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_TargetWhileLeaping;                          // 0xE08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          WhileLeapingTargetObjectTypes;                     // 0xE10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                        WhileLeapingHitActors;                             // 0xE20(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                GE_WhileLeapingHit;                                // 0xE30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WhileLeapingEffectLevel;                           // 0xE38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_LeapingLoop;                                    // 0xE3C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LeapingLoopGCUsesParams;                           // 0xE44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TargetWhileLeapRequiresChargeThreshold;            // 0xE45(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        TargetWhileLeapChargeThreshold;                    // 0xE48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EndAbilityOnLeapFinish;                            // 0xE68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_LeapDuration;                                  // 0xE70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                           Curve_StrengthOverTime;                            // 0xE90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GravityOnLeap;                                     // 0xE98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CalculatedLaunchVelocity;                          // 0xE9C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UCurveVector*                          Curve_LeapPathOffset;                              // 0xEA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CalculatedArcTargetLocation;                       // 0xEB0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinish;                                  // 0xEBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SetVelOnFinish;                                    // 0xEC0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClampVelOnFinish;                                  // 0xECC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_ApplyRootMotionMoveToForce* LeapMoveToTask;                                    // 0xED0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_ApplyRootMotionConstantForce* LeapConstTask;                                     // 0xED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDrawDebugTrace                   WhileLeapingDrawDebug;                             // 0xEE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         GiveNextLandFallImmunityOnLeap;                    // 0xEE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DFA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_FallDamageImmunity;                             // 0xEE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GEH_FallDamageImmunity;                            // 0xEF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceRemoveLeapingLoopOnEnd;                       // 0xEF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_Athena_ActivePower_Leap_Parent_C* GetDefaultObj();

	void Give_Till_Land_Fall_Immunity(const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	float GetLeapDuration(float CallFunc_GetValueAtLevel_ReturnValue);
	void GetSetVelocityOnFinish(struct FVector* SetVelOnFinish);
	void GetClampVelocityOnFinish(float* ClampVelOnFinish);
	void SelectArcLocation(struct FVector* TargetLocation, const struct FVector& Location, const struct FVector& CallFunc_GetArcCustomLocation_Location, const struct FVector& CallFunc_GetArcTargetLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetArcCustomLocation(struct FVector* Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void InitAbility();
	struct FGameplayCueParameters LeapingLoopGCParams();
	void ApplyEffectToWhileLeapingTargets(TArray<struct FHitResult>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue);
	struct FVector GetAccelerationValue(class ACharacter* Pawn, bool Temp_bool_Variable, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& K2Node_Select_Default);
	float ModifyLaunchMagWithCharge(float Mag, bool Modify, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	struct FVector GetArcTargetLocation(float CallFunc_GetRowAtLevel_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, float CallFunc_GetRowAtLevel_ReturnValue_1, float CallFunc_ModifyLaunchMagWithCharge_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_SelectVector_ReturnValue);
	struct FVector GetVelocityPercent(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable, enum class EAthena_Power_Leap_Type Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetRowAtLevel_ReturnValue, float CallFunc_GetRowAtLevel_ReturnValue_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	struct FVector GetLaunchVelocity(float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_GetRowAtLevel_ReturnValue, float CallFunc_GetRowAtLevel_ReturnValue_1, float CallFunc_ModifyLaunchMagWithCharge_ReturnValue, float CallFunc_ModifyLaunchMagWithCharge_ReturnValue_1, enum class EAthena_Power_Leap_Type Temp_byte_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FVector& CallFunc_GetAccelerationValue_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetVelocityPercent_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	struct FGameplayCueParameters LeapGCParams();
	void SetFallSettings();
	struct FGameplayCueParameters LandGCParams();
	struct FGameplayCueParameters TargetGCParams();
	void Cancelled_2DF7971548860AB5EB1DD2BB833D040D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_2DF7971548860AB5EB1DD2BB833D040D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_99BB82FC44E77279564E1682CE7A7B69(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_99BB82FC44E77279564E1682CE7A7B69(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_9F5DC18E4B89C436F6868EA0C59CAE68();
	void OnTimedOutAndDestinationReached_AA23A03A4BF870123217CFA9BF23BAB1();
	void OnTimedOut_AA23A03A4BF870123217CFA9BF23BAB1();
	void Added_4AFB1A714908D5D644343FBEE4D1439D();
	void ApplyEffect(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag, int32 ApplyEffectLevel);
	void TargetLand();
	void PowerCommitFailed();
	void CastMontageCancelledOrInterrupted();
	void CastMontageNotifyEndAbility();
	void CastMontageNotifyStart(const struct FGameplayTag& NotifyTag);
	void Leap();
	void Target();
	void OnLand(struct FHitResult& Hit);
	void PlayerEnterWater(class AFortPlayerPawn* FortPlayerPawn);
	void TargetWhileLeaping();
	void LaunchPlayer();
	void StartTargetingWhileLeaping();
	void K2_OnEndAbility(bool bWasCancelled);
	void ResetLandDoOnce();
	void OnLeapFinish();
	void CastMontageBlendOut();
	void SetWaterBinding();
	void CleanUpOnLand();
	void ExecuteUbergraph_GA_Athena_ActivePower_Leap_Parent(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, int32 K2Node_CustomEvent_ApplyEffectLevel, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_Event_NotifyTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayCueParameters& CallFunc_LandGCParams_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayCueParameters& CallFunc_LeapGCParams_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_TargetGCParams_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit, class AFortPlayerPawn* K2Node_Event_FortPlayerPawn, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_GetLaunchVelocity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_bWasCancelled, bool CallFunc_IsServer_ReturnValue, const struct FGameplayCueParameters& CallFunc_LeapingLoopGCParams_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_2, const struct FVector& CallFunc_SelectArcLocation_TargetLocation, float CallFunc_GetClampVelocityOnFinish_ClampVelOnFinish, float CallFunc_GetClampVelocityOnFinish_ClampVelOnFinish_1, const struct FVector& CallFunc_GetSetVelocityOnFinish_SetVelOnFinish, const struct FVector& CallFunc_GetSetVelocityOnFinish_SetVelOnFinish_1, float CallFunc_GetLeapDuration_ReturnValue, class UAbilityTask_ApplyRootMotionConstantForce* CallFunc_ApplyRootMotionConstantForce_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetLeapDuration_ReturnValue_1, class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<struct FHitResult>& CallFunc_CapsuleTraceMultiForObjects_OutHits, bool CallFunc_CapsuleTraceMultiForObjects_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FGameplayTag& Temp_struct_Variable_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, float CallFunc_GetValueAtLevel_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
};

}


