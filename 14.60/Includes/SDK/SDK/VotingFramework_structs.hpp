#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVoteSessionState : uint8
{
	None                           = 0,
	Setup                          = 1,
	Voting                         = 2,
	Complete                       = 3,
	Shutdown                       = 4,
	EVoteSessionState_MAX          = 5,
};

enum class EVoteSessionNetworkType : uint8
{
	NotDetermined                  = 0,
	DedicatedServer                = 1,
	MeshNetwork                    = 2,
	EVoteSessionNetworkType_MAX    = 3,
};

enum class EVoteState : uint8
{
	None                           = 0,
	Setup                          = 1,
	Active                         = 2,
	Completed                      = 3,
	EVoteState_MAX                 = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x30 - 0xC)
// ScriptStruct VotingFramework.VoteSessionRuntime
struct FVoteSessionRuntime : public FFastArraySerializerItem
{
public:
	class FName                                  VoteSessionId;                                     // 0xC(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVoteSessionNetworkType           NetworkType;                                       // 0x14(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVoteSessionState                 VoteSessionState;                                  // 0x15(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_338E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentVoteId;                                     // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorld*                                WorldRef;                                          // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVoteSessionState                 Shadow_VoteSessionState;                           // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_338F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x120 - 0x108)
// ScriptStruct VotingFramework.VoteSessionRuntimeArray
struct FVoteSessionRuntimeArray : public FFastArraySerializer
{
public:
	class UWorld*                                WorldRef;                                          // 0x108(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVoteSessionRuntime>           VotingSessions;                                    // 0x110(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x44 (0x50 - 0xC)
// ScriptStruct VotingFramework.VoteRuntime
struct FVoteRuntime : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3390[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                WorldRef;                                          // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteSessionId;                                     // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  VoteId;                                            // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          VoteSelectionIds;                                  // 0x28(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVoteState                        VoteState;                                         // 0x38(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3391[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VoteSelectionWinningResult;                        // 0x3C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  Shadow_VoteSelectionWinningResult;                 // 0x44(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVoteState                        Shadow_VoteState;                                  // 0x4C(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3392[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x120 - 0x108)
// ScriptStruct VotingFramework.VoteRuntimeArray
struct FVoteRuntimeArray : public FFastArraySerializer
{
public:
	class UWorld*                                WorldRef;                                          // 0x108(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVoteRuntime>                  VotingResults;                                     // 0x110(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x34 (0x40 - 0xC)
// ScriptStruct VotingFramework.VoteSelectionResults
struct FVoteSelectionResults : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3393[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                WorldRef;                                          // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteSessionId;                                     // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  VoteId;                                            // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  VoteSelectionId;                                   // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ServerVoteTotal;                                   // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AllServersVoteTotal;                               // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Shadow_ServerVoteTotal;                            // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Shadow_AllServersVoteTotal;                        // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct VotingFramework.VoteSelectionResultsArray
struct FVoteSelectionResultsArray : public FFastArraySerializer
{
public:
	class UWorld*                                WorldRef;                                          // 0x108(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVoteSelectionResults>         VoteSelectionResults;                              // 0x110(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct VotingFramework.VoteSelectionSettings
struct FVoteSelectionSettings
{
public:
	struct FGameplayTag                          VoteSelectionId;                                   // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  VoteSelectionText;                                 // 0x8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct VotingFramework.VoteSettings
struct FVoteSettings
{
public:
	struct FGameplayTag                          VoteId;                                            // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocksSelection;                                   // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3394[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  VoteText;                                          // 0x10(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FVoteSelectionSettings>        VoteSelections;                                    // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct VotingFramework.VoteSessionSettings
struct FVoteSessionSettings
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  VoteSessionText;                                   // 0x8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FVoteSettings>                 VoteSettingsList;                                  // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoteSessionNetworkType           NetworkType;                                       // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3395[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VotingFramework.VoteSelection
struct FVoteSelection
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteId;                                            // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteSelectionId;                                   // 0x10(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VotingFramework.CastedVote
struct FCastedVote
{
public:
	class FName                                  VoteSessionId;                                     // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteId;                                            // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteSelectionId;                                   // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


