#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C
// (Actor)

class UClass* AB_FloppingRabbit_Weap_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FloppingRabbit_Weap_Athena_C");

	return Clss;
}


// B_FloppingRabbit_Weap_Athena_C B_FloppingRabbit_Weap_Athena.Default__B_FloppingRabbit_Weap_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_FloppingRabbit_Weap_Athena_C* AB_FloppingRabbit_Weap_Athena_C::GetDefaultObj()
{
	static class AB_FloppingRabbit_Weap_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_FloppingRabbit_Weap_Athena_C*>(AB_FloppingRabbit_Weap_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.DetermineFishLootTierNameAndSetLootForSpawner
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsExplosion                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortFishingInterface>K2Node_DynamicCast_AsFort_Fishing_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_DetermineFishLootTierNameAndSetLootForSpawner_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AB_FloppingRabbit_Weap_Athena_C::DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion, TScriptInterface<class IFortFishingInterface> K2Node_DynamicCast_AsFort_Fishing_Interface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_DetermineFishLootTierNameAndSetLootForSpawner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "DetermineFishLootTierNameAndSetLootForSpawner");

	Params::AB_FloppingRabbit_Weap_Athena_C_DetermineFishLootTierNameAndSetLootForSpawner_Params Parms{};

	Parms.bIsExplosion = bIsExplosion;
	Parms.K2Node_DynamicCast_AsFort_Fishing_Interface = K2Node_DynamicCast_AsFort_Fishing_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DetermineFishLootTierNameAndSetLootForSpawner_ReturnValue = CallFunc_DetermineFishLootTierNameAndSetLootForSpawner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_OneHandGrip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnRep_OneHandGrip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnRep_OneHandGrip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_HideBobber
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnRep_HideBobber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnRep_HideBobber");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ForceKillFishing
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::ForceKillFishing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ForceKillFishing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnTetherDetached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnTetherDetached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnTetherDetached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ExecuteUbergraph_B_FloppingRabbit_Weap_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Athena_FloppingRabbit_Wire_C*K2Node_DynamicCast_AsB_Athena_Flopping_Rabbit_Wire               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_FloppingRabbit_Weap_Athena_C::ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int32 EntryPoint, class AB_Athena_FloppingRabbit_Wire_C* K2Node_DynamicCast_AsB_Athena_Flopping_Rabbit_Wire, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ExecuteUbergraph_B_FloppingRabbit_Weap_Athena");

	Params::AB_FloppingRabbit_Weap_Athena_C_ExecuteUbergraph_B_FloppingRabbit_Weap_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsB_Athena_Flopping_Rabbit_Wire = K2Node_DynamicCast_AsB_Athena_Flopping_Rabbit_Wire;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


