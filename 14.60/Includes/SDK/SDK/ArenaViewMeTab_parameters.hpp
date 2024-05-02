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

// 0x1A8 (0x1A8 - 0x0)
// Function ArenaViewMeTab.ArenaViewMeTab_C.Colorize
struct UArenaViewMeTab_C_Colorize_Params
{
public:
	struct FFortTournamentDisplayInfo            ColorInfo;                                         // 0x0(0x1A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1B9 (0x1B9 - 0x0)
// Function ArenaViewMeTab.ArenaViewMeTab_C.ExecuteUbergraph_ArenaViewMeTab
struct UArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTournamentDisplayInfo            K2Node_CustomEvent_ColorInfo;                      // 0x8(0x1A8)(None)
	class UArenaPersonalView_C*                  K2Node_DynamicCast_AsArena_Personal_View;          // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


