#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xB38 - 0xAA8)
// BlueprintGeneratedClass GA_Athena_Flopper_Battle_Marking.GA_Athena_Flopper_Battle_Marking_C
class UGA_Athena_Flopper_Battle_Marking_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                        MarkingRadius;                                     // 0xAB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CurrentMarkingRadius;                              // 0xAD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6879[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPawn*>                     WorkingList;                                       // 0xAD8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTag                          CueOnMark;                                         // 0xAE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MarkingDuration;                                   // 0xAF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CurrentMarkingDuration;                            // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_687A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        DisableMarkingPlayers;                             // 0xB18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_Flopper_Battle_Marking_C* GetDefaultObj();

	void K2_ActivateAbility();
	void MarkEnemies_();
	void ExecuteUbergraph_GA_Athena_Flopper_Battle_Marking(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FIndicatedActorParticleSystemData& CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AFortPawn*>& CallFunc_GetFortPawnsInRange_OutFortPawns, class AActor* CallFunc_GetClosestActorFromArray_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetValueAtLevel_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_RowToBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4, class AFortPawn* CallFunc_Array_Get_Item, bool CallFunc_OnSameTeam_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


