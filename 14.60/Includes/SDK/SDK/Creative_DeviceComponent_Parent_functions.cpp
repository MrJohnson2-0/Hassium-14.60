#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C
// (None)

class UClass* UCreative_DeviceComponent_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Creative_DeviceComponent_Parent_C");

	return Clss;
}


// Creative_DeviceComponent_Parent_C Creative_DeviceComponent_Parent.Default__Creative_DeviceComponent_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreative_DeviceComponent_Parent_C* UCreative_DeviceComponent_Parent_C::GetDefaultObj()
{
	static class UCreative_DeviceComponent_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreative_DeviceComponent_Parent_C*>(UCreative_DeviceComponent_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.Owning Actor Activated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreative_DeviceComponent_Parent_C::Owning_Actor_Activated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_DeviceComponent_Parent_C", "Owning Actor Activated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.Owning Actor Initialized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreative_DeviceComponent_Parent_C::Owning_Actor_Initialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_DeviceComponent_Parent_C", "Owning Actor Initialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreative_DeviceComponent_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_DeviceComponent_Parent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.ExecuteUbergraph_Creative_DeviceComponent_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ACreative_Device_Prop_Parent_C*K2Node_DynamicCast_AsCreative_Device_Prop_Parent                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreative_DeviceComponent_Parent_C::ExecuteUbergraph_Creative_DeviceComponent_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACreative_Device_Prop_Parent_C* K2Node_DynamicCast_AsCreative_Device_Prop_Parent, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_DeviceComponent_Parent_C", "ExecuteUbergraph_Creative_DeviceComponent_Parent");

	Params::UCreative_DeviceComponent_Parent_C_ExecuteUbergraph_Creative_DeviceComponent_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsCreative_Device_Prop_Parent = K2Node_DynamicCast_AsCreative_Device_Prop_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


