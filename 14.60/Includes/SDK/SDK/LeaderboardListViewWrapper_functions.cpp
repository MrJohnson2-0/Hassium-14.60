#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeaderboardListViewWrapper.LeaderboardListViewWrapper_C
// (None)

class UClass* ULeaderboardListViewWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardListViewWrapper_C");

	return Clss;
}


// LeaderboardListViewWrapper_C LeaderboardListViewWrapper.Default__LeaderboardListViewWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeaderboardListViewWrapper_C* ULeaderboardListViewWrapper_C::GetDefaultObj()
{
	static class ULeaderboardListViewWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardListViewWrapper_C*>(ULeaderboardListViewWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Display Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaderboardListViewWrapper_C::Set_Display_Info(const struct FFortTournamentDisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "Set Display Info");

	Params::ULeaderboardListViewWrapper_C_Set_Display_Info_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventWindowId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::Set_Event(const class FString& EventId, const class FString& EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "Set Event");

	Params::ULeaderboardListViewWrapper_C_Set_Event_Params Parms{};

	Parms.EventId = EventId;
	Parms.EventWindowId = EventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.OnLeaderboardDisplayTypeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ELeaderboardDisplayType NewDisplayType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::OnLeaderboardDisplayTypeChanged(enum class ELeaderboardDisplayType NewDisplayType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "OnLeaderboardDisplayTypeChanged");

	Params::ULeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged_Params Parms{};

	Parms.NewDisplayType = NewDisplayType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.ExecuteUbergraph_LeaderboardListViewWrapper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELeaderboardDisplayType Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_DisplayInfo                                   (None)
// float                              CallFunc_RGBToHSV_H                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_S                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_V                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_A                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventId                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventWindowId                                 (ZeroConstructor, HasGetValueTypeHash)
// enum class ELeaderboardDisplayType K2Node_Event_NewDisplayType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::ExecuteUbergraph_LeaderboardListViewWrapper(int32 EntryPoint, enum class ELeaderboardDisplayType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, const class FString& K2Node_CustomEvent_EventId, const class FString& K2Node_CustomEvent_EventWindowId, enum class ELeaderboardDisplayType K2Node_Event_NewDisplayType, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "ExecuteUbergraph_LeaderboardListViewWrapper");

	Params::ULeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CustomEvent_DisplayInfo = K2Node_CustomEvent_DisplayInfo;
	Parms.CallFunc_RGBToHSV_H = CallFunc_RGBToHSV_H;
	Parms.CallFunc_RGBToHSV_S = CallFunc_RGBToHSV_S;
	Parms.CallFunc_RGBToHSV_V = CallFunc_RGBToHSV_V;
	Parms.CallFunc_RGBToHSV_A = CallFunc_RGBToHSV_A;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.K2Node_CustomEvent_EventId = K2Node_CustomEvent_EventId;
	Parms.K2Node_CustomEvent_EventWindowId = K2Node_CustomEvent_EventWindowId;
	Parms.K2Node_Event_NewDisplayType = K2Node_Event_NewDisplayType;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


