#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C
// (None)

class UClass* ULeavePartyConfirmationMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeavePartyConfirmationMenu_C");

	return Clss;
}


// LeavePartyConfirmationMenu_C LeavePartyConfirmationMenu.Default__LeavePartyConfirmationMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeavePartyConfirmationMenu_C* ULeavePartyConfirmationMenu_C::GetDefaultObj()
{
	static class ULeavePartyConfirmationMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeavePartyConfirmationMenu_C*>(ULeavePartyConfirmationMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULeavePartyConfirmationMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeavePartyConfirmationMenu_C", "OnOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.ExecuteUbergraph_LeavePartyConfirmationMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeavePartyConfirmationMenu_C::ExecuteUbergraph_LeavePartyConfirmationMenu(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeavePartyConfirmationMenu_C", "ExecuteUbergraph_LeavePartyConfirmationMenu");

	Params::ULeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


