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

// 0x750 (0x750 - 0x0)
// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius
struct AAOE_Commando_KeepOutExplosion_C_OnRep_Radius_Params
{
public:
	struct FSoundAttenuationSettings             CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings; // 0x0(0x3A0)(None)
	bool                                         CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue; // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x3A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoundAttenuationSettings             K2Node_MakeStruct_SoundAttenuationSettings;        // 0x3B0(0x3A0)(None)
};

// 0x4 (0x4 - 0x0)
// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info
struct AAOE_Commando_KeepOutExplosion_C_Send_Info_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion
struct AAOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Radius;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


