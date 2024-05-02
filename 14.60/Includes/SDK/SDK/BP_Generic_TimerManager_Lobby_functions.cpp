#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C
// (Actor)

class UClass* ABP_Generic_TimerManager_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Generic_TimerManager_Lobby_C");

	return Clss;
}


// BP_Generic_TimerManager_Lobby_C BP_Generic_TimerManager_Lobby.Default__BP_Generic_TimerManager_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Generic_TimerManager_Lobby_C* ABP_Generic_TimerManager_Lobby_C::GetDefaultObj()
{
	static class ABP_Generic_TimerManager_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Generic_TimerManager_Lobby_C*>(ABP_Generic_TimerManager_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_TimerManager_Lobby_C::OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E");

	Params::ABP_Generic_TimerManager_Lobby_C_OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_TimerManager_Lobby_C::OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E");

	Params::ABP_Generic_TimerManager_Lobby_C_OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_TimerManager_Lobby_C::OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E");

	Params::ABP_Generic_TimerManager_Lobby_C_OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.CountdownTimer_New
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Generic_TimerManager_Lobby_C::CountdownTimer_New()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "CountdownTimer_New");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.VisualUpdateEverySecond
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Generic_TimerManager_Lobby_C::VisualUpdateEverySecond()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "VisualUpdateEverySecond");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.ContinueClockCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Generic_TimerManager_Lobby_C::ContinueClockCountdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "ContinueClockCountdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.ClearTimerVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Generic_TimerManager_Lobby_C::ClearTimerVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "ClearTimerVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.CountDownTimer_AccuracyFix
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Generic_TimerManager_Lobby_C::CountDownTimer_AccuracyFix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "CountDownTimer_AccuracyFix");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Generic_TimerManager_Lobby_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.ExecuteUbergraph_BP_Generic_TimerManager_Lobby
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName_2                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName_1                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCalendarEventInformation_bIsEventActive              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_GetCalendarEventInformation_TimeSinceBegin              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetCalendarEventInformation_TimeUntilEnd                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCalendarEventInformation_TimeSpanRatio               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CalendarEventWatcher*CallFunc_WatchCalendarEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTotalSeconds_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetTotalSeconds_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTotalSeconds_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSeconds_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMinutes_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Reverse_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Reverse_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue_2                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue_3                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHours_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDays_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Reverse_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue_4                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Reverse_ReturnValue_3                                   (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue_5                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue_6                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue_7                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMinutes_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHours_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeconds_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDays_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_TimerManager_Lobby_C::ExecuteUbergraph_BP_Generic_TimerManager_Lobby(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName_2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_2, float K2Node_CustomEvent_TimeSpanRatio_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName_1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_1, float K2Node_CustomEvent_TimeSpanRatio_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, float K2Node_CustomEvent_TimeSpanRatio, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float Temp_float_Variable, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable_1, const class FString& Temp_string_Variable, bool CallFunc_GetCalendarEventInformation_bIsEventActive, const struct FTimespan& CallFunc_GetCalendarEventInformation_TimeSinceBegin, const struct FTimespan& CallFunc_GetCalendarEventInformation_TimeUntilEnd, float CallFunc_GetCalendarEventInformation_TimeSpanRatio, float CallFunc_GetTotalSeconds_ReturnValue, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetTotalSeconds_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32 CallFunc_GetSeconds_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, const class FString& CallFunc_Reverse_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Reverse_ReturnValue_1, float CallFunc_Conv_StringToFloat_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue_1, float CallFunc_Conv_StringToFloat_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue_2, float CallFunc_Conv_StringToFloat_ReturnValue_2, const class FString& CallFunc_GetSubstring_ReturnValue_3, float CallFunc_Conv_StringToFloat_ReturnValue_3, int32 CallFunc_GetHours_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, int32 CallFunc_GetDays_ReturnValue, const class FString& CallFunc_Reverse_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_GetSubstring_ReturnValue_4, const class FString& CallFunc_Reverse_ReturnValue_3, float CallFunc_Conv_StringToFloat_ReturnValue_4, const class FString& CallFunc_GetSubstring_ReturnValue_5, float CallFunc_Conv_StringToFloat_ReturnValue_5, const class FString& CallFunc_GetSubstring_ReturnValue_6, float CallFunc_Conv_StringToFloat_ReturnValue_6, const class FString& CallFunc_GetSubstring_ReturnValue_7, float CallFunc_Conv_StringToFloat_ReturnValue_7, int32 CallFunc_GetMinutes_ReturnValue_1, int32 CallFunc_GetHours_ReturnValue_1, int32 CallFunc_GetSeconds_ReturnValue_1, int32 CallFunc_GetDays_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "ExecuteUbergraph_BP_Generic_TimerManager_Lobby");

	Params::ABP_Generic_TimerManager_Lobby_C_ExecuteUbergraph_BP_Generic_TimerManager_Lobby_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventName_2 = K2Node_CustomEvent_EventName_2;
	Parms.K2Node_CustomEvent_TimeUntilEnd_2 = K2Node_CustomEvent_TimeUntilEnd_2;
	Parms.K2Node_CustomEvent_TimeSinceBegin_2 = K2Node_CustomEvent_TimeSinceBegin_2;
	Parms.K2Node_CustomEvent_TimeSpanRatio_2 = K2Node_CustomEvent_TimeSpanRatio_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventName_1 = K2Node_CustomEvent_EventName_1;
	Parms.K2Node_CustomEvent_TimeUntilEnd_1 = K2Node_CustomEvent_TimeUntilEnd_1;
	Parms.K2Node_CustomEvent_TimeSinceBegin_1 = K2Node_CustomEvent_TimeSinceBegin_1;
	Parms.K2Node_CustomEvent_TimeSpanRatio_1 = K2Node_CustomEvent_TimeSpanRatio_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_TimeUntilEnd = K2Node_CustomEvent_TimeUntilEnd;
	Parms.K2Node_CustomEvent_TimeSinceBegin = K2Node_CustomEvent_TimeSinceBegin;
	Parms.K2Node_CustomEvent_TimeSpanRatio = K2Node_CustomEvent_TimeSpanRatio;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetCalendarEventInformation_bIsEventActive = CallFunc_GetCalendarEventInformation_bIsEventActive;
	Parms.CallFunc_GetCalendarEventInformation_TimeSinceBegin = CallFunc_GetCalendarEventInformation_TimeSinceBegin;
	Parms.CallFunc_GetCalendarEventInformation_TimeUntilEnd = CallFunc_GetCalendarEventInformation_TimeUntilEnd;
	Parms.CallFunc_GetCalendarEventInformation_TimeSpanRatio = CallFunc_GetCalendarEventInformation_TimeSpanRatio;
	Parms.CallFunc_GetTotalSeconds_ReturnValue = CallFunc_GetTotalSeconds_ReturnValue;
	Parms.CallFunc_WatchCalendarEvent_ReturnValue = CallFunc_WatchCalendarEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTotalSeconds_ReturnValue_1 = CallFunc_GetTotalSeconds_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetTotalSeconds_ReturnValue_2 = CallFunc_GetTotalSeconds_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTotalSeconds_ReturnValue_3 = CallFunc_GetTotalSeconds_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetSeconds_ReturnValue = CallFunc_GetSeconds_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetMinutes_ReturnValue = CallFunc_GetMinutes_ReturnValue;
	Parms.CallFunc_Reverse_ReturnValue = CallFunc_Reverse_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Reverse_ReturnValue_1 = CallFunc_Reverse_ReturnValue_1;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue_1 = CallFunc_GetSubstring_ReturnValue_1;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue_1 = CallFunc_Conv_StringToFloat_ReturnValue_1;
	Parms.CallFunc_GetSubstring_ReturnValue_2 = CallFunc_GetSubstring_ReturnValue_2;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue_2 = CallFunc_Conv_StringToFloat_ReturnValue_2;
	Parms.CallFunc_GetSubstring_ReturnValue_3 = CallFunc_GetSubstring_ReturnValue_3;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue_3 = CallFunc_Conv_StringToFloat_ReturnValue_3;
	Parms.CallFunc_GetHours_ReturnValue = CallFunc_GetHours_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_GetDays_ReturnValue = CallFunc_GetDays_ReturnValue;
	Parms.CallFunc_Reverse_ReturnValue_2 = CallFunc_Reverse_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_GetSubstring_ReturnValue_4 = CallFunc_GetSubstring_ReturnValue_4;
	Parms.CallFunc_Reverse_ReturnValue_3 = CallFunc_Reverse_ReturnValue_3;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue_4 = CallFunc_Conv_StringToFloat_ReturnValue_4;
	Parms.CallFunc_GetSubstring_ReturnValue_5 = CallFunc_GetSubstring_ReturnValue_5;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue_5 = CallFunc_Conv_StringToFloat_ReturnValue_5;
	Parms.CallFunc_GetSubstring_ReturnValue_6 = CallFunc_GetSubstring_ReturnValue_6;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue_6 = CallFunc_Conv_StringToFloat_ReturnValue_6;
	Parms.CallFunc_GetSubstring_ReturnValue_7 = CallFunc_GetSubstring_ReturnValue_7;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue_7 = CallFunc_Conv_StringToFloat_ReturnValue_7;
	Parms.CallFunc_GetMinutes_ReturnValue_1 = CallFunc_GetMinutes_ReturnValue_1;
	Parms.CallFunc_GetHours_ReturnValue_1 = CallFunc_GetHours_ReturnValue_1;
	Parms.CallFunc_GetSeconds_ReturnValue_1 = CallFunc_GetSeconds_ReturnValue_1;
	Parms.CallFunc_GetDays_ReturnValue_1 = CallFunc_GetDays_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


