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

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenWidgetBase.HandleNitrogenGamePhaseChanged
struct UNitrogenWidgetBase_HandleNitrogenGamePhaseChanged_Params
{
public:
	enum class ENitrogenGamePhase                NewGamePhase;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenUI.NitrogenWidgetBase.BP_BindToMutator
struct UNitrogenWidgetBase_BP_BindToMutator_Params
{
public:
	class AFortAthenaMutator_Nitrogen*           Mutator;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenFareBonusWidget.OnEndFare
struct UNitrogenFareBonusWidget_OnEndFare_Params
{
public:
	bool                                         bFareCompleted;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function NitrogenUI.NitrogenFareBonusWidget.OnActiveBonusUpdated
struct UNitrogenFareBonusWidget_OnActiveBonusUpdated_Params
{
public:
	struct FNitrogenBonusStat                    BonusStat;                                         // 0x0(0x130)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x130(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAwardBonus;                                  // 0x134(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenFareInteractionWidget.UpdateTimerDisplay
struct UNitrogenFareInteractionWidget_UpdateTimerDisplay_Params
{
public:
	bool                                         bCanceled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NitrogenUI.NitrogenFareInteractionWidget.OnBeginInteraction
struct UNitrogenFareInteractionWidget_OnBeginInteraction_Params
{
public:
	struct FNitrogenFareInteractionData          FareInteractionData;                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareTimedDeliveryObjectiveState
struct UNitrogenFareMeterWidget_SetCurrentFareTimedDeliveryObjectiveState_Params
{
public:
	enum class ENitrogenFareObjectiveDisplayState DisplayState;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAnimation;                                    // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBonusObjectiveState
struct UNitrogenFareMeterWidget_SetCurrentFareBonusObjectiveState_Params
{
public:
	enum class ENitrogenFareObjectiveDisplayState DisplayState;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAnimation;                                    // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBaseRewardValue
struct UNitrogenFareMeterWidget_SetCurrentFareBaseRewardValue_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.OnFareBonusFinshed
struct UNitrogenFareMeterWidget_OnFareBonusFinshed_Params
{
public:
	bool                                         BonusCompleted;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.OnEndFare
struct UNitrogenFareMeterWidget_OnEndFare_Params
{
public:
	bool                                         bFareCompleted;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.OnBeginInteraction
struct UNitrogenFareMeterWidget_OnBeginInteraction_Params
{
public:
	struct FNitrogenFareInteractionData          FareInteractionData;                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.OnActiveBonusUpdated
struct UNitrogenFareMeterWidget_OnActiveBonusUpdated_Params
{
public:
	struct FNitrogenBonusStat                    BonusStat;                                         // 0x0(0x130)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x130(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAwardBonus;                                 // 0x134(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.FastDeliveryTimeUpdate
struct UNitrogenFareMeterWidget_FastDeliveryTimeUpdate_Params
{
public:
	float                                        RemainingTimeRatio;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenUI.NitrogenFareMeterWidget.BonusProgressUpdate
struct UNitrogenFareMeterWidget_BonusProgressUpdate_Params
{
public:
	float                                        BonusProgressRatio;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NitrogenUI.NitrogenLeaderboardWidget.UpdateLeaderboardUI
struct UNitrogenLeaderboardWidget_UpdateLeaderboardUI_Params
{
public:
	TArray<struct FNitrogenLeaderboardData>      LeaderboardInfo;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GoalScore;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenObjectiveWidget.UpdateWidgetState
struct UNitrogenObjectiveWidget_UpdateWidgetState_Params
{
public:
	enum class ENitrogenObjectiveWidgetState     NewObjectiveWidgetState;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenObjectiveWidget.SetShouldBeHidden
struct UNitrogenObjectiveWidget_SetShouldBeHidden_Params
{
public:
	bool                                         bInShouldBeHidden;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenObjectiveWidget.OnEndFare
struct UNitrogenObjectiveWidget_OnEndFare_Params
{
public:
	bool                                         bFareCompleted;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleEntered
struct UNitrogenObjectiveWidget_HandleVehicleEntered_Params
{
public:
	class AFortAthenaVehicle*                    NewVehicle;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoringUpdate
struct UNitrogenPlacementWidget_OnPlayerScoringUpdate_Params
{
public:
	int32                                        CurrentPlayerTeamScore;                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentPlayerTeamPlacement;                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GoalScore;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                SortedTeamScores;                                  // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoreChanged
struct UNitrogenPlacementWidget_OnPlayerScoreChanged_Params
{
public:
	int32                                        NewScore;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerPlacementChanged
struct UNitrogenPlacementWidget_OnPlayerPlacementChanged_Params
{
public:
	int32                                        NewPlacement;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OldPlacement;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerFareComplete
struct UNitrogenPlacementWidget_OnPlayerFareComplete_Params
{
public:
	int32                                        StarsGained;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenPlacementWidget.OnEndFare
struct UNitrogenPlacementWidget_OnEndFare_Params
{
public:
	bool                                         bFareCompleted;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenUI.NitrogenPlacementWidget.HandleScoreChanged
struct UNitrogenPlacementWidget_HandleScoreChanged_Params
{
public:
	int32                                        Score;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenScoreEventWidget.DisplayScoreEvent
struct UNitrogenScoreEventWidget_DisplayScoreEvent_Params
{
public:
	enum class ENitrogenScoreReason              ScoreReason;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenScoreEventWidget.DisplayLeadChangedEvent
struct UNitrogenScoreEventWidget_DisplayLeadChangedEvent_Params
{
public:
	bool                                         bInLead;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryTimeUpdate
struct UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryTimeUpdate_Params
{
public:
	float                                        TimePrecentage;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalObjectiveTime;                                // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryFailed
struct UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryFailed_Params
{
public:
	bool                                         bPlayAnimation;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnEndFare
struct UNitrogenSpeedyBonusTimerWidget_OnEndFare_Params
{
public:
	bool                                         bFareCompleted;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


