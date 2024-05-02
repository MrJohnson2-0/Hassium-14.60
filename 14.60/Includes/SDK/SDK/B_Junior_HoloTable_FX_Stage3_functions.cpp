#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Junior_HoloTable_FX_Stage3.B_Junior_HoloTable_FX_Stage3_C
// (Actor)

class UClass* AB_Junior_HoloTable_FX_Stage3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Junior_HoloTable_FX_Stage3_C");

	return Clss;
}


// B_Junior_HoloTable_FX_Stage3_C B_Junior_HoloTable_FX_Stage3.Default__B_Junior_HoloTable_FX_Stage3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Junior_HoloTable_FX_Stage3_C* AB_Junior_HoloTable_FX_Stage3_C::GetDefaultObj()
{
	static class AB_Junior_HoloTable_FX_Stage3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Junior_HoloTable_FX_Stage3_C*>(AB_Junior_HoloTable_FX_Stage3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Junior_HoloTable_FX_Stage3.B_Junior_HoloTable_FX_Stage3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Junior_HoloTable_FX_Stage3_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Junior_HoloTable_FX_Stage3_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Junior_HoloTable_FX_Stage3.B_Junior_HoloTable_FX_Stage3_C.Timeline_FadeOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Junior_HoloTable_FX_Stage3_C::Timeline_FadeOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Junior_HoloTable_FX_Stage3_C", "Timeline_FadeOut__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Junior_HoloTable_FX_Stage3.B_Junior_HoloTable_FX_Stage3_C.Timeline_FadeOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Junior_HoloTable_FX_Stage3_C::Timeline_FadeOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Junior_HoloTable_FX_Stage3_C", "Timeline_FadeOut__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Junior_HoloTable_FX_Stage3.B_Junior_HoloTable_FX_Stage3_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Junior_HoloTable_FX_Stage3_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Junior_HoloTable_FX_Stage3_C", "ReceiveTick");

	Params::AB_Junior_HoloTable_FX_Stage3_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Junior_HoloTable_FX_Stage3.B_Junior_HoloTable_FX_Stage3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Junior_HoloTable_FX_Stage3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Junior_HoloTable_FX_Stage3_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Junior_HoloTable_FX_Stage3.B_Junior_HoloTable_FX_Stage3_C.ResetFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Junior_HoloTable_FX_Stage3_C::ResetFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Junior_HoloTable_FX_Stage3_C", "ResetFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Junior_HoloTable_FX_Stage3.B_Junior_HoloTable_FX_Stage3_C.ExecuteUbergraph_B_Junior_HoloTable_FX_Stage3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Junior_HoloTable_FX_Stage3_C::ExecuteUbergraph_B_Junior_HoloTable_FX_Stage3(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Junior_HoloTable_FX_Stage3_C", "ExecuteUbergraph_B_Junior_HoloTable_FX_Stage3");

	Params::AB_Junior_HoloTable_FX_Stage3_C_ExecuteUbergraph_B_Junior_HoloTable_FX_Stage3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


