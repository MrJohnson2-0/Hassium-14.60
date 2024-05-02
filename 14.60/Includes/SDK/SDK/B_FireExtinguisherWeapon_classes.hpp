#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB7 (0x12A0 - 0x11E9)
// BlueprintGeneratedClass B_FireExtinguisherWeapon.B_FireExtinguisherWeapon_C
class AB_FireExtinguisherWeapon_C : public AB_Ranged_Generic_Athena_C
{
public:
	uint8                                        Pad_6E07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABGA_FireExtinguisher_Pickup_C*        AttachedBGAActor;                                  // 0x11F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachSocket;                                      // 0x1200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E08[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachedBGARelativeTransform;                      // 0x1210(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableAmmoMod;                                     // 0x1240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        IsShootableWhileHeld;                              // 0x1248(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuid                                 InventoryGUID;                                     // 0x1268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           WeaponReference;                                   // 0x1278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryInterface;                                // 0x1280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowHUDKeyActions;                                 // 0x1290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AttachedBGAScale;                                  // 0x1294(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_FireExtinguisherWeapon_C* GetDefaultObj();

	void OnRep_AttachedBGAActor();
	void ReceiveBeginPlay();
	void BGADestroyedWhileHeld();
	void BindHolsterEvents();
	void UnbindHolsterEvents();
	void K2_OnUnEquip();
	void OnHolstered();
	void ReplicateOnHolstered();
	void UpdateAndAttachBGA();
	void OnWeaponAttached();
	void ReplicateOnUnholstered();
	void HUDKeyAction_Targeting(bool IsTargeting);
	void OnUnholstered();
	void ExecuteUbergraph_B_FireExtinguisherWeapon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class ABuildingGameplayActor* CallFunc_SpawnBuildingGameplayActor_ReturnValue, class ABGA_FireExtinguisher_Pickup_C* K2Node_DynamicCast_AsBGA_Fire_Extinguisher_Pickup, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IFortInventoryOwnerInterface> K2Node_DynamicCast_AsFort_Inventory_Owner_Interface, bool K2Node_DynamicCast_bSuccess_3, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> K2Node_DynamicCast_AsFort_Inventory_Owner_Interface_1, bool K2Node_DynamicCast_bSuccess_4, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_1, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_IsTargeting, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_2, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_3, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_4, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_5, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_2, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetInstigator_ReturnValue_3, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_6);
};

}


