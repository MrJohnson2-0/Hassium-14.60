#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
// (None)

class UClass* UAthenaChatWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaChatWidget_C");

	return Clss;
}


// AthenaChatWidget_C AthenaChatWidget.Default__AthenaChatWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaChatWidget_C* UAthenaChatWidget_C::GetDefaultObj()
{
	static class UAthenaChatWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaChatWidget_C*>(UAthenaChatWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaChatWidget.AthenaChatWidget_C.FocusChat
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFocus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidget_C::FocusChat(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChatWidget_C", "FocusChat");

	Params::UAthenaChatWidget_C_FocusChat_Params Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChatWidget.AthenaChatWidget_C.ExecuteUbergraph_AthenaChatWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFocus                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaChatWidgetModalWrapper_C*K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidget_C::ExecuteUbergraph_AthenaChatWidget(int32 EntryPoint, bool K2Node_Event_bFocus, class UAthenaChatWidgetModalWrapper_C* K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChatWidget_C", "ExecuteUbergraph_AthenaChatWidget");

	Params::UAthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bFocus = K2Node_Event_bFocus;
	Parms.K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper = K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChatWidget.AthenaChatWidget_C.OnEnteredChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnteredChat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidget_C::OnEnteredChat__DelegateSignature(bool EnteredChat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChatWidget_C", "OnEnteredChat__DelegateSignature");

	Params::UAthenaChatWidget_C_OnEnteredChat__DelegateSignature_Params Parms{};

	Parms.EnteredChat = EnteredChat;

	UObject::ProcessEvent(Func, &Parms);

}

}


