#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C
// (Actor)

class UClass* AB_Shotgun_Charge_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Shotgun_Charge_Athena_C");

	return Clss;
}


// B_Shotgun_Charge_Athena_C B_Shotgun_Charge_Athena.Default__B_Shotgun_Charge_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Shotgun_Charge_Athena_C* AB_Shotgun_Charge_Athena_C::GetDefaultObj()
{
	static class AB_Shotgun_Charge_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Shotgun_Charge_Athena_C*>(AB_Shotgun_Charge_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Shotgun_Charge_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Charge_Athena_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnStartCharge
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Shotgun_Charge_Athena_C::OnStartCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Charge_Athena_C", "OnStartCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnReachedMaxCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Shotgun_Charge_Athena_C::OnReachedMaxCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Charge_Athena_C", "OnReachedMaxCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnEndCharge
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Shotgun_Charge_Athena_C::OnEndCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Charge_Athena_C", "OnEndCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.ChargeAudioVisualizer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Shotgun_Charge_Athena_C::ChargeAudioVisualizer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Charge_Athena_C", "ChargeAudioVisualizer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Shotgun_Charge_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Charge_Athena_C", "OnPlayWeaponFireFX");

	Params::AB_Shotgun_Charge_Athena_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.ExecuteUbergraph_B_Shotgun_Charge_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortWeaponChargeStateForFireFXCallFunc_GetWeaponChargeStateForFireFX_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void AB_Shotgun_Charge_Athena_C::ExecuteUbergraph_B_Shotgun_Charge_Athena(int32 EntryPoint, enum class EFortWeaponChargeStateForFireFX CallFunc_GetWeaponChargeStateForFireFX_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, uint8 CallFunc_GetActorTeam_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Shotgun_Charge_Athena_C", "ExecuteUbergraph_B_Shotgun_Charge_Athena");

	Params::AB_Shotgun_Charge_Athena_C_ExecuteUbergraph_B_Shotgun_Charge_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWeaponChargeStateForFireFX_ReturnValue = CallFunc_GetWeaponChargeStateForFireFX_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


