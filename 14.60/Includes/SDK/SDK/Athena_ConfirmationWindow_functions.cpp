#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Athena_ConfirmationWindow.Athena_ConfirmationWindow_C
// (None)

class UClass* UAthena_ConfirmationWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ConfirmationWindow_C");

	return Clss;
}


// Athena_ConfirmationWindow_C Athena_ConfirmationWindow.Default__Athena_ConfirmationWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ConfirmationWindow_C* UAthena_ConfirmationWindow_C::GetDefaultObj()
{
	static class UAthena_ConfirmationWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ConfirmationWindow_C*>(UAthena_ConfirmationWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.OnSetButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthena_ConfirmationWindow_C::OnSetButtonText(class UCommonButton* Button, class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_ConfirmationWindow_C", "OnSetButtonText");

	Params::UAthena_ConfirmationWindow_C_OnSetButtonText_Params Parms{};

	Parms.Button = Button;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.ExecuteUbergraph_Athena_ConfirmationWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_Event_Button                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// class UAthena_ConfirmationButton_C*K2Node_DynamicCast_AsAthena_Confirmation_Button                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_ConfirmationWindow_C::ExecuteUbergraph_Athena_ConfirmationWindow(int32 EntryPoint, class UCommonButton* K2Node_Event_Button, class FText K2Node_Event_Text, class UAthena_ConfirmationButton_C* K2Node_DynamicCast_AsAthena_Confirmation_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_ConfirmationWindow_C", "ExecuteUbergraph_Athena_ConfirmationWindow");

	Params::UAthena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Button = K2Node_Event_Button;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_DynamicCast_AsAthena_Confirmation_Button = K2Node_DynamicCast_AsAthena_Confirmation_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


