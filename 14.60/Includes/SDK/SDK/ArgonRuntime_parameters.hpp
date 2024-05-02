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
// Function ArgonRuntime.ArgonPlayerComponent.OnRacePhaseChanged
struct UArgonPlayerComponent_OnRacePhaseChanged_Params
{
public:
	enum class EArgonRacePhase                   NewRacePhase;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ArgonRuntime.ArgonTicketComponent.IsNearToPlayer
struct UArgonTicketComponent_IsNearToPlayer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ArgonRuntime.ArgonTraversePoint.ClientSpawnMarkerActor
struct AArgonTraversePoint_ClientSpawnMarkerActor_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.OnEndTraversePointTouched
struct AFortAthenaMutator_Argon_OnEndTraversePointTouched_Params
{
public:
	class AAthenaTraversePoint*                  PointActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerStateAthena*                TouchingPlayer;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.IsUsingRespawnAndSpectateSelectMutator
struct AFortAthenaMutator_Argon_IsUsingRespawnAndSpectateSelectMutator_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.HasTeamFinishedRace
struct AFortAthenaMutator_Argon_HasTeamFinishedRace_Params
{
public:
	uint8                                        Team;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.HasPlayerFinishedRace
struct AFortAthenaMutator_Argon_HasPlayerFinishedRace_Params
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5[0x7];                                        // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.HandlePlayerTeleportComplete
struct AFortAthenaMutator_Argon_HandlePlayerTeleportComplete_Params
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.GetTicketItemDefinition
struct AFortAthenaMutator_Argon_GetTicketItemDefinition_Params
{
public:
	class UFortWorldItemDefinition*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.GetRandomStartingLineEmotePlayRate
struct AFortAthenaMutator_Argon_GetRandomStartingLineEmotePlayRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.GetRaceTimeElapsed
struct AFortAthenaMutator_Argon_GetRaceTimeElapsed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.GetProgressBarUIInfo
struct AFortAthenaMutator_Argon_GetProgressBarUIInfo_Params
{
public:
	float                                        OutMyPercent;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                OutSquadmatePcts;                                  // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OutNumSquadTickets;                                // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArgonTeamProgressBarInfo>     OutEnemyProgressInfos;                             // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.GetPlayerTeamPlacement
struct AFortAthenaMutator_Argon_GetPlayerTeamPlacement_Params
{
public:
	class AFortPlayerStateAthena*                Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F[0x4];                                        // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsTeamHasAcquired
struct AFortAthenaMutator_Argon_GetNumberOfTicketsTeamHasAcquired_Params
{
public:
	uint8                                        Team;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsNeededToFinishRace
struct AFortAthenaMutator_Argon_GetNumberOfTicketsNeededToFinishRace_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.GetEndTraversePoint
struct AFortAthenaMutator_Argon_GetEndTraversePoint_Params
{
public:
	class AArgonTraversePoint*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ArgonRuntime.FortAthenaMutator_Argon.DidPlayerCrossFinishLine
struct AFortAthenaMutator_Argon_DidPlayerCrossFinishLine_Params
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


