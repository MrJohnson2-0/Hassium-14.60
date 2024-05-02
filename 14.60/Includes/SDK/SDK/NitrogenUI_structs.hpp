#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENitrogenFareObjectiveDisplayState : uint8
{
	Default                        = 0,
	Success                        = 1,
	Failure                        = 2,
	ENitrogenFareObjectiveDisplayState_MAX = 3,
};

enum class ENitrogenObjectiveWidgetState : uint8
{
	ENitrogenObjectiveWidgetState_Hidden = 0,
	ENitrogenObjectiveWidgetState_FindFare = 1,
	ENitrogenObjectiveWidgetState_FindTaxi = 2,
	ENitrogenObjectiveWidgetState_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct NitrogenUI.NitrogenLeaderboardData
struct FNitrogenLeaderboardData
{
public:
	class FText                                  TeamName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        TeamScore;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamPlacement;                                     // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnemyTeam;                                        // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11DA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


