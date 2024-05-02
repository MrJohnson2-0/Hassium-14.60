#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TimeSynthTrackComponent_Gasket_Wasabi.BP_TimeSynthTrackComponent_Gasket_Wasabi_C
// (None)

class UClass* UBP_TimeSynthTrackComponent_Gasket_Wasabi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TimeSynthTrackComponent_Gasket_Wasabi_C");

	return Clss;
}


// BP_TimeSynthTrackComponent_Gasket_Wasabi_C BP_TimeSynthTrackComponent_Gasket_Wasabi.Default__BP_TimeSynthTrackComponent_Gasket_Wasabi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TimeSynthTrackComponent_Gasket_Wasabi_C* UBP_TimeSynthTrackComponent_Gasket_Wasabi_C::GetDefaultObj()
{
	static class UBP_TimeSynthTrackComponent_Gasket_Wasabi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TimeSynthTrackComponent_Gasket_Wasabi_C*>(UBP_TimeSynthTrackComponent_Gasket_Wasabi_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TimeSynthTrackComponent_Gasket_Wasabi.BP_TimeSynthTrackComponent_Gasket_Wasabi_C.OnDataTrackerStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_TimeSynthTrackComponent_Gasket_Wasabi_C::OnDataTrackerStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_Gasket_Wasabi_C", "OnDataTrackerStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeSynthTrackComponent_Gasket_Wasabi.BP_TimeSynthTrackComponent_Gasket_Wasabi_C.HandleMixState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_Gasket_Wasabi_C::HandleMixState(float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_Gasket_Wasabi_C", "HandleMixState");

	Params::UBP_TimeSynthTrackComponent_Gasket_Wasabi_C_HandleMixState_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_Gasket_Wasabi.BP_TimeSynthTrackComponent_Gasket_Wasabi_C.GetRemainingEventCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Cooldown                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_Gasket_Wasabi_C::GetRemainingEventCooldown(float* Cooldown, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_Gasket_Wasabi_C", "GetRemainingEventCooldown");

	Params::UBP_TimeSynthTrackComponent_Gasket_Wasabi_C_GetRemainingEventCooldown_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Cooldown != nullptr)
		*Cooldown = Parms.Cooldown;

}


// Function BP_TimeSynthTrackComponent_Gasket_Wasabi.BP_TimeSynthTrackComponent_Gasket_Wasabi_C.OnDataTrackerUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponent*CallFunc_GetDataTrackerComponent_DataTrackerComponent            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponent*CallFunc_GetDataTrackerComponent_DataTrackerComponent_1          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_Gasket_Wasabi_C::OnDataTrackerUpdate(float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTrackerComponent, float CallFunc_GetEventValue_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTrackerComponent_1, float CallFunc_GetEventValue_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_Gasket_Wasabi_C", "OnDataTrackerUpdate");

	Params::UBP_TimeSynthTrackComponent_Gasket_Wasabi_C_OnDataTrackerUpdate_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetDataTrackerComponent_DataTrackerComponent = CallFunc_GetDataTrackerComponent_DataTrackerComponent;
	Parms.CallFunc_GetEventValue_ReturnValue = CallFunc_GetEventValue_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetDataTrackerComponent_DataTrackerComponent_1 = CallFunc_GetDataTrackerComponent_DataTrackerComponent_1;
	Parms.CallFunc_GetEventValue_ReturnValue_1 = CallFunc_GetEventValue_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


