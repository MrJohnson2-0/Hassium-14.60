#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C0 (0x5C0 - 0x200)
// Class VotingFramework.VoteBroadcasterComponent
class UVoteBroadcasterComponent : public UMeshNetworkComponent
{
public:
	TArray<struct FVoteSessionSettings>          VoteSessionSettingsList;                           // 0x200(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVoteSessionRuntimeArray              VoteSessionRuntimeList;                            // 0x210(0x120)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FVoteRuntimeArray                     VoteRuntimeList;                                   // 0x330(0x120)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FVoteSelectionResultsArray            VoteResultsList;                                   // 0x450(0x120)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap;                              // 0x570(0x50)(Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVoteBroadcasterComponent* GetDefaultObj();

	void VoteStart(class FName VoteSessionId, class FName VoteId);
	void VoteSetup(class FName VoteSessionId, class FName VoteId);
	void VoteSessionShutdown(class FName VoteSessionId);
	void VoteSessionSetup(class FName VoteSessionId, class FName StartingVoteId, enum class EVoteSessionNetworkType NetworkType);
	void VoteSessionComplete(class FName VoteSessionId);
	void VoteEnd(class FName VoteSessionId, class FName VoteId, class FName WinningVoteSelectionId);
	void ServerSubmitVotesAggregated(class FName VoteSessionId, class FName VoteId, class FName VoteSelectionId, int32 VoteDelta);
	void OnVoteCasted(struct FUniqueNetIdRepl& UserNetId, struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId);
};

// 0xA0 (0xD0 - 0x30)
// Class VotingFramework.VoteDispatchSubsystem
class UVoteDispatchSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_336C[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoteSelectionResults>         VotingResults;                                     // 0xC0(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVoteDispatchSubsystem* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class VotingFramework.VoteInitiationActor
class AVoteInitiationActor : public AInfo
{
public:
	uint8                                        Pad_336D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVoteBroadcasterComponent*             VoteBroadcasterComponent;                          // 0x228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AVoteInitiationActor* GetDefaultObj();

};

// 0xE0 (0x190 - 0xB0)
// Class VotingFramework.VoteListenerComponent
class UVoteListenerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnVoteSessionSetupEvent;                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteSessionVotingEvent;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteSetupEvent;                                  // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteStartEvent;                                  // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteChangeEvent;                                 // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteEndEvent;                                    // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteSessionCompleteEvent;                        // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteSessionShutdownEvent;                        // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequestedVoteSessionIds;                           // 0x130(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 RequestedVoteIds;                                  // 0x150(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 RequestedVoteSelectionIds;                         // 0x170(0x20)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVoteListenerComponent* GetDefaultObj();

	void OnVoteStart(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum class EVoteState VoteState);
	void OnVoteSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum class EVoteState VoteState);
	void OnVoteSessionVoting(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum class EVoteSessionState SessionState);
	void OnVoteSessionShutdown(struct FGameplayTag& VoteSessionId);
	void OnVoteSessionSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum class EVoteSessionNetworkType NetworkType, enum class EVoteSessionState SessionState);
	void OnVoteSessionComplete(struct FGameplayTag& VoteSessionId);
	void OnVoteEnd(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& WinningVoteSelectionId, enum class EVoteState VoteState);
	void OnVoteChange(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal);
};

// 0x78 (0x208 - 0x190)
// Class VotingFramework.VoteResponderComponent
class UVoteResponderComponent : public UVoteListenerComponent
{
public:
	TArray<struct FVoteSelection>                SupportedVoteSelections;                           // 0x190(0x10)(Edit, Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldLockVotingAfterCasted;                      // 0x1A0(0x1)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_338C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap;                              // 0x1A8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	class FName                                  ActiveVoteSessionId;                               // 0x1F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ActiveVoteId;                                      // 0x200(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVoteResponderComponent* GetDefaultObj();

	void ServerCastVoteSelection(struct FUniqueNetIdRepl& InUserId, struct FCastedVote& CastedVote);
	void CastManualVoteSelectionAtIndex(class APlayerState* InPlayerState, int32 SelectionIndex);
	void CastManualVoteSelection(class APlayerState* InPlayerState, struct FGameplayTag& VoteSelection);
	void CastDefaultVoteSelection(class APlayerState* InPlayerState);
};

}


