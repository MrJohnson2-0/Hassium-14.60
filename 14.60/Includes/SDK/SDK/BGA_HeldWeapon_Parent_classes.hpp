#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x998 - 0x980)
// BlueprintGeneratedClass BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C
class ABGA_HeldWeapon_Parent_C : public ABGA_HeldObject_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x980(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bHeldWeaponEquipped;                               // 0x988(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         bHeldWeaponVisiblePropagateToChildren;             // 0x989(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7819[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       HeldWeaponVisualComponent;                         // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABGA_HeldWeapon_Parent_C* GetDefaultObj();

	void SetHeldWeaponVisualComponent(class USceneComponent* HeldWeaponVisualComponent);
	void OnRep_bHeldWeaponEquipped(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HeldWeaponSetEquipped(bool bEquipped, bool CallFunc_HasAuthority_ReturnValue);
	void OnHeldWeaponEquipToggled(bool bEquipped);
	void ExecuteUbergraph_BGA_HeldWeapon_Parent(int32 EntryPoint, bool K2Node_CustomEvent_bEquipped);
};

}


