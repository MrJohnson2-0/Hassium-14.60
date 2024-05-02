#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x12B1 - 0x11E9)
// BlueprintGeneratedClass B_PetrolWeapon.B_PetrolWeapon_C
class AB_PetrolWeapon_C : public AB_Ranged_Generic_Athena_C
{
public:
	uint8                                        Pad_5617[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortSplatterSourceComponent*          FortSplatterSource;                                // 0x11F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableAmmoMod;                                     // 0x1200(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5618[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Petrol_Pickup_C*                  AttachedBGAActor;                                  // 0x1208(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachSocket;                                      // 0x1210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AttachedBGAScale;                                  // 0x1218(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5619[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachedBGARelativeTransform;                      // 0x1230(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryInterface;                                // 0x1260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGuid                                 InventoryGUID;                                     // 0x1270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_FuelLeaking;                                    // 0x1280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        IsShootableWhileHeld;                              // 0x1288(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortWeapon*                           WeaponReference;                                   // 0x12A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowHUDKeyActions;                                 // 0x12B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_PetrolWeapon_C* GetDefaultObj();

	void OnRep_AttachedBGAActor();
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnWeaponAttached();
	void UpdateAndAttachBGA();
	void OnEquip_Copy_();
	void OnStopWeaponFireFX();
	void OnUnEquip_Copy_();
	void K2_OnUnEquip();
	void ReceiveBeginPlay();
	void HUDKeyAction_Targeting(bool IsTargeting);
	void OnHolstered();
	void OnUnholstered();
	void BindHolsterEvents();
	void UnbindHolsterEvents();
	void BGADestroyedWhileHeld();
	void ReplicateOnUnholstered();
	void ReplicateOnHolstered();
	void ExecuteUbergraph_B_PetrolWeapon(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, class AFortProjectileBase* K2Node_Event_SpawnProjectile, int32 CallFunc_AddPreviousSource_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_1, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_IsTargeting, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_2, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_3, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_4, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_5, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_2, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


