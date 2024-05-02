#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ArenaLeaderboard.ArenaLeaderboard_C
// (None)

class UClass* UArenaLeaderboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArenaLeaderboard_C");

	return Clss;
}


// ArenaLeaderboard_C ArenaLeaderboard.Default__ArenaLeaderboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArenaLeaderboard_C* UArenaLeaderboard_C::GetDefaultObj()
{
	static class UArenaLeaderboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArenaLeaderboard_C*>(UArenaLeaderboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArenaLeaderboard.ArenaLeaderboard_C.Initialize Children For Event
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Event_Id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Event_Window_Id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Tournament_Id                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class ULeaderboardTab_C*           K2Node_DynamicCast_AsLeaderboard_Tab                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArenaLeaderboard_C::Initialize_Children_For_Event(const class FString& Event_Id, const class FString& Event_Window_Id, const class FString& Tournament_Id, class ULeaderboardTab_C* K2Node_DynamicCast_AsLeaderboard_Tab, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "Initialize Children For Event");

	Params::UArenaLeaderboard_C_Initialize_Children_For_Event_Params Parms{};

	Parms.Event_Id = Event_Id;
	Parms.Event_Window_Id = Event_Window_Id;
	Parms.Tournament_Id = Tournament_Id;
	Parms.K2Node_DynamicCast_AsLeaderboard_Tab = K2Node_DynamicCast_AsLeaderboard_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.OnLeaderboardEntrySelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData*EntryData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArenaLeaderboard_C::OnLeaderboardEntrySelected(class UFortEventLeaderboardEntryData* EntryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "OnLeaderboardEntrySelected");

	Params::UArenaLeaderboard_C_OnLeaderboardEntrySelected_Params Parms{};

	Parms.EntryData = EntryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UArenaLeaderboard_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.ShowMyStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArenaLeaderboard_C::ShowMyStats(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "ShowMyStats");

	Params::UArenaLeaderboard_C_ShowMyStats_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.SetupForEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventWindowId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UArenaLeaderboard_C::SetupForEvent(const class FString& EventId, const class FString& EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "SetupForEvent");

	Params::UArenaLeaderboard_C_SetupForEvent_Params Parms{};

	Parms.EventId = EventId;
	Parms.EventWindowId = EventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.OnColorize
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  ColorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UArenaLeaderboard_C::OnColorize(const struct FFortTournamentDisplayInfo& ColorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "OnColorize");

	Params::UArenaLeaderboard_C_OnColorize_Params Parms{};

	Parms.ColorInfo = ColorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UArenaLeaderboard_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.Item Double-Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArenaLeaderboard_C::Item_DoubleMinusClicked(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "Item Double-Clicked");

	Params::UArenaLeaderboard_C_Item_DoubleMinusClicked_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UArenaLeaderboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArenaLeaderboard.ArenaLeaderboard_C.ExecuteUbergraph_ArenaLeaderboard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortEventLeaderboardEntryData*K2Node_Event_EntryData                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortEventLeaderboardEntryData*CallFunc_GetMyLeaderboardEntry_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_EventId                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_EventWindowId                                       (ZeroConstructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_Event_ColorInfo                                           (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ULeaderboardTab_C*           K2Node_DynamicCast_AsLeaderboard_Tab                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULeaderboardListViewWrapper_C*K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UListView*                   CallFunc_GetListView_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortEventLeaderboardEntryData*K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArenaViewMeTab_C*           K2Node_DynamicCast_AsArena_View_Me_Tab                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArenaLeaderboard_C::ExecuteUbergraph_ArenaLeaderboard(int32 EntryPoint, class UFortEventLeaderboardEntryData* K2Node_Event_EntryData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_CustomEvent_Button, class UFortEventLeaderboardEntryData* CallFunc_GetMyLeaderboardEntry_ReturnValue, const class FString& K2Node_Event_EventId, const class FString& K2Node_Event_EventWindowId, const struct FFortTournamentDisplayInfo& K2Node_Event_ColorInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULeaderboardTab_C* K2Node_DynamicCast_AsLeaderboard_Tab, bool K2Node_DynamicCast_bSuccess, class ULeaderboardListViewWrapper_C* K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper, bool K2Node_DynamicCast_bSuccess_1, class UListView* CallFunc_GetListView_ReturnValue, class UObject* K2Node_CustomEvent_Item, class UFortEventLeaderboardEntryData* K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data, bool K2Node_DynamicCast_bSuccess_2, class UArenaViewMeTab_C* K2Node_DynamicCast_AsArena_View_Me_Tab, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArenaLeaderboard_C", "ExecuteUbergraph_ArenaLeaderboard");

	Params::UArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EntryData = K2Node_Event_EntryData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetMyLeaderboardEntry_ReturnValue = CallFunc_GetMyLeaderboardEntry_ReturnValue;
	Parms.K2Node_Event_EventId = K2Node_Event_EventId;
	Parms.K2Node_Event_EventWindowId = K2Node_Event_EventWindowId;
	Parms.K2Node_Event_ColorInfo = K2Node_Event_ColorInfo;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsLeaderboard_Tab = K2Node_DynamicCast_AsLeaderboard_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper = K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetListView_ReturnValue = CallFunc_GetListView_ReturnValue;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data = K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsArena_View_Me_Tab = K2Node_DynamicCast_AsArena_View_Me_Tab;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


