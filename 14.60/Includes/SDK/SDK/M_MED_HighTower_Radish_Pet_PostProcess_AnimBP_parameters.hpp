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

// 0x20 (0x20 - 0x0)
// Function M_MED_HighTower_Radish_Pet_PostProcess_AnimBP.M_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C.AnimGraph
struct UM_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function M_MED_HighTower_Radish_Pet_PostProcess_AnimBP.M_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C.BlueprintUpdateAnimation
struct UM_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function M_MED_HighTower_Radish_Pet_PostProcess_AnimBP.M_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C.ExecuteUbergraph_M_MED_HighTower_Radish_Pet_PostProcess_AnimBP
struct UM_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C_ExecuteUbergraph_M_MED_HighTower_Radish_Pet_PostProcess_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


