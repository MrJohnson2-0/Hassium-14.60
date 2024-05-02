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

// 0x18 (0x18 - 0x0)
// Function CommonDialogueRuntime.ConversationNode.GetDebugParticipantColor
struct UConversationNode_GetDebugParticipantColor_Params
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonDialogueRuntime.ConversationChoiceNode.EvaluateChoice
struct UConversationChoiceNode_EvaluateChoice_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FText                                  DisplayOption;                                     // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices
struct UConversationContextHelpers_PauseConversationAndSendClientChoices_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FClientConversationMessage            Message;                                           // 0x20(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x58(0x60)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.MakeConversationParticipant
struct UConversationContextHelpers_MakeConversationParticipant_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                ParticipantActor;                                  // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantTag;                                    // 0x28(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle
struct UConversationContextHelpers_GetCurrentConversationNodeHandle_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationNodeHandle               ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.GetConversationParticipantActor
struct UConversationContextHelpers_GetConversationParticipantActor_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.GetConversationParticipant
struct UConversationContextHelpers_GetConversationParticipant_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ParticipantTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConversationParticipantComponent*     ReturnValue;                                       // 0x28(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.GetConversationInstance
struct UConversationContextHelpers_GetConversationInstance_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UConversationInstance*                 ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.FindConversationComponent
struct UConversationContextHelpers_FindConversationComponent_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConversationParticipantComponent*     ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.AdvanceConversationWithChoice
struct UConversationContextHelpers_AdvanceConversationWithChoice_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationChoiceReference          Choice;                                            // 0x20(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x40(0x60)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function CommonDialogueRuntime.ConversationContextHelpers.AdvanceConversation
struct UConversationContextHelpers_AdvanceConversation_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x20(0x60)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonDialogueRuntime.ConversationLibrary.StartConversation
struct UConversationLibrary_StartConversation_Params
{
public:
	struct FGameplayTag                          ConversationEntryTag;                              // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InstigatorTag;                                     // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TargetTag;                                         // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConversationInstance*                 ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonDialogueRuntime.ConversationLibrary.GetConversationNode
struct UConversationLibrary_GetConversationNode_Params
{
public:
	struct FConversationNodeHandle               NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConversationNode*                     ReturnValue;                                       // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonDialogueRuntime.ConversationParticipantComponent.ServerAdvanceConversation
struct UConversationParticipantComponent_ServerAdvanceConversation_Params
{
public:
	struct FConversationChoiceReference          InChoicePicked;                                    // 0x0(0x20)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonDialogueRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation
struct UConversationParticipantComponent_RequestServerAdvanceConversation_Params
{
public:
	struct FConversationChoiceReference          InChoicePicked;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonDialogueRuntime.ConversationParticipantComponent.GetParticipantDisplayName
struct UConversationParticipantComponent_GetParticipantDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function CommonDialogueRuntime.ConversationParticipantComponent.ClientUpdateConversation
struct UConversationParticipantComponent_ClientUpdateConversation_Params
{
public:
	struct FClientConversationMessagePayload     Message;                                           // 0x0(0x68)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonDialogueRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects
struct UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Params
{
public:
	struct FConversationNodeHandle               Handle;                                            // 0x0(0x10)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonDialogueRuntime.ConversationRequirementNode.IsRequirementSatisfied
struct UConversationRequirementNode_IsRequirementSatisfied_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EConversationRequirementResult    ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CommonDialogueRuntime.ConversationSideEffectNode.ServerCauseSideEffect
struct UConversationSideEffectNode_ServerCauseSideEffect_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonDialogueRuntime.ConversationSideEffectNode.ClientCauseSideEffect
struct UConversationSideEffectNode_ClientCauseSideEffect_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonDialogueRuntime.ConversationTaskNode.IsRequirementSatisfied
struct UConversationTaskNode_IsRequirementSatisfied_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EConversationRequirementResult    ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function CommonDialogueRuntime.ConversationTaskNode.GetNodeBodyColor
struct UConversationTaskNode_GetNodeBodyColor_Params
{
public:
	struct FLinearColor                          BodyColor;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function CommonDialogueRuntime.ConversationTaskNode.ExecuteTaskNode
struct UConversationTaskNode_ExecuteTaskNode_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationTaskResult               ReturnValue;                                       // 0x20(0x60)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonDialogueRuntime.ConversationTaskNode.ExecuteClientEffects
struct UConversationTaskNode_ExecuteClientEffects_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}


