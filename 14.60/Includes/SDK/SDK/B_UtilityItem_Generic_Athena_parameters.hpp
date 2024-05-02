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

// 0x1 (0x1 - 0x0)
// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Targeting
struct AB_UtilityItem_Generic_Athena_C_ThrowConsumableHudActionKey_Targeting_Params
{
public:
	bool                                         Targeting;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Visible
struct AB_UtilityItem_Generic_Athena_C_ThrowConsumableHudActionKey_Visible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ExecuteUbergraph_B_UtilityItem_Generic_Athena
struct AB_UtilityItem_Generic_Athena_C_ExecuteUbergraph_B_UtilityItem_Generic_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility;    // 0x4(0x8)(NoDestructor)
	bool                                         K2Node_CustomEvent_Targeting;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Visible;                        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_607A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility_1;  // 0x10(0x8)(NoDestructor)
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility_2;  // 0x18(0x8)(NoDestructor)
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility_3;  // 0x20(0x8)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility> K2Node_MakeArray_Array;                            // 0x28(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility_4;  // 0x38(0x8)(NoDestructor)
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility_5;  // 0x40(0x8)(NoDestructor)
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility_6;  // 0x48(0x8)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility> K2Node_MakeArray_Array_1;                          // 0x50(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility_7;  // 0x60(0x8)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility> K2Node_MakeArray_Array_2;                          // 0x68(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility         K2Node_MakeStruct_WeaponHudKeyActionVisibility_8;  // 0x78(0x8)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility> K2Node_MakeArray_Array_3;                          // 0x80(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
};

}
}


