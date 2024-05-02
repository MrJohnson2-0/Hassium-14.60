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
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemPreIK
struct UUncleBrollyLayerAnimBP_C_ItemPreIK_Params
{
public:
	struct FPoseLink                             InPose_PreIK;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemPreIK;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemFullBodyOverride
struct UUncleBrollyLayerAnimBP_C_ItemFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFullBodyOverride;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemAimOffset
struct UUncleBrollyLayerAnimBP_C_ItemAimOffset_Params
{
public:
	struct FPoseLink                             InPose_AimOffset;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        AimOffsetAlpha;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pitch;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             InPose_UpperLowerPreMeleeAO;                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemAimOffset;                                     // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemSkeletalControl
struct UUncleBrollyLayerAnimBP_C_ItemSkeletalControl_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemSkeletalControl;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x260 (0x260 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemUpperBody
struct UUncleBrollyLayerAnimBP_C_ItemUpperBody_Params
{
public:
	struct FPoseLink                             InPoseUpperBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x10(0x240)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemUpperBody;                                     // 0x250(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemFullBodySprint
struct UUncleBrollyLayerAnimBP_C_ItemFullBodySprint_Params
{
public:
	struct FPoseLink                             InPoseSprint;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFullBodySprint;                                // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemIdleAdditive
struct UUncleBrollyLayerAnimBP_C_ItemIdleAdditive_Params
{
public:
	struct FPoseLink                             InPoseIdleAdditive;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemIdleAdditive;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemCrouchTurningAdditive
struct UUncleBrollyLayerAnimBP_C_ItemCrouchTurningAdditive_Params
{
public:
	struct FPoseLink                             ItemCrouchTurningAdditive;                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemSlopeSliding
struct UUncleBrollyLayerAnimBP_C_ItemSlopeSliding_Params
{
public:
	struct FPoseLink                             ItemSlopeSliding;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemJumpUpAdditive
struct UUncleBrollyLayerAnimBP_C_ItemJumpUpAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpUpAdditive;                                // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemJumpLoopAdditive
struct UUncleBrollyLayerAnimBP_C_ItemJumpLoopAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpLoopAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemFallAdditive
struct UUncleBrollyLayerAnimBP_C_ItemFallAdditive_Params
{
public:
	struct FPoseLink                             ItemFallAdditive;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemFallLandAdditive
struct UUncleBrollyLayerAnimBP_C_ItemFallLandAdditive_Params
{
public:
	struct FPoseLink                             ItemFallLandAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemJetPackStartAdditive
struct UUncleBrollyLayerAnimBP_C_ItemJetPackStartAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemJetPackJumpAdditive
struct UUncleBrollyLayerAnimBP_C_ItemJetPackJumpAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackJumpAdditive;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemZipLineStartAdditive
struct UUncleBrollyLayerAnimBP_C_ItemZipLineStartAdditive_Params
{
public:
	struct FPoseLink                             ItemZipLineStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemFlyModeStartAdditive
struct UUncleBrollyLayerAnimBP_C_ItemFlyModeStartAdditive_Params
{
public:
	struct FPoseLink                             ItemFlyModeStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemFlyModeLoopAdditive
struct UUncleBrollyLayerAnimBP_C_ItemFlyModeLoopAdditive_Params
{
public:
	struct FPoseLink                             ItemFlyModeLoopAdditive;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemJogStartAdditive
struct UUncleBrollyLayerAnimBP_C_ItemJogStartAdditive_Params
{
public:
	struct FPoseLink                             InPoseJogStartAdditive;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemJogStartAdditive;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemJogStopAdditive
struct UUncleBrollyLayerAnimBP_C_ItemJogStopAdditive_Params
{
public:
	struct FPoseLink                             InPoseJogStopAdditive;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemJogStopAdditive;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemJogPrePivotAdditive
struct UUncleBrollyLayerAnimBP_C_ItemJogPrePivotAdditive_Params
{
public:
	struct FPoseLink                             InPosePrePivotAdditive;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemJogPrePivotAdditive;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemJogPostPivotAdditive
struct UUncleBrollyLayerAnimBP_C_ItemJogPostPivotAdditive_Params
{
public:
	struct FPoseLink                             InPosePostPivotAdditive;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemJogPostPivotAdditive;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemLowerBodyMovement
struct UUncleBrollyLayerAnimBP_C_ItemLowerBodyMovement_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyMovement;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyMovement;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemLowerBodyLeanAdditive
struct UUncleBrollyLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyLeanAdditive;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyLeanAdditive;                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemLowerBodyJogStart
struct UUncleBrollyLayerAnimBP_C_ItemLowerBodyJogStart_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyJogStart;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyJogStart;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemLowerBodyJogStop
struct UUncleBrollyLayerAnimBP_C_ItemLowerBodyJogStop_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyJogStop;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyJogStop;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemLowerBodyJogPrePivot
struct UUncleBrollyLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyJogPrePivot;                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyJogPrePivot;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemLowerBodyJogPostPivot
struct UUncleBrollyLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyJogPostPivot;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyJogPostPivot;                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemRelaxedEntry
struct UUncleBrollyLayerAnimBP_C_ItemRelaxedEntry_Params
{
public:
	struct FPoseLink                             InPoseRelaxedEntry;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemRelaxedEntry;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemSwimJumpStart
struct UUncleBrollyLayerAnimBP_C_ItemSwimJumpStart_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStart;                                 // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemSwimJumpStartLoop
struct UUncleBrollyLayerAnimBP_C_ItemSwimJumpStartLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStartLoop;                             // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemSwimJumpFallLoop
struct UUncleBrollyLayerAnimBP_C_ItemSwimJumpFallLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpFallLoop;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemSwimJumpSurfaceLoop
struct UUncleBrollyLayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceLoop;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ItemSwimJumpSurfaceEnd
struct UUncleBrollyLayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceEnd;                            // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.AnimGraph
struct UUncleBrollyLayerAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.BlueprintUpdateAnimation
struct UUncleBrollyLayerAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UncleBrollyLayerAnimBP.UncleBrollyLayerAnimBP_C.ExecuteUbergraph_UncleBrollyLayerAnimBP
struct UUncleBrollyLayerAnimBP_C_ExecuteUbergraph_UncleBrollyLayerAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


