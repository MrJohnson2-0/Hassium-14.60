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
// Function ArenaPersonalView.ArenaPersonalView_C.Colorize
struct UArenaPersonalView_C_Colorize_Params
{
public:
	struct FFortTournamentDisplayInfo            Color_Info;                                        // 0x0(0x1A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1C0 (0x1C0 - 0x0)
// Function ArenaPersonalView.ArenaPersonalView_C.ExecuteUbergraph_ArenaPersonalView
struct UArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTournamentDisplayInfo            K2Node_CustomEvent_Color_Info;                     // 0x8(0x1A8)(None)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x1B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


