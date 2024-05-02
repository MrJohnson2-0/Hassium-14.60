#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_HeldObjectSocket.B_HeldObjectSocket_C
// (Actor)

class UClass* AB_HeldObjectSocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_HeldObjectSocket_C");

	return Clss;
}


// B_HeldObjectSocket_C B_HeldObjectSocket.Default__B_HeldObjectSocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_HeldObjectSocket_C* AB_HeldObjectSocket_C::GetDefaultObj()
{
	static class AB_HeldObjectSocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_HeldObjectSocket_C*>(AB_HeldObjectSocket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ValidateHeldObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_HeldObject_Parent_C*      HeldObject_Input                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_HeldObject_Parent_C*      HeldObject_Output                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObjectSocket_C::ValidateHeldObject(class AB_HeldObject_Parent_C* HeldObject_Input, class AB_HeldObject_Parent_C** HeldObject_Output, bool* IsValid, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "ValidateHeldObject");

	Params::AB_HeldObjectSocket_C_ValidateHeldObject_Params Parms{};

	Parms.HeldObject_Input = HeldObject_Input;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HeldObject_Output != nullptr)
		*HeldObject_Output = Parms.HeldObject_Output;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnRep_SocketIsFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObjectSocket_C::OnRep_SocketIsFilled(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "OnRep_SocketIsFilled");

	Params::AB_HeldObjectSocket_C_OnRep_SocketIsFilled_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_HeldObjectSocket_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnHitHeldObject
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_HeldObjectSocket_C::OnHitHeldObject(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "OnHitHeldObject");

	Params::AB_HeldObjectSocket_C_OnHitHeldObject_Params Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_HeldObjectSocket_C::EventOnSocketFilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "EventOnSocketFilled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketEmptied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_HeldObjectSocket_C::EventOnSocketEmptied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "EventOnSocketEmptied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ExecuteUbergraph_B_HeldObjectSocket
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_SelfActor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_NormalImpulse                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AB_HeldObject_Parent_C*      K2Node_DynamicCast_AsB_Held_Object_Parent                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_HeldObject_Parent_C*      CallFunc_ValidateHeldObject_HeldObject_Output                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidateHeldObject_IsValid                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObjectSocket_C::ExecuteUbergraph_B_HeldObjectSocket(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, class AB_HeldObject_Parent_C* K2Node_DynamicCast_AsB_Held_Object_Parent, bool K2Node_DynamicCast_bSuccess, class AB_HeldObject_Parent_C* CallFunc_ValidateHeldObject_HeldObject_Output, bool CallFunc_ValidateHeldObject_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeldObjectSocket_C", "ExecuteUbergraph_B_HeldObjectSocket");

	Params::AB_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_SelfActor = K2Node_CustomEvent_SelfActor;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_CustomEvent_NormalImpulse = K2Node_CustomEvent_NormalImpulse;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.K2Node_DynamicCast_AsB_Held_Object_Parent = K2Node_DynamicCast_AsB_Held_Object_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ValidateHeldObject_HeldObject_Output = CallFunc_ValidateHeldObject_HeldObject_Output;
	Parms.CallFunc_ValidateHeldObject_IsValid = CallFunc_ValidateHeldObject_IsValid;

	UObject::ProcessEvent(Func, &Parms);

}

}


