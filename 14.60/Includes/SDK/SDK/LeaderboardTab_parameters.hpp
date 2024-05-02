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
// Function LeaderboardTab.LeaderboardTab_C.Colorize
struct ULeaderboardTab_C_Colorize_Params
{
public:
	struct FFortTournamentDisplayInfo            Color_Info;                                        // 0x0(0x1A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function LeaderboardTab.LeaderboardTab_C.Set Event
struct ULeaderboardTab_C_Set_Event_Params
{
public:
	class FString                                EventId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                EventWindowId;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1F9 (0x1F9 - 0x0)
// Function LeaderboardTab.LeaderboardTab_C.ExecuteUbergraph_LeaderboardTab
struct ULeaderboardTab_C_ExecuteUbergraph_LeaderboardTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULeaderboardListViewWrapper_C*         K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_EventId;                        // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_EventWindowId;                  // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortTournamentDisplayInfo            K2Node_CustomEvent_Color_Info;                     // 0x38(0x1A8)(ConstParm)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x1E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULeaderboardListViewWrapper_C*         K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper_1; // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


