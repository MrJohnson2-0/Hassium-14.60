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
// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorBounds
struct IBPi_CreativeMoveToolOverrides_C_GetCreativeActorBounds_Params
{
public:
	bool                                         Override_Bounds;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6563[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Bounds;                                            // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorOrigin
struct IBPi_CreativeMoveToolOverrides_C_GetCreativeActorOrigin_Params
{
public:
	bool                                         Override;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6564[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Center;                                            // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


