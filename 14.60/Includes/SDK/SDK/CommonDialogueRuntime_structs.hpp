#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConversationTaskResultType : uint8
{
	Invalid                        = 0,
	AdvanceConversation            = 1,
	AdvanceConversationWithChoice  = 2,
	PauseConversationAndSendClientChoices = 3,
	EConversationTaskResultType_MAX = 4,
};

enum class EConversationChoiceType : uint8
{
	Invisible                      = 0,
	UserChoiceAvailable            = 1,
	UserChoiceUnavailable          = 2,
	EConversationChoiceType_MAX    = 3,
};

enum class EConversationRequirementResult : uint8
{
	Passed                         = 0,
	FailedButVisible               = 1,
	FailedAndHidden                = 2,
	EConversationRequirementResult_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonDialogueRuntime.ConversationContext
struct FConversationContext
{
public:
	class UConversationInstance*                 ActiveConversation;                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationParticipantComponent*     ClientParticipant;                                 // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationTaskNode*                 TaskBeingConsidered;                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bServer;                                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BAF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CommonDialogueRuntime.ConversationNodeHandle
struct FConversationNodeHandle
{
public:
	struct FGuid                                 NodeGuid;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonDialogueRuntime.ConversationChoiceReference
struct FConversationChoiceReference
{
public:
	class FString                                ChoiceParams;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConversationNodeHandle               NodeReference;                                     // 0x10(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CommonDialogueRuntime.ClientConversationMessage
struct FClientConversationMessage
{
public:
	struct FGameplayTag                          SpeakerID;                                         // 0x0(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ParticipantDisplayName;                            // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CommonDialogueRuntime.ConversationTaskResult
struct FConversationTaskResult
{
public:
	enum class EConversationTaskResultType       Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConversationChoiceReference          Choice;                                            // 0x8(0x20)(NativeAccessSpecifierPrivate)
	struct FClientConversationMessage            Message;                                           // 0x28(0x38)(NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CommonDialogueRuntime.CommonDialogueBankParticipant
struct FCommonDialogueBankParticipant
{
public:
	class FText                                  FallbackName;                                      // 0x0(0x18)(NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantName;                                   // 0x18(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NodeTint;                                          // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CommonDialogueRuntime.ConversationEntryList
struct FConversationEntryList
{
public:
	TArray<struct FGuid>                         DestinationList;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CommonDialogueRuntime.ConversationParticipantEntry
struct FConversationParticipantEntry
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantID;                                     // 0x8(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CommonDialogueRuntime.ConversationParticipants
struct FConversationParticipants
{
public:
	TArray<struct FConversationParticipantEntry> List;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CommonDialogueRuntime.ClientConversationOptionEntry
struct FClientConversationOptionEntry
{
public:
	class FString                                ChoiceParams;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ChoiceText;                                        // 0x10(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EConversationChoiceType           ChoiceType;                                        // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConversationNodeHandle               NodeReference;                                     // 0x2C(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BB6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CommonDialogueRuntime.ClientConversationMessagePayload
struct FClientConversationMessagePayload
{
public:
	struct FClientConversationMessage            Message;                                           // 0x0(0x38)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConversationParticipants             Participants;                                      // 0x38(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConversationNodeHandle               CurrentNode;                                       // 0x48(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClientConversationOptionEntry> Options;                                           // 0x58(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


