#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HousepartyWelcomeToast.HousepartyWelcomeToast_C
// (None)

class UClass* UHousepartyWelcomeToast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HousepartyWelcomeToast_C");

	return Clss;
}


// HousepartyWelcomeToast_C HousepartyWelcomeToast.Default__HousepartyWelcomeToast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHousepartyWelcomeToast_C* UHousepartyWelcomeToast_C::GetDefaultObj()
{
	static class UHousepartyWelcomeToast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHousepartyWelcomeToast_C*>(UHousepartyWelcomeToast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.OnSetToast
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         ToastNotification                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHousepartyWelcomeToast_C::OnSetToast(class UFortUINotification* ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HousepartyWelcomeToast_C", "OnSetToast");

	Params::UHousepartyWelcomeToast_C_OnSetToast_Params Parms{};

	Parms.ToastNotification = ToastNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.ExecuteUbergraph_HousepartyWelcomeToast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_ToastNotification                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHousepartyWelcomeToast_C::ExecuteUbergraph_HousepartyWelcomeToast(int32 EntryPoint, class UFortUINotification* K2Node_Event_ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HousepartyWelcomeToast_C", "ExecuteUbergraph_HousepartyWelcomeToast");

	Params::UHousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ToastNotification = K2Node_Event_ToastNotification;

	UObject::ProcessEvent(Func, &Parms);

}

}


