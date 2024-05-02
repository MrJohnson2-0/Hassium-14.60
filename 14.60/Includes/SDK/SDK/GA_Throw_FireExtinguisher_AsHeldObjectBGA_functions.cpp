#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Throw_FireExtinguisher_AsHeldObjectBGA.GA_Throw_FireExtinguisher_AsHeldObjectBGA_C
// (None)

class UClass* UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Throw_FireExtinguisher_AsHeldObjectBGA_C");

	return Clss;
}


// GA_Throw_FireExtinguisher_AsHeldObjectBGA_C GA_Throw_FireExtinguisher_AsHeldObjectBGA.Default__GA_Throw_FireExtinguisher_AsHeldObjectBGA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C* UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C::GetDefaultObj()
{
	static class UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C*>(UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Throw_FireExtinguisher_AsHeldObjectBGA.GA_Throw_FireExtinguisher_AsHeldObjectBGA_C.UpdateDummyProjectileBGA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C::UpdateDummyProjectileBGA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Throw_FireExtinguisher_AsHeldObjectBGA_C", "UpdateDummyProjectileBGA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Throw_FireExtinguisher_AsHeldObjectBGA.GA_Throw_FireExtinguisher_AsHeldObjectBGA_C.UpdateSpawnedBGA(ServerOnly)
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C::UpdateSpawnedBGA_ServerOnly_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Throw_FireExtinguisher_AsHeldObjectBGA_C", "UpdateSpawnedBGA(ServerOnly)");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Throw_FireExtinguisher_AsHeldObjectBGA.GA_Throw_FireExtinguisher_AsHeldObjectBGA_C.ExecuteUbergraph_GA_Throw_FireExtinguisher_AsHeldObjectBGA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_FireExtinguisher_Pickup_C*K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemEntryComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetInventoryGUID_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_TakeItemFromInventoryOwner_InventoryOwner_CastInput     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TakeItemFromInventoryOwner_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C::ExecuteUbergraph_GA_Throw_FireExtinguisher_AsHeldObjectBGA(int32 EntryPoint, class ABGA_FireExtinguisher_Pickup_C* K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup, bool K2Node_DynamicCast_bSuccess, class UFortItemEntryComponent* CallFunc_GetComponentByClass_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_TakeItemFromInventoryOwner_InventoryOwner_CastInput, bool CallFunc_TakeItemFromInventoryOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Throw_FireExtinguisher_AsHeldObjectBGA_C", "ExecuteUbergraph_GA_Throw_FireExtinguisher_AsHeldObjectBGA");

	Params::UGA_Throw_FireExtinguisher_AsHeldObjectBGA_C_ExecuteUbergraph_GA_Throw_FireExtinguisher_AsHeldObjectBGA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup = K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryGUID_ReturnValue = CallFunc_GetInventoryGUID_ReturnValue;
	Parms.CallFunc_TakeItemFromInventoryOwner_InventoryOwner_CastInput = CallFunc_TakeItemFromInventoryOwner_InventoryOwner_CastInput;
	Parms.CallFunc_TakeItemFromInventoryOwner_ReturnValue = CallFunc_TakeItemFromInventoryOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


