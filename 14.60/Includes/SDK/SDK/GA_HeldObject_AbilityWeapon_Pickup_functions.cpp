#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C
// (None)

class UClass* UGA_HeldObject_AbilityWeapon_Pickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HeldObject_AbilityWeapon_Pickup_C");

	return Clss;
}


// GA_HeldObject_AbilityWeapon_Pickup_C GA_HeldObject_AbilityWeapon_Pickup.Default__GA_HeldObject_AbilityWeapon_Pickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HeldObject_AbilityWeapon_Pickup_C* UGA_HeldObject_AbilityWeapon_Pickup_C::GetDefaultObj()
{
	static class UGA_HeldObject_AbilityWeapon_Pickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HeldObject_AbilityWeapon_Pickup_C*>(UGA_HeldObject_AbilityWeapon_Pickup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C.OnCancelled_064121774728AAB46B8294B952EF27BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HeldObject_AbilityWeapon_Pickup_C::OnCancelled_064121774728AAB46B8294B952EF27BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_AbilityWeapon_Pickup_C", "OnCancelled_064121774728AAB46B8294B952EF27BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C.OnInterrupted_064121774728AAB46B8294B952EF27BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HeldObject_AbilityWeapon_Pickup_C::OnInterrupted_064121774728AAB46B8294B952EF27BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_AbilityWeapon_Pickup_C", "OnInterrupted_064121774728AAB46B8294B952EF27BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C.OnBlendOut_064121774728AAB46B8294B952EF27BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HeldObject_AbilityWeapon_Pickup_C::OnBlendOut_064121774728AAB46B8294B952EF27BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_AbilityWeapon_Pickup_C", "OnBlendOut_064121774728AAB46B8294B952EF27BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C.OnCompleted_064121774728AAB46B8294B952EF27BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HeldObject_AbilityWeapon_Pickup_C::OnCompleted_064121774728AAB46B8294B952EF27BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_AbilityWeapon_Pickup_C", "OnCompleted_064121774728AAB46B8294B952EF27BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HeldObject_AbilityWeapon_Pickup_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_AbilityWeapon_Pickup_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C.ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Pickup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_HeldObject_AbilityWeapon_Pickup_C::ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Pickup(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_AbilityWeapon_Pickup_C", "ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Pickup");

	Params::UGA_HeldObject_AbilityWeapon_Pickup_C_ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Pickup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


