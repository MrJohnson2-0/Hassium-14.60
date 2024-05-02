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

// 0x10 (0x10 - 0x0)
// Function M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C.AnimGraph
struct UM_MED_HighTower_Tapas_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C.ExecuteUbergraph_M_MED_HighTower_Tapas_AnimBP
struct UM_MED_HighTower_Tapas_AnimBP_C_ExecuteUbergraph_M_MED_HighTower_Tapas_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckForBackbling_bIsWearingBackbling;    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckForBackbling_bIsBackblingLong;       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1500[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


