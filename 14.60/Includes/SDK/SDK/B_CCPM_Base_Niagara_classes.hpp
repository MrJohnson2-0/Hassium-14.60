#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x62 (0x3F2 - 0x390)
// BlueprintGeneratedClass B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C
class AB_CCPM_Base_Niagara_C : public ACustomCharacterPartModifier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Niagara;                                           // 0x3A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                        Character_Part_Type;                               // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Activate_Particles_During_Skydive;                 // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDriving;                                         // 0x3B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Disable_Particles_in_Vehicle;                      // 0x3B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C44[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_C*                  Last_Pawn;                                         // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  PlayerPawn;                                        // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Stats;                                      // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortStatManagerTag                   Stat_Tag;                                          // 0x3CC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Activate_Particles_After_Skydive_End;              // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Debug;                                             // 0x3D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Activate_Particles_on_Vehicle_Exit;                // 0x3D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Activate_Particles_in_Front_End;                   // 0x3D7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Debug_Res;                                         // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Debug_Color;                                       // 0x3DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Activate_Particles_on_Res_In;                      // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsLanded;                                         // 0x3F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_CCPM_Base_Niagara_C* GetDefaultObj();

	struct FGameplayTagContainer GetNiagaraSuperLevelParticles(TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue);
	void Debug_FX(const class FString& Print_String);
	void GetIsFrontEnd(bool* IsInFrontEnd, bool CallFunc_IsInFrontend_ReturnValue);
	void IsStageStatRequirementsMet();
	void Set_Niagara_System_User_Variable__Bool_(class FName Name, bool Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void Set_Niagara_System_User_Variable__Color_(class FName Name, const struct FLinearColor& Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void Set_Niagara_System_User_Variable__Vector_(class FName Name, const struct FVector& Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void Set_Niagara_System_User_Variable__Int_(class FName Name, int32 Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void Set_Niagara_System_User_Variable__Float_(class FName Name, float Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void GetIsDriving(bool* IsDriving);
	void GetNiagaraParticles(struct FGameplayTagContainer* Gameplay_Tag_Container, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue);
	void OnStatChanged_B170ACAB47DC1A9DBE8D138BF0A01420(class FName StatName, int32 StatValue);
	void OnComponentsReady_697782874F9B58BD916BDBA30537E29E();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ResOut();
	void ResIn();
	void OnTargetingOrFirstPersonCameraChanged();
	void Watch_Stats();
	void On_Stat_Canged(class FName Stat_Name, int32 Stat_Value);
	void Morning_Phase(bool At_Creation);
	void Day_Phase(bool At_Creation);
	void Evening_Phase(bool At_Creation);
	void Night_Phase(bool At_Creation);
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void Reset_Exit_Vehicle();
	void Reset_Enter_Vehicle();
	void Vehicle_Entry();
	void OnExitVehicle();
	void OnEnterVehicle(TScriptInterface<class IFortVehicleInterface>& VehicleEntered);
	void OnPawnAndPartChanged();
	void ReceiveBeginPlay();
	void Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OnBeginSkydiving();
	void OnEndSkydiving();
	void IsHiddenInProp(bool IsHidden);
	void Enter_Vehicle();
	void Exit_Vehicle();
	void Manage_Particles();
	void ExecuteUbergraph_B_CCPM_Base_Niagara(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, int32 Temp_int_Variable, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAsyncAction_WaitManagedParticles* CallFunc_SpawnManagedParticlesWithCallback_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container, bool CallFunc_IsInFrontend_ReturnValue, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class FName K2Node_CustomEvent_Stat_Name, int32 K2Node_CustomEvent_Stat_Value, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool K2Node_CustomEvent_At_Creation_3, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_At_Creation_2, bool K2Node_CustomEvent_At_Creation_1, bool K2Node_CustomEvent_At_Creation, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_getIsDriving_isDriving, TScriptInterface<class IFortVehicleInterface> K2Node_Event_VehicleEntered, bool CallFunc_getIsDriving_isDriving_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float K2Node_CustomEvent_DeltaSeconds, const struct FVector& K2Node_CustomEvent_OldLocation, const struct FVector& K2Node_CustomEvent_OldVelocity, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container_2, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container_3, bool K2Node_CustomEvent_isHidden, bool CallFunc_BooleanAND_ReturnValue_3, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container_4, bool Temp_bool_IsClosed_Variable, bool CallFunc_getIsFrontEnd_IsInFrontEnd, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4);
};

}


