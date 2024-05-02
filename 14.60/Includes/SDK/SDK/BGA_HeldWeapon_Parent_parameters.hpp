#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.SetHeldWeaponVisualComponent
struct ABGA_HeldWeapon_Parent_C_SetHeldWeaponVisualComponent_Params
{
public:
	class USceneComponent*                       HeldWeaponVisualComponent;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.OnRep_bHeldWeaponEquipped
struct ABGA_HeldWeapon_Parent_C_OnRep_bHeldWeaponEquipped_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.HeldWeaponSetEquipped
struct ABGA_HeldWeapon_Parent_C_HeldWeaponSetEquipped_Params
{
public:
	bool                                         bEquipped;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.OnHeldWeaponEquipToggled
struct ABGA_HeldWeapon_Parent_C_OnHeldWeaponEquipToggled_Params
{
public:
	bool                                         bEquipped;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BGA_HeldWeapon_Parent.BGA_HeldWeapon_Parent_C.ExecuteUbergraph_BGA_HeldWeapon_Parent
struct ABGA_HeldWeapon_Parent_C_ExecuteUbergraph_BGA_HeldWeapon_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bEquipped;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


