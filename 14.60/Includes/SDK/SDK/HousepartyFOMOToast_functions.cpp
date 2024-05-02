#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HousepartyFOMOToast.HousepartyFOMOToast_C
// (None)

class UClass* UHousepartyFOMOToast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HousepartyFOMOToast_C");

	return Clss;
}


// HousepartyFOMOToast_C HousepartyFOMOToast.Default__HousepartyFOMOToast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHousepartyFOMOToast_C* UHousepartyFOMOToast_C::GetDefaultObj()
{
	static class UHousepartyFOMOToast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHousepartyFOMOToast_C*>(UHousepartyFOMOToast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HousepartyFOMOToast.HousepartyFOMOToast_C.OnSetToast
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         ToastNotification                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHousepartyFOMOToast_C::OnSetToast(class UFortUINotification* ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HousepartyFOMOToast_C", "OnSetToast");

	Params::UHousepartyFOMOToast_C_OnSetToast_Params Parms{};

	Parms.ToastNotification = ToastNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HousepartyFOMOToast.HousepartyFOMOToast_C.ExecuteUbergraph_HousepartyFOMOToast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_ToastNotification                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHousepartyFOMOToast_C::ExecuteUbergraph_HousepartyFOMOToast(int32 EntryPoint, class UFortUINotification* K2Node_Event_ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HousepartyFOMOToast_C", "ExecuteUbergraph_HousepartyFOMOToast");

	Params::UHousepartyFOMOToast_C_ExecuteUbergraph_HousepartyFOMOToast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ToastNotification = K2Node_Event_ToastNotification;

	UObject::ProcessEvent(Func, &Parms);

}

}


