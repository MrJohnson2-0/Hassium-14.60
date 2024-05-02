#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
// (None)

class UClass* UNPCStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCStatusWidget_C");

	return Clss;
}


// NPCStatusWidget_C NPCStatusWidget.Default__NPCStatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPCStatusWidget_C* UNPCStatusWidget_C::GetDefaultObj()
{
	static class UNPCStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPCStatusWidget_C*>(UNPCStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPCStatusWidget.NPCStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNPCStatusWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::EventUpdateStatus(float Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidget_C", "EventUpdateStatus");

	Params::UNPCStatusWidget_C_EventUpdateStatus_Params Parms{};

	Parms.Health = Health;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusWidget_C::EventHideStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidget_C", "EventHideStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StatusWidgetVisibleDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::ChangeWidgetVisibleDuration(float StatusWidgetVisibleDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidget_C", "ChangeWidgetVisibleDuration");

	Params::UNPCStatusWidget_C_ChangeWidgetVisibleDuration_Params Parms{};

	Parms.StatusWidgetVisibleDuration = StatusWidgetVisibleDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StatusWidgetVisibleDuration                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::ExecuteUbergraph_NPCStatusWidget(int32 EntryPoint, float K2Node_CustomEvent_StatusWidgetVisibleDuration, float K2Node_CustomEvent_health, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidget_C", "ExecuteUbergraph_NPCStatusWidget");

	Params::UNPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_StatusWidgetVisibleDuration = K2Node_CustomEvent_StatusWidgetVisibleDuration;
	Parms.K2Node_CustomEvent_health = K2Node_CustomEvent_health;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPCStatusWidget_C::VisibilityChanged__DelegateSignature(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCStatusWidget_C", "VisibilityChanged__DelegateSignature");

	Params::UNPCStatusWidget_C_VisibilityChanged__DelegateSignature_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}

}


