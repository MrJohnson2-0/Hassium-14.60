#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x274 - 0x220)
// BlueprintGeneratedClass BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C
class ABP_Generic_TimerManager_Lobby_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TotalSecondsAtEvent;                               // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7909[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             TimeUntilCountdownEnd;                             // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                CalendarEventName;                                 // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FTimerHandle                          CountdownTimerHandle;                              // 0x250(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Phase3VisualDuration;                              // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_790A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AccuracyTimer;                                     // 0x260(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             TimeSinceCountdownBegin;                           // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        TimespanRatio;                                     // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Generic_TimerManager_Lobby_C* GetDefaultObj();

	void OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void CountdownTimer_New();
	void VisualUpdateEverySecond();
	void ContinueClockCountdown();
	void ClearTimerVisuals();
	void CountDownTimer_AccuracyFix();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Generic_TimerManager_Lobby(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName_2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_2, float K2Node_CustomEvent_TimeSpanRatio_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName_1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_1, float K2Node_CustomEvent_TimeSpanRatio_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, float K2Node_CustomEvent_TimeSpanRatio, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float Temp_float_Variable, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable_1, const class FString& Temp_string_Variable, bool CallFunc_GetCalendarEventInformation_bIsEventActive, const struct FTimespan& CallFunc_GetCalendarEventInformation_TimeSinceBegin, const struct FTimespan& CallFunc_GetCalendarEventInformation_TimeUntilEnd, float CallFunc_GetCalendarEventInformation_TimeSpanRatio, float CallFunc_GetTotalSeconds_ReturnValue, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetTotalSeconds_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32 CallFunc_GetSeconds_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, const class FString& CallFunc_Reverse_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Reverse_ReturnValue_1, float CallFunc_Conv_StringToFloat_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue_1, float CallFunc_Conv_StringToFloat_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue_2, float CallFunc_Conv_StringToFloat_ReturnValue_2, const class FString& CallFunc_GetSubstring_ReturnValue_3, float CallFunc_Conv_StringToFloat_ReturnValue_3, int32 CallFunc_GetHours_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, int32 CallFunc_GetDays_ReturnValue, const class FString& CallFunc_Reverse_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_GetSubstring_ReturnValue_4, const class FString& CallFunc_Reverse_ReturnValue_3, float CallFunc_Conv_StringToFloat_ReturnValue_4, const class FString& CallFunc_GetSubstring_ReturnValue_5, float CallFunc_Conv_StringToFloat_ReturnValue_5, const class FString& CallFunc_GetSubstring_ReturnValue_6, float CallFunc_Conv_StringToFloat_ReturnValue_6, const class FString& CallFunc_GetSubstring_ReturnValue_7, float CallFunc_Conv_StringToFloat_ReturnValue_7, int32 CallFunc_GetMinutes_ReturnValue_1, int32 CallFunc_GetHours_ReturnValue_1, int32 CallFunc_GetSeconds_ReturnValue_1, int32 CallFunc_GetDays_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue);
};

}


