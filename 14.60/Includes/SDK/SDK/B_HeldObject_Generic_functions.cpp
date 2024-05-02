#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_HeldObject_Generic.B_HeldObject_Generic_C
// (Actor)

class UClass* AB_HeldObject_Generic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_HeldObject_Generic_C");

	return Clss;
}


// B_HeldObject_Generic_C B_HeldObject_Generic.Default__B_HeldObject_Generic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_HeldObject_Generic_C* AB_HeldObject_Generic_C::GetDefaultObj()
{
	static class AB_HeldObject_Generic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_HeldObject_Generic_C*>(AB_HeldObject_Generic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_HeldObject_Generic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObject_Generic_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ExecuteUbergraph_B_HeldObject_Generic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_FilterArray_FilteredArray                               (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_HeldObject_Parent_C*      K2Node_DynamicCast_AsB_Held_Object_Parent                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObject_Generic_C::ExecuteUbergraph_B_HeldObject_Generic(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TArray<class AActor*>& CallFunc_FilterArray_FilteredArray, class AActor* CallFunc_Array_Get_Item, class AB_HeldObject_Parent_C* K2Node_DynamicCast_AsB_Held_Object_Parent, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObject_Generic_C", "ExecuteUbergraph_B_HeldObject_Generic");

	Params::AB_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_FilterArray_FilteredArray = CallFunc_FilterArray_FilteredArray;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsB_Held_Object_Parent = K2Node_DynamicCast_AsB_Held_Object_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


