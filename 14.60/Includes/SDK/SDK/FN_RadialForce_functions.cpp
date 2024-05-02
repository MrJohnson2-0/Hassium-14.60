#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FN_RadialForce.FN_RadialForce_C
// (Actor)

class UClass* AFN_RadialForce_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FN_RadialForce_C");

	return Clss;
}


// FN_RadialForce_C FN_RadialForce.Default__FN_RadialForce_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFN_RadialForce_C* AFN_RadialForce_C::GetDefaultObj()
{
	static class AFN_RadialForce_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFN_RadialForce_C*>(AFN_RadialForce_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FN_RadialForce.FN_RadialForce_C.NewFunction_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Roll                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

struct FTransform AFN_RadialForce_C::NewFunction_0(float Roll, float Scale, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FN_RadialForce_C", "NewFunction_0");

	Params::AFN_RadialForce_C_NewFunction_0_Params Parms{};

	Parms.Roll = Roll;
	Parms.Scale = Scale;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FN_RadialForce.FN_RadialForce_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFN_RadialForce_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FN_RadialForce_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FN_RadialForce.FN_RadialForce_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFN_RadialForce_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FN_RadialForce_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FN_RadialForce.FN_RadialForce_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFN_RadialForce_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FN_RadialForce_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FN_RadialForce.FN_RadialForce_C.ExecuteUbergraph_FN_RadialForce
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyByPi_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWaveScalar*                 CallFunc_SetWaveScalar_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWaveScalar*                 CallFunc_SetWaveScalar_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadialFalloff*              CallFunc_SetRadialFalloff_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadialVector*               CallFunc_SetRadialVector_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFN_RadialForce_C::ExecuteUbergraph_FN_RadialForce(int32 EntryPoint, float CallFunc_MultiplyByPi_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UWaveScalar* CallFunc_SetWaveScalar_ReturnValue, class UWaveScalar* CallFunc_SetWaveScalar_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, class URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, class UOperatorField* CallFunc_SetOperatorField_ReturnValue, class URadialVector* CallFunc_SetRadialVector_ReturnValue, class UOperatorField* CallFunc_SetOperatorField_ReturnValue_1, float CallFunc_FMax_ReturnValue, class UOperatorField* CallFunc_SetOperatorField_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FN_RadialForce_C", "ExecuteUbergraph_FN_RadialForce");

	Params::AFN_RadialForce_C_ExecuteUbergraph_FN_RadialForce_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MultiplyByPi_ReturnValue = CallFunc_MultiplyByPi_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_SetWaveScalar_ReturnValue = CallFunc_SetWaveScalar_ReturnValue;
	Parms.CallFunc_SetWaveScalar_ReturnValue_1 = CallFunc_SetWaveScalar_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_SetRadialFalloff_ReturnValue = CallFunc_SetRadialFalloff_ReturnValue;
	Parms.CallFunc_SetOperatorField_ReturnValue = CallFunc_SetOperatorField_ReturnValue;
	Parms.CallFunc_SetRadialVector_ReturnValue = CallFunc_SetRadialVector_ReturnValue;
	Parms.CallFunc_SetOperatorField_ReturnValue_1 = CallFunc_SetOperatorField_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_SetOperatorField_ReturnValue_2 = CallFunc_SetOperatorField_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


