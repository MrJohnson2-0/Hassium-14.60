#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_ScannerScreen.BP_UI_ScannerScreen_C
// (Actor)

class UClass* ABP_UI_ScannerScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_ScannerScreen_C");

	return Clss;
}


// BP_UI_ScannerScreen_C BP_UI_ScannerScreen.Default__BP_UI_ScannerScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_UI_ScannerScreen_C* ABP_UI_ScannerScreen_C::GetDefaultObj()
{
	static class ABP_UI_ScannerScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_UI_ScannerScreen_C*>(ABP_UI_ScannerScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ErrorTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ErrorTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ErrorTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ErrorTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventError
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reverse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_ScannerScreen_C::ScreenEventError(bool Reverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventError");

	Params::ABP_UI_ScannerScreen_C_ScreenEventError_Params Parms{};

	Parms.Reverse = Reverse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SuccessText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventSuccess(class FText SuccessText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventSuccess");

	Params::ABP_UI_ScannerScreen_C_ScreenEventSuccess_Params Parms{};

	Parms.SuccessText = SuccessText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FailureText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventFailure(class FText FailureText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventFailure");

	Params::ABP_UI_ScannerScreen_C_ScreenEventFailure_Params Parms{};

	Parms.FailureText = FailureText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventScan
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ScreenEventScan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventScan");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventDismiss
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_ScannerScreen_C::ScreenEventDismiss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventDismiss");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventTargetLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LostText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventTargetLost(class FText LostText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ScreenEventTargetLost");

	Params::ABP_UI_ScannerScreen_C_ScreenEventTargetLost_Params Parms{};

	Parms.LostText = LostText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ExecuteUbergraph_BP_UI_ScannerScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_SuccessText                                   (None)
// class UMaterialInstanceDynamic*    CallFunc_GetMaterialInstance_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_FailureText                                   (None)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ScannerScreen_C*         K2Node_DynamicCast_AsUI_Scanner_Screen                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Reverse                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_LostText                                      (None)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_ScannerScreen_C::ExecuteUbergraph_BP_UI_ScannerScreen(int32 EntryPoint, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, class FText K2Node_CustomEvent_SuccessText, class UMaterialInstanceDynamic* CallFunc_GetMaterialInstance_ReturnValue, class FText K2Node_CustomEvent_FailureText, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_ScannerScreen_C* K2Node_DynamicCast_AsUI_Scanner_Screen, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Reverse, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText K2Node_CustomEvent_LostText, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_ScannerScreen_C", "ExecuteUbergraph_BP_UI_ScannerScreen");

	Params::ABP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;
	Parms.K2Node_CustomEvent_SuccessText = K2Node_CustomEvent_SuccessText;
	Parms.CallFunc_GetMaterialInstance_ReturnValue = CallFunc_GetMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_FailureText = K2Node_CustomEvent_FailureText;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Scanner_Screen = K2Node_DynamicCast_AsUI_Scanner_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Reverse = K2Node_CustomEvent_Reverse;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_LostText = K2Node_CustomEvent_LostText;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


