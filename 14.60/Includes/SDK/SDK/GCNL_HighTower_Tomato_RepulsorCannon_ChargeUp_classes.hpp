#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x7FC - 0x7C0)
// BlueprintGeneratedClass GCNL_HighTower_Tomato_RepulsorCannon_ChargeUp.GCNL_HighTower_Tomato_RepulsorCannon_ChargeUp_C
class AGCNL_HighTower_Tomato_RepulsorCannon_ChargeUp_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Hightower_Tomato_Secondary_Charge_FlyBy;           // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxRange;                                          // 0x7D0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                              SavedRotation;                                     // 0x7F0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGCNL_HighTower_Tomato_RepulsorCannon_ChargeUp_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void ReceiveTick(float DeltaSeconds);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void Update_Audio_Location();
	void ExecuteUbergraph_GCNL_HighTower_Tomato_RepulsorCannon_ChargeUp(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_RInterpTo_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, float CallFunc_GetValueAtLevel_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsPlaying_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_NotEqual_RotatorRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_2, const struct FVector& CallFunc_GetClosestListenerLocation_ListenerPosition, bool CallFunc_GetClosestListenerLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_ProjectVectorOnToVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
};

}


