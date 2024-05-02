#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C
// (None)

class UClass* UEventTeamMatchHistoryModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventTeamMatchHistoryModal_C");

	return Clss;
}


// EventTeamMatchHistoryModal_C EventTeamMatchHistoryModal.Default__EventTeamMatchHistoryModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventTeamMatchHistoryModal_C* UEventTeamMatchHistoryModal_C::GetDefaultObj()
{
	static class UEventTeamMatchHistoryModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventTeamMatchHistoryModal_C*>(UEventTeamMatchHistoryModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.Set Up Match History Style
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  Tournament_Display_Info                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UEventTeamMatchHistoryModal_C::Set_Up_Match_History_Style(const struct FFortTournamentDisplayInfo& Tournament_Display_Info, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "Set Up Match History Style");

	Params::UEventTeamMatchHistoryModal_C_Set_Up_Match_History_Style_Params Parms{};

	Parms.Tournament_Display_Info = Tournament_Display_Info;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryModal_C::BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UEventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventTeamMatchHistoryModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.OnSetupMatchHistory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      TournamentId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventWindowId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryModal_C::OnSetupMatchHistory(const class FString& TournamentId, const class FString& EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "OnSetupMatchHistory");

	Params::UEventTeamMatchHistoryModal_C_OnSetupMatchHistory_Params Parms{};

	Parms.TournamentId = TournamentId;
	Parms.EventWindowId = EventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.ExecuteUbergraph_EventTeamMatchHistoryModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_TournamentId                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_EventWindowId                                       (ZeroConstructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryModal_C::ExecuteUbergraph_EventTeamMatchHistoryModal(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const class FString& K2Node_Event_TournamentId, const class FString& K2Node_Event_EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "ExecuteUbergraph_EventTeamMatchHistoryModal");

	Params::UEventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_TournamentId = K2Node_Event_TournamentId;
	Parms.K2Node_Event_EventWindowId = K2Node_Event_EventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}

}


