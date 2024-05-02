#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0x19C - 0xB0)
// BlueprintGeneratedClass BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C
class UBP_TimeSynthTrackComponent_C : public UFortTimeSynthTrackComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Enabled;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_715A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TrackID;                                           // 0xBC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_715B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TimeSynthController_Base_C*        TimeSynthController;                               // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrackLengthBeats;                                  // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeSynthQuantizationSettings        QuantizationSettings;                              // 0xD4(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FTimeSynth_TrackStemData>      Clips;                                             // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        CurrentBeatDecrement;                              // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_715C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeSynth_TrackStemData              StopClip;                                          // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FTimeSynth_TransitionData> Transitions;                                       // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTimeSynthClipHandle>          Handles;                                           // 0x160(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         QuantizationEventBound;                            // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugEnabled;                                      // 0x171(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ETimeSynth_TrackPlayStates        PlayState;                                         // 0x172(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_715D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentBeat;                                       // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlayStateChanged;                                // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FTimeSynth_TrackMixState>      TrackMixStates;                                    // 0x188(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        PriorityWeight;                                    // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_TimeSynthTrackComponent_C* GetDefaultObj();

	void SetMixStateVolumeByIndex(int32 Index, float Volume, float LocalVolume, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Log_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimeSynth_VolumeGroupState& CallFunc_Array_Get_Item, float CallFunc_FMin_ReturnValue, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, bool CallFunc_Less_IntInt_ReturnValue, class UTimeSynthComponent* CallFunc_GetTimeSynthComponent_TimeSynth);
	void GetMixStateIndexFromName(class FName Name, int32* Array_Index, int32 CallFunc_FindMixState_Array_Index);
	void GetPriority(float* Priority);
	void SetMixStateVolume(class FName MixStateName, float Volume, float LocalVolume, float LocalFadeTime, bool LocalEnabled, class FName LocalMixStateName, float CallFunc_FClamp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, float CallFunc_Log_ReturnValue, class UTimeSynthComponent* CallFunc_GetTimeSynthComponent_TimeSynth, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FindMixState_Array_Index, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FTimeSynth_VolumeGroupState& CallFunc_Array_Get_Item);
	void FindMixState(class FName Name, int32* Array_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackMixState& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void GetMaxClipDuration(int32* MaxClipDuration);
	void GetQuantizationSettings(struct FTimeSynthQuantizationSettings* QuantizationSettings);
	void GetTrackID(class FName* TrackID);
	void GetIsEnabled(bool* Enabled);
	void GetTimeSynthController(class ABP_TimeSynthController_Base_C** TimeSynthController);
	void OnQuantizationBar(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1);
	void SetPlaystate(enum class ETimeSynth_TrackPlayStates Is_In_Play_State, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void CheckPlaystate(enum class ETimeSynth_TrackPlayStates Is_In_Play_State, bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnQuantizationBeat(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_CheckPlaystate_Result, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_CheckPlaystate_Result_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void HasTransitionForTrack(class FName TrackID, bool* Transition_Found, struct FTimeSynth_TransitionData* Transition_Data, const struct FTimeSynth_TransitionData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void CalculateMaxClipDuration(TArray<struct FTimeSynth_TrackStemData>& Clips, int32* Duration, int32 MaxDuration, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void LoopCurrentTrack(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FTimeSynthTimeDef& K2Node_MakeStruct_TimeSynthTimeDef, int32 Temp_int_Loop_Counter_Variable_1, class UTimeSynthComponent* CallFunc_GetTimeSynthComponent_TimeSynth, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTimeSynthClipHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_CalculateMaxClipDuration_Duration, class UTimeSynthComponent* CallFunc_GetTimeSynthComponent_TimeSynth_1, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void QueueTrackStop(bool Play_Outro, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void QueueTrackStart(bool Is_First_Track, enum class ETimeSynth_TrackPlayStates Temp_byte_Variable, enum class ETimeSynth_TrackPlayStates Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, enum class ETimeSynth_TrackPlayStates K2Node_Select_Default, int32 CallFunc_CalculateMaxClipDuration_Duration, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void SetTimeSynthController(class ABP_TimeSynthController_Base_C* TimeSynthController, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController_1, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TimeSynthTrackComponent(int32 EntryPoint, bool CallFunc_GetIsEnabled_Enabled, class UBP_TimeSynthTrackComponent_C* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TimeSynthController_Base_C* K2Node_DynamicCast_AsBP_Time_Synth_Controller_Base, bool K2Node_DynamicCast_bSuccess);
	void OnPlayStateChanged__DelegateSignature(enum class ETimeSynth_TrackPlayStates Previous, enum class ETimeSynth_TrackPlayStates New);
};

}


