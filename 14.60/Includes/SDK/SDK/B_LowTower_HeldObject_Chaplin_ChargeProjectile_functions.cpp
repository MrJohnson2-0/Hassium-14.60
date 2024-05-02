#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_LowTower_HeldObject_Chaplin_ChargeProjectile.B_LowTower_HeldObject_Chaplin_ChargeProjectile_C
// (Actor)

class UClass* AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_LowTower_HeldObject_Chaplin_ChargeProjectile_C");

	return Clss;
}


// B_LowTower_HeldObject_Chaplin_ChargeProjectile_C B_LowTower_HeldObject_Chaplin_ChargeProjectile.Default__B_LowTower_HeldObject_Chaplin_ChargeProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C* AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C::GetDefaultObj()
{
	static class AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C*>(AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_LowTower_HeldObject_Chaplin_ChargeProjectile.B_LowTower_HeldObject_Chaplin_ChargeProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_LowTower_HeldObject_Chaplin_ChargeProjectile_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_LowTower_HeldObject_Chaplin_ChargeProjectile.B_LowTower_HeldObject_Chaplin_ChargeProjectile_C.ExecuteUbergraph_B_LowTower_HeldObject_Chaplin_ChargeProjectile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetMuzzleLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C::ExecuteUbergraph_B_LowTower_HeldObject_Chaplin_ChargeProjectile(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetMuzzleLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_LowTower_HeldObject_Chaplin_ChargeProjectile_C", "ExecuteUbergraph_B_LowTower_HeldObject_Chaplin_ChargeProjectile");

	Params::AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C_ExecuteUbergraph_B_LowTower_HeldObject_Chaplin_ChargeProjectile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMuzzleLocation_ReturnValue = CallFunc_GetMuzzleLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


