#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SidekickUserActionMenu.SidekickUserActionMenu_C
// (None)

class UClass* USidekickUserActionMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidekickUserActionMenu_C");

	return Clss;
}


// SidekickUserActionMenu_C SidekickUserActionMenu.Default__SidekickUserActionMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USidekickUserActionMenu_C* USidekickUserActionMenu_C::GetDefaultObj()
{
	static class USidekickUserActionMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USidekickUserActionMenu_C*>(USidekickUserActionMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SidekickUserActionMenu.SidekickUserActionMenu_C.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USidekickUserActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickUserActionMenu_C", "OnToggleConfirmation");

	Params::USidekickUserActionMenu_C_OnToggleConfirmation_Params Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidekickUserActionMenu.SidekickUserActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidekickUserActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickUserActionMenu_C", "OnOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SidekickUserActionMenu.SidekickUserActionMenu_C.ExecuteUbergraph_SidekickUserActionMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsVisible                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidekickUserActionMenu_C::ExecuteUbergraph_SidekickUserActionMenu(int32 EntryPoint, bool K2Node_Event_bIsVisible, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickUserActionMenu_C", "ExecuteUbergraph_SidekickUserActionMenu");

	Params::USidekickUserActionMenu_C_ExecuteUbergraph_SidekickUserActionMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsVisible = K2Node_Event_bIsVisible;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


