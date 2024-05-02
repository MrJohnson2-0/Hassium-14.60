#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C BP_Frontend_EventLevel_NavObject_VisibilityMannequin.Default__BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C* ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C*>(ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C.BndEvt__FortNavigationVisibility_K2Node_ComponentBoundEvent_0_SimpleVisibilityResponseDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::BndEvt__FortNavigationVisibility_K2Node_ComponentBoundEvent_0_SimpleVisibilityResponseDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C", "BndEvt__FortNavigationVisibility_K2Node_ComponentBoundEvent_0_SimpleVisibilityResponseDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C.BndEvt__FortNavigationVisibility_K2Node_ComponentBoundEvent_1_SimpleVisibilityResponseDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::BndEvt__FortNavigationVisibility_K2Node_ComponentBoundEvent_1_SimpleVisibilityResponseDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C", "BndEvt__FortNavigationVisibility_K2Node_ComponentBoundEvent_1_SimpleVisibilityResponseDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C.HideMannequin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::HideMannequin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C", "HideMannequin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C.ShowMannequin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::ShowMannequin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C", "ShowMannequin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C.ClearVisTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::ClearVisTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C", "ClearVisTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_VisibilityMannequin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_VisibilityMannequin(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_VisibilityMannequin");

	Params::ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_VisibilityMannequin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


