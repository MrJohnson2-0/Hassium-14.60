#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class CommonDialogueRuntime.ConversationNode
class UConversationNode : public UObject
{
public:
	class FString                                NodeName;                                          // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EvalWorldContextObj;                               // 0x38(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConversationNode*                     ParentNode;                                        // 0x40(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UConversationNode* GetDefaultObj();

	struct FLinearColor GetDebugParticipantColor(const struct FGameplayTag& ParticipantID);
};

// 0x0 (0x48 - 0x48)
// Class CommonDialogueRuntime.ConversationSubNode
class UConversationSubNode : public UConversationNode
{
public:

	static class UClass* StaticClass();
	static class UConversationSubNode* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class CommonDialogueRuntime.ConversationChoiceNode
class UConversationChoiceNode : public UConversationSubNode
{
public:
	class FText                                  DefaultChoiceDisplayText;                          // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConversationChoiceNode* GetDefaultObj();

	void EvaluateChoice(struct FConversationContext& Context, class FText* DisplayOption);
};

// 0x0 (0x28 - 0x28)
// Class CommonDialogueRuntime.ConversationContextHelpers
class UConversationContextHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConversationContextHelpers* GetDefaultObj();

	struct FConversationTaskResult PauseConversationAndSendClientChoices(struct FConversationContext& Context, struct FClientConversationMessage& Message);
	void MakeConversationParticipant(struct FConversationContext& Context, class AActor* ParticipantActor, const struct FGameplayTag& ParticipantTag);
	struct FConversationNodeHandle GetCurrentConversationNodeHandle(struct FConversationContext& Context);
	class AActor* GetConversationParticipantActor(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag);
	class UConversationParticipantComponent* GetConversationParticipant(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag);
	class UConversationInstance* GetConversationInstance(struct FConversationContext& Context);
	class UConversationParticipantComponent* FindConversationComponent(class AActor* Actor);
	struct FConversationTaskResult AdvanceConversationWithChoice(struct FConversationContext& Context, struct FConversationChoiceReference& Choice);
	struct FConversationTaskResult AdvanceConversation(struct FConversationContext& Context);
};

// 0xB0 (0xE0 - 0x30)
// Class CommonDialogueRuntime.ConversationDatabase
class UConversationDatabase : public UPrimaryDataAsset
{
public:
	TMap<struct FGameplayTag, struct FConversationEntryList> EntryMap;                                          // 0x30(0x50)(NativeAccessSpecifierPrivate)
	TMap<struct FGuid, class UConversationNode*> ReachableNodeMap;                                  // 0x80(0x50)(NativeAccessSpecifierPrivate)
	TArray<struct FCommonDialogueBankParticipant> Speakers;                                          // 0xD0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UConversationDatabase* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class CommonDialogueRuntime.ConversationNodeWithLinks
class UConversationNodeWithLinks : public UConversationNode
{
public:
	TArray<struct FGuid>                         OutputConnections;                                 // 0x48(0x10)(BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConversationNodeWithLinks* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class CommonDialogueRuntime.ConversationEntryPointNode
class UConversationEntryPointNode : public UConversationNodeWithLinks
{
public:
	struct FGameplayTag                          EntryTag;                                          // 0x58(0x8)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConversationEntryPointNode* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class CommonDialogueRuntime.ConversationInstance
class UConversationInstance : public UObject
{
public:
	struct FConversationParticipants             Participants;                                      // 0x28(0x10)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2B82[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FClientConversationOptionEntry> AllCurrentConversationChoices;                     // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FClientConversationOptionEntry> UserCurrentConversationChoices;                    // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2B83[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConversationInstance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonDialogueRuntime.ConversationLibrary
class UConversationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConversationLibrary* GetDefaultObj();

	class UConversationInstance* StartConversation(const struct FGameplayTag& ConversationEntryTag, class AActor* Instigator, const struct FGameplayTag& InstigatorTag, class AActor* Target, const struct FGameplayTag& TargetTag);
	class UConversationNode* GetConversationNode(struct FConversationNodeHandle& NodeHandle);
};

// 0xB8 (0x168 - 0xB0)
// Class CommonDialogueRuntime.ConversationParticipantComponent
class UConversationParticipantComponent : public UActorComponent
{
public:
	uint8                                        Pad_2B95[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UConversationInstance*                 Auth_CurrentConversation;                          // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UConversationInstance*>         Auth_Conversations;                                // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UConversationParticipantComponent* GetDefaultObj();

	void ServerAdvanceConversation(struct FConversationChoiceReference& InChoicePicked);
	void RequestServerAdvanceConversation(struct FConversationChoiceReference& InChoicePicked);
	class FText GetParticipantDisplayName();
	void ClientUpdateConversation(struct FClientConversationMessagePayload& Message);
	void ClientExecuteTaskAndSideEffects(const struct FConversationNodeHandle& Handle);
	void ClientConversationStarted();
	void ClientConversationEnded();
};

// 0xB0 (0xD8 - 0x28)
// Class CommonDialogueRuntime.ConversationRegistry
class UConversationRegistry : public UObject
{
public:
	TArray<class UConversationDatabase*>         HackBanks;                                         // 0x28(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FConversationEntryList> EntryMap;                                          // 0x38(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGuid, class UConversationNode*> ReachableNodeMap;                                  // 0x88(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UConversationRegistry* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class CommonDialogueRuntime.ConversationRequirementNode
class UConversationRequirementNode : public UConversationSubNode
{
public:

	static class UClass* StaticClass();
	static class UConversationRequirementNode* GetDefaultObj();

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext& Context);
};

// 0x0 (0x48 - 0x48)
// Class CommonDialogueRuntime.ConversationSideEffectNode
class UConversationSideEffectNode : public UConversationSubNode
{
public:

	static class UClass* StaticClass();
	static class UConversationSideEffectNode* GetDefaultObj();

	void ServerCauseSideEffect(struct FConversationContext& Context);
	void ClientCauseSideEffect(struct FConversationContext& Context);
};

// 0x18 (0x70 - 0x58)
// Class CommonDialogueRuntime.ConversationTaskNode
class UConversationTaskNode : public UConversationNodeWithLinks
{
public:
	TArray<class UConversationSubNode*>          SubNodes;                                          // 0x58(0x10)(BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasRequirements : 1;                              // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BAD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConversationTaskNode* GetDefaultObj();

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext& Context);
	bool GetNodeBodyColor(struct FLinearColor* BodyColor);
	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext& Context);
	void ExecuteClientEffects(struct FConversationContext& Context);
};

}


