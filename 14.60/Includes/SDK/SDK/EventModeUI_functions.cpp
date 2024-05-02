#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EventModeUI.FocusButton
// (None)

class UClass* UFocusButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FocusButton");

	return Clss;
}


// FocusButton EventModeUI.Default__FocusButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFocusButton* UFocusButton::GetDefaultObj()
{
	static class UFocusButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFocusButton*>(UFocusButton::StaticClass()->DefaultObject);

	return Default;
}


// Function EventModeUI.FocusButton.HandleEventModeFocusingChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsEventModeFocusing                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFocusButton::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FocusButton", "HandleEventModeFocusingChanged");

	Params::UFocusButton_HandleEventModeFocusingChanged_Params Parms{};

	Parms.bIsEventModeFocusing = bIsEventModeFocusing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bCanUseEventModeFocus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFocusButton::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FocusButton", "HandleCanUseEventModeFocusChanged");

	Params::UFocusButton_HandleCanUseEventModeFocusChanged_Params Parms{};

	Parms.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EventModeUI.FortEventModeEmotesWidget
// (None)

class UClass* UFortEventModeEmotesWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortEventModeEmotesWidget");

	return Clss;
}


// FortEventModeEmotesWidget EventModeUI.Default__FortEventModeEmotesWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortEventModeEmotesWidget* UFortEventModeEmotesWidget::GetDefaultObj()
{
	static class UFortEventModeEmotesWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortEventModeEmotesWidget*>(UFortEventModeEmotesWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFocusing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventModeEmotesWidget::OnFocusStateChanged(bool bIsFocusing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortEventModeEmotesWidget", "OnFocusStateChanged");

	Params::UFortEventModeEmotesWidget_OnFocusStateChanged_Params Parms{};

	Parms.bIsFocusing = bIsFocusing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFocusAvailable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventModeEmotesWidget::OnFocusAvailableChanged(bool bIsFocusAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortEventModeEmotesWidget", "OnFocusAvailableChanged");

	Params::UFortEventModeEmotesWidget_OnFocusAvailableChanged_Params Parms{};

	Parms.bIsFocusAvailable = bIsFocusAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Class EventModeUI.FortMobileActionButtonBehavior_Focus
// (None)

class UClass* UFortMobileActionButtonBehavior_Focus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_Focus");

	return Clss;
}


// FortMobileActionButtonBehavior_Focus EventModeUI.Default__FortMobileActionButtonBehavior_Focus
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileActionButtonBehavior_Focus* UFortMobileActionButtonBehavior_Focus::GetDefaultObj()
{
	static class UFortMobileActionButtonBehavior_Focus* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileActionButtonBehavior_Focus*>(UFortMobileActionButtonBehavior_Focus::StaticClass()->DefaultObject);

	return Default;
}


// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsEventModeFocusing                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileActionButtonBehavior_Focus::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_Focus", "HandleEventModeFocusingChanged");

	Params::UFortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged_Params Parms{};

	Parms.bIsEventModeFocusing = bIsEventModeFocusing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bCanUseEventModeFocus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileActionButtonBehavior_Focus::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_Focus", "HandleCanUseEventModeFocusChanged");

	Params::UFortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged_Params Parms{};

	Parms.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


