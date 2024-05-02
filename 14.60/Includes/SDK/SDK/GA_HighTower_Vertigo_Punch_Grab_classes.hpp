#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD10 - 0xCE0)
// BlueprintGeneratedClass GA_HighTower_Vertigo_Punch_Grab.GA_HighTower_Vertigo_Punch_Grab_C
class UGA_HighTower_Vertigo_Punch_Grab_C : public UGA_Athena_Knockback_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DistanceFromInstigator_AI;                         // 0xCE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArcParam;                                          // 0xCEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Momentum;                                          // 0xCF0(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PreLaunchVelocity;                                 // 0xCFC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitValidTarget;                                    // 0xD08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_75D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceFromInstigator_Players;                    // 0xD0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HighTower_Vertigo_Punch_Grab_C* GetDefaultObj();

	void CalculateStartAndEndPos(struct FVector* Start, struct FVector* End, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	struct FVector MomentumCheck(const struct FVector& PreMomentumLaunchvelocity, bool Temp_bool_Variable, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& K2Node_Select_Default);
	void OnRep_Momentum();
	void HandleMomentum(const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Find_Launcher(class AActor* DefaultLauncher, class AActor** LauncherOut, class AActor* CallFunc_GetOwner_ReturnValue);
	void OnFinished_091FAD184EDE104473C126A49066AF43(bool DestinationReached, bool TimedOut, const struct FVector& FinalTargetLocation);
	void K2_OnEndAbility(bool bWasCancelled);
	void LaunchAI(class AFortPawn* Target);
	void DoLaunch(const struct FVector& Vel);
	void ExecuteUbergraph_GA_HighTower_Vertigo_Punch_Grab(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, float CallFunc_Conv_BoolToFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& Temp_struct_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, class AFortPawn* K2Node_CustomEvent_Target, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_MakeVector_ReturnValue, class UAbilityTask_ApplyRootMotionMoveToActorForce* CallFunc_ApplyRootMotionMoveToActorForce_ReturnValue, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, const struct FVector& CallFunc_CalculateStartAndEndPos_Start, const struct FVector& CallFunc_CalculateStartAndEndPos_End, float CallFunc_Conv_BoolToFloat_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, bool K2Node_CustomEvent_DestinationReached, bool K2Node_CustomEvent_TimedOut, const struct FVector& K2Node_CustomEvent_FinalTargetLocation, const struct FVector& K2Node_Event_Vel);
};

}


