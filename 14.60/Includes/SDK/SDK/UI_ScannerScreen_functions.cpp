#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ScannerScreen.UI_ScannerScreen_C
// (None)

class UClass* UUI_ScannerScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ScannerScreen_C");

	return Clss;
}


// UI_ScannerScreen_C UI_ScannerScreen.Default__UI_ScannerScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ScannerScreen_C* UUI_ScannerScreen_C::GetDefaultObj()
{
	static class UUI_ScannerScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ScannerScreen_C*>(UUI_ScannerScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ScannerScreen.UI_ScannerScreen_C.EventFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ScreenText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ScannerScreen_C::EventFail(class FText ScreenText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScannerScreen_C", "EventFail");

	Params::UUI_ScannerScreen_C_EventFail_Params Parms{};

	Parms.ScreenText = ScreenText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ScannerScreen.UI_ScannerScreen_C.EventSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ScreenText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ScannerScreen_C::EventSuccess(class FText ScreenText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScannerScreen_C", "EventSuccess");

	Params::UUI_ScannerScreen_C_EventSuccess_Params Parms{};

	Parms.ScreenText = ScreenText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ScannerScreen.UI_ScannerScreen_C.EventScanning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ScannerScreen_C::EventScanning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScannerScreen_C", "EventScanning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ScannerScreen.UI_ScannerScreen_C.EventTargetLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ScreenText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ScannerScreen_C::EventTargetLost(class FText ScreenText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScannerScreen_C", "EventTargetLost");

	Params::UUI_ScannerScreen_C_EventTargetLost_Params Parms{};

	Parms.ScreenText = ScreenText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ScannerScreen.UI_ScannerScreen_C.ExecuteUbergraph_UI_ScannerScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        K2Node_CustomEvent_ScreenText_2                                  (None)
// class FText                        K2Node_CustomEvent_ScreenText_1                                  (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_CustomEvent_ScreenText                                    (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)

void UUI_ScannerScreen_C::ExecuteUbergraph_UI_ScannerScreen(int32 EntryPoint, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_CustomEvent_ScreenText_2, class FText K2Node_CustomEvent_ScreenText_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_CustomEvent_ScreenText, bool CallFunc_TextIsEmpty_ReturnValue_2, class FText K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScannerScreen_C", "ExecuteUbergraph_UI_ScannerScreen");

	Params::UUI_ScannerScreen_C_ExecuteUbergraph_UI_ScannerScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_CustomEvent_ScreenText_2 = K2Node_CustomEvent_ScreenText_2;
	Parms.K2Node_CustomEvent_ScreenText_1 = K2Node_CustomEvent_ScreenText_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_ScreenText = K2Node_CustomEvent_ScreenText;
	Parms.CallFunc_TextIsEmpty_ReturnValue_2 = CallFunc_TextIsEmpty_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


