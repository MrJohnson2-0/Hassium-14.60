#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x289 - 0x220)
// BlueprintGeneratedClass BP_TimeSynthController_Base.BP_TimeSynthController_Base_C
class ABP_TimeSynthController_Base_C : public AFortTimeSynthController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTimeSynthComponent*                   TimeSynth;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TimeSynthTrackComponent_C*         CurrentTrack;                                      // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TransitionBeats;                                   // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransitionActive;                                  // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_TimeSynthTrackComponent_C*         QueuedTransitionTrack;                             // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTimeSynthVolumeGroup*>         VolumeGroups;                                      // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FTimeSynthClipHandle>          QueuedTransitions;                                 // 0x258(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UBP_TimeSynthTrackComponent_C*> QueuedTracks;                                      // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         IsPlaying;                                         // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Debug;                                             // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGameplayDataTrackerComponentManager* DataTrackerManager;                                // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStoppedPermenant;                                // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_TimeSynthController_Base_C* GetDefaultObj();

	void OnTimeSynthTrackComponentRegistered(class UBP_TimeSynthTrackComponent_C*& Track);
	void GetTimeSynthComponent(class UTimeSynthComponent** TimeSynth);
	void RegisterTrackComponents();
	void GetIsPlaying(bool* IsPlaying);
	void CalculateMaxClipDuration(class UBP_TimeSynthTrackComponent_C* Track, int32* Duration, int32 MaxDuration, bool Temp_bool_Variable, const struct FTimeSynthQuantizationSettings& CallFunc_GetQuantizationSettings_QuantizationSettings, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void QueueTrackStartInternal(class UBP_TimeSynthTrackComponent_C* NewTrack, bool WasActive, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimeSynthQuantizationSettings& CallFunc_GetQuantizationSettings_QuantizationSettings, bool CallFunc_IsActive_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnQuantizationBar(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimeSynthQuantizationSettings& CallFunc_GetQuantizationSettings_QuantizationSettings, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void FlushExtraClips(bool Exclude_Current, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_TimeSynthTrackComponent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void OnQuantizationBeat(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat);
	void PlayTransition(const struct FTimeSynth_TransitionData& Transition_Data, class UBP_TimeSynthTrackComponent_C* Queued_Track, int32 CallFunc_GetMaxClipDuration_MaxClipDuration, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void StopAllMusic(bool Play_Outro, bool CallFunc_IsValid_ReturnValue);
	void ChangeTrack(class UBP_TimeSynthTrackComponent_C* New_Track, class UBP_TimeSynthTrackComponent_C* NewTrack, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_GetTrackID_TrackID, class FName CallFunc_GetTrackID_TrackID_1, bool CallFunc_HasTransitionForTrack_Transition_Found, const struct FTimeSynth_TransitionData& CallFunc_HasTransitionForTrack_Transition_Data, class FName CallFunc_GetTrackID_TrackID_2, bool CallFunc_NotEqual_NameName_ReturnValue);
	void RequestTrackChange(class UBP_TimeSynthTrackComponent_C* TrackRequesting, bool* CanChangeTrack, float CallFunc_GetPriority_Priority, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetPriority_Priority_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnReady_F7375C2B4721EA41B01B64B1D1823052(class AGameStateBase* GameState);
	void ReceiveBeginPlay();
	void SetVolumeGroup(int32 Index, float Volume_Multiplier);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void On_Game_Phase_Changed(enum class EAthenaGamePhase GamePhase);
	void ExecuteUbergraph_BP_TimeSynthController_Base(int32 EntryPoint, class AGameStateBase* K2Node_CustomEvent_GameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* Temp_object_Variable, class UFortAsyncAction_GameStateReady* CallFunc_GameStateReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_Index, float K2Node_CustomEvent_Volume_Multiplier, float CallFunc_MapRangeClamped_ReturnValue, class UTimeSynthVolumeGroup* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_SwitchEnum_CmpSuccess);
};

}


