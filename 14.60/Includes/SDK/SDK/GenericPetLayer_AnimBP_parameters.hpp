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
// Function GenericPetLayer_AnimBP.GenericPetLayer_AnimBP_C.PetFullOverrideLayer
struct UGenericPetLayer_AnimBP_C_PetFullOverrideLayer_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PetFullOverrideLayer;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function GenericPetLayer_AnimBP.GenericPetLayer_AnimBP_C.PetSkeletalControlLayer
struct UGenericPetLayer_AnimBP_C_PetSkeletalControlLayer_Params
{
public:
	struct FPoseLink                             Pose;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        LookAtOverrideInput;                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAtTargetLocationInput;                         // 0x14(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LegIKAlphaOverride;                                // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HandIKAlphaOverride;                               // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             PetSkeletalControlLayer;                           // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GenericPetLayer_AnimBP.GenericPetLayer_AnimBP_C.AnimGraph
struct UGenericPetLayer_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GenericPetLayer_AnimBP.GenericPetLayer_AnimBP_C.ExecuteUbergraph_GenericPetLayer_AnimBP
struct UGenericPetLayer_AnimBP_C_ExecuteUbergraph_GenericPetLayer_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


