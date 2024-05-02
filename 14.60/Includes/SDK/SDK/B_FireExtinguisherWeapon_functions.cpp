#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C
// (Actor)

class UClass* AB_FireExtinguisherWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FireExtinguisherWeapon_C");

	return Clss;
}


// B_FireExtinguisherWeapon_C B_FireExtinguisherWeapon.Default__B_FireExtinguisherWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_FireExtinguisherWeapon_C* AB_FireExtinguisherWeapon_C::GetDefaultObj()
{
	static class AB_FireExtinguisherWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_FireExtinguisherWeapon_C*>(AB_FireExtinguisherWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.OnRep_AttachedBGAActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::OnRep_AttachedBGAActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "OnRep_AttachedBGAActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.BGADestroyedWhileHeld
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::BGADestroyedWhileHeld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "BGADestroyedWhileHeld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.BindHolsterEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::BindHolsterEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "BindHolsterEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.UnbindHolsterEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::UnbindHolsterEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "UnbindHolsterEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.OnHolstered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::OnHolstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "OnHolstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.ReplicateOnHolstered
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::ReplicateOnHolstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "ReplicateOnHolstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.UpdateAndAttachBGA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::UpdateAndAttachBGA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "UpdateAndAttachBGA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.ReplicateOnUnholstered
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::ReplicateOnUnholstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "ReplicateOnUnholstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.HUDKeyAction_Targeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTargeting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_FireExtinguisherWeapon_C::HUDKeyAction_Targeting(bool IsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "HUDKeyAction_Targeting");

	Params::AB_FireExtinguisherWeapon_C_HUDKeyAction_Targeting_Params Parms{};

	Parms.IsTargeting = IsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.OnUnholstered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireExtinguisherWeapon_C::OnUnholstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "OnUnholstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C.ExecuteUbergraph_B_FireExtinguisherWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetActorRelativeTransform_SweepHitResult             (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingGameplayActor*      CallFunc_SpawnBuildingGameplayActor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_FireExtinguisher_Pickup_C*K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>K2Node_DynamicCast_AsFort_Inventory_Owner_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortInventoryOwnerInterface>K2Node_DynamicCast_AsFort_Inventory_Owner_Interface_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetInventoryGUID_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInventoryGUID_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility                   (NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_1                 (NoDestructor)
// TArray<struct FWeaponHudKeyActionVisibility>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsTargeting                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_2                 (NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_3                 (NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_4                 (NoDestructor)
// TArray<struct FWeaponHudKeyActionVisibility>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_5                 (NoDestructor)
// TArray<struct FWeaponHudKeyActionVisibility>K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_FireExtinguisherWeapon_C::ExecuteUbergraph_B_FireExtinguisherWeapon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class ABuildingGameplayActor* CallFunc_SpawnBuildingGameplayActor_ReturnValue, class ABGA_FireExtinguisher_Pickup_C* K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IFortInventoryOwnerInterface> K2Node_DynamicCast_AsFort_Inventory_Owner_Interface, bool K2Node_DynamicCast_bSuccess_3, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> K2Node_DynamicCast_AsFort_Inventory_Owner_Interface_1, bool K2Node_DynamicCast_bSuccess_4, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_1, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_IsTargeting, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_2, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_3, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_4, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_5, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_2, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetInstigator_ReturnValue_3, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FireExtinguisherWeapon_C", "ExecuteUbergraph_B_FireExtinguisherWeapon");

	Params::AB_FireExtinguisherWeapon_C_ExecuteUbergraph_B_FireExtinguisherWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.CallFunc_K2_SetActorRelativeTransform_SweepHitResult = CallFunc_K2_SetActorRelativeTransform_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_SpawnBuildingGameplayActor_ReturnValue = CallFunc_SpawnBuildingGameplayActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup = K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsFort_Inventory_Owner_Interface = K2Node_DynamicCast_AsFort_Inventory_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Inventory_Owner_Interface_1 = K2Node_DynamicCast_AsFort_Inventory_Owner_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetInventoryGUID_ReturnValue = CallFunc_GetInventoryGUID_ReturnValue;
	Parms.CallFunc_GetInventoryGUID_ReturnValue_1 = CallFunc_GetInventoryGUID_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility = K2Node_MakeStruct_WeaponHudKeyActionVisibility;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_1 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_IsTargeting = K2Node_CustomEvent_IsTargeting;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_2 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_2;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_3 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_3;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_4 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_5 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetInstigator_ReturnValue_2 = CallFunc_GetInstigator_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetInstigator_ReturnValue_3 = CallFunc_GetInstigator_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


