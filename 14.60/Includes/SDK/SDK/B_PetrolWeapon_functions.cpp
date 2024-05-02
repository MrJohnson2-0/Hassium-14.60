#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_PetrolWeapon.B_PetrolWeapon_C
// (Actor)

class UClass* AB_PetrolWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_PetrolWeapon_C");

	return Clss;
}


// B_PetrolWeapon_C B_PetrolWeapon.Default__B_PetrolWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_PetrolWeapon_C* AB_PetrolWeapon_C::GetDefaultObj()
{
	static class AB_PetrolWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_PetrolWeapon_C*>(AB_PetrolWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnRep_AttachedBGAActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::OnRep_AttachedBGAActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnRep_AttachedBGAActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnSpawnProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         SpawnProjectile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_PetrolWeapon_C::OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnSpawnProjectile");

	Params::AB_PetrolWeapon_C_OnSpawnProjectile_Params Parms{};

	Parms.SpawnProjectile = SpawnProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_PetrolWeapon_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnPlayWeaponFireFX");

	Params::AB_PetrolWeapon_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.UpdateAndAttachBGA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::UpdateAndAttachBGA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "UpdateAndAttachBGA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnEquip(Copy)
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::OnEquip_Copy_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnEquip(Copy)");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::OnStopWeaponFireFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnStopWeaponFireFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnEquip(Copy)
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::OnUnEquip_Copy_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnUnEquip(Copy)");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.HUDKeyAction_Targeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTargeting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_PetrolWeapon_C::HUDKeyAction_Targeting(bool IsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "HUDKeyAction_Targeting");

	Params::AB_PetrolWeapon_C_HUDKeyAction_Targeting_Params Parms{};

	Parms.IsTargeting = IsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnHolstered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::OnHolstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnHolstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnholstered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::OnUnholstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "OnUnholstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.BindHolsterEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::BindHolsterEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "BindHolsterEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.UnbindHolsterEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::UnbindHolsterEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "UnbindHolsterEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.BGADestroyedWhileHeld
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::BGADestroyedWhileHeld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "BGADestroyedWhileHeld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnUnholstered
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::ReplicateOnUnholstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "ReplicateOnUnholstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnHolstered
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PetrolWeapon_C::ReplicateOnHolstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "ReplicateOnHolstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_PetrolWeapon.B_PetrolWeapon_C.ExecuteUbergraph_B_PetrolWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortProjectileBase*         K2Node_Event_SpawnProjectile                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddPreviousSource_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorRelativeTransform_SweepHitResult             (IsPlainOldData, NoDestructor, ContainsInstancedReference)
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
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_PetrolWeapon_C::ExecuteUbergraph_B_PetrolWeapon(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, class AFortProjectileBase* K2Node_Event_SpawnProjectile, int32 CallFunc_AddPreviousSource_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_1, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_IsTargeting, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_2, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_3, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_4, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_5, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_2, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_PetrolWeapon_C", "ExecuteUbergraph_B_PetrolWeapon");

	Params::AB_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.K2Node_Event_SpawnProjectile = K2Node_Event_SpawnProjectile;
	Parms.CallFunc_AddPreviousSource_ReturnValue = CallFunc_AddPreviousSource_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_K2_SetActorRelativeTransform_SweepHitResult = CallFunc_K2_SetActorRelativeTransform_SweepHitResult;
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
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


