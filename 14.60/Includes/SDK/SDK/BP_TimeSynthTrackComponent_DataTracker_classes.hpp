#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6D (0x209 - 0x19C)
// BlueprintGeneratedClass BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C
class UBP_TimeSynthTrackComponent_DataTracker_C : public UBP_TimeSynthTrackComponent_C
{
public:
	uint8                                        Pad_7815[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortGameplayDataTrackerComponent*     DataTrackerComponent;                              // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DataTrackerAssigned;                               // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7816[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DataTrackerComponentClass;                         // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayDataTrackerComponentManager* DataTrackerComponentManager;                       // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AwaitingCooldownBeforeShutoff;                     // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7817[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundMix*                             SoundMix;                                          // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        EnabledDataRow;                                    // 0x1D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FScalableFloat>                TrackMixStateVolumeDataRows;                       // 0x1F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         MixPushed;                                         // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_TimeSynthTrackComponent_DataTracker_C* GetDefaultObj();

	void QueueTrackStop(bool Play_Outro);
	void GetIsEnabled(bool* Enabled, bool CallFunc_GetIsEnabled_Enabled, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetRemainingEventCooldown(float* Cooldown);
	void OnAnyEventValueChanged(class UFortGameplayDataTrackerComponent* Data_Tracker_Component, bool Has_Event_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnDataTrackerComponentUnRegistered(class UFortGameplayDataTrackerComponent* Data_Tracker_Component);
	void OnDataTrackerComponentRegistered(class UFortGameplayDataTrackerComponent* Data_Tracker_Component);
	void GetDataTrackerComponentManager(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TArray<class UFortGameplayDataTrackerComponent*>& CallFunc_GetRegisteredDataTrackerComponents_OutDataTrackerComponents, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortGameplayDataTrackerComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue);
	void AssignDataTrackerComponent(class UFortGameplayDataTrackerComponent* DataTrackerComponent, bool CallFunc_IsDedicatedServer_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue);
	void GetDataTrackerComponent(class UFortGameplayDataTrackerComponent** DataTrackerComponent);
	void StopDataTracker(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnDataTrackerEnd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckPlaystate_Result, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, const struct FTimeSynth_TrackMixState& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnDataTrackerUpdate(class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, bool CallFunc_CheckPlaystate_Result, bool CallFunc_RequestTrackChange_CanChangeTrack, float CallFunc_GetRemainingEventCooldown_Cooldown, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnDataTrackerStart(class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, bool CallFunc_RequestTrackChange_CanChangeTrack);
	void OnReady_FFC0E068479278E143D010AF8EB81D0D(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();
	void GamePhaseChanged(enum class EAthenaGamePhase GamePhase);
	void ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker(int32 EntryPoint, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_Enabled, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FScalableFloat& CallFunc_Array_Get_Item, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, bool K2Node_SwitchEnum_CmpSuccess);
};

}


