#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1BC (0xC64 - 0xAA8)
// BlueprintGeneratedClass GA_Lotus_Mustache_LockOnTargeting.GA_Lotus_Mustache_LockOnTargeting_C
class UGA_Lotus_Mustache_LockOnTargeting_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                 PlayerPawn;                                        // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LowGravRemoveDelay;                                // 0xAB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Float;                                             // 0xABC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VelocityResetThreshold;                            // 0xAC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0xAC8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        PotentialTargets;                                  // 0xAF0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        TargetPriorityFloat;                               // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PotentialTarget;                                   // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainer          EffectContainer;                                   // 0xB18(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        DistanceInfluenceMultiple;                         // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        LockOnRange;                                       // 0xBD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        LockOnRectSize;                                    // 0xBF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Tick;                                              // 0xC18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttribute                    Attribute;                                         // 0xC20(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AB_Ranged_Lotus_Mustache_C*            Weapon;                                            // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DotCheckValue;                                     // 0xC60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Lotus_Mustache_LockOnTargeting_C* GetDefaultObj();

	void OnChange_B230F5A34FBD93E78E242A8524699628();
	void OnNotifyEnd_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnNotifyBegin_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnInterrupted_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnBlendOut_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnCompleted_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void Added_0D35071B4FEDC4CD0463C99574134FAB();
	void Removed_58908BB54D428427AF9ABCB9028B681F();
	void K2_ActivateAbility();
	void LockOnTickOld();
	void LookForHomingTarget();
	void LockOnTickNew(class AActor* Target_Pawn);
	void ExecuteUbergraph_GA_Lotus_Mustache_LockOnTargeting(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class FName K2Node_CustomEvent_NotifyName_3, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class AB_Ranged_Lotus_Mustache_C* K2Node_DynamicCast_AsB_Ranged_Lotus_Mustache, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Has_Been_Initd_Variable_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAbilityTask_WaitAttributeChange* CallFunc_WaitForAttributeChange_ReturnValue, class AB_Ranged_Lotus_Mustache_C* K2Node_DynamicCast_AsB_Ranged_Lotus_Mustache_1, bool K2Node_DynamicCast_bSuccess_3, class USkeletalMeshComponentBudgeted* CallFunc_GetWeaponMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class AB_Ranged_Lotus_Mustache_C* K2Node_DynamicCast_AsB_Ranged_Lotus_Mustache_2, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_IsClosed_Variable_2, class USkeletalMeshComponentBudgeted* CallFunc_GetWeaponMesh_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_4, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_DegCos_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, class AActor* K2Node_CustomEvent_Target_Pawn, float CallFunc_GetValueAtLevel_ReturnValue_2, class AFortPawn* CallFunc_GetBestAimedAtPawnByAngle_ReturnValue);
};

}


