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
// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyAdditive
struct ICustomLocomotionLayerInterface_C_CustomLocomotionFullBodyAdditive_Params
{
public:
	struct FPoseLink                             InPoseFullBodyAdditive;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             CustomLocomotionFullBodyAdditive;                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionPreIKLayer
struct ICustomLocomotionLayerInterface_C_CustomLocomotionPreIKLayer_Params
{
public:
	struct FPoseLink                             InPosePreIK;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             CustomLocomotionPreIKLayer;                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyLayer
struct ICustomLocomotionLayerInterface_C_CustomLocomotionFullBodyLayer_Params
{
public:
	struct FPoseLink                             PassThroughCustomFullBody;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             CustomLocomotionFullBodyLayer;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

}
}


