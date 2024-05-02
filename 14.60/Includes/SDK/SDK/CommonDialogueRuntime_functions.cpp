#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonDialogueRuntime.ConversationNode
// (None)

class UClass* UConversationNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationNode");

	return Clss;
}


// ConversationNode CommonDialogueRuntime.Default__ConversationNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationNode* UConversationNode::GetDefaultObj()
{
	static class UConversationNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationNode*>(UConversationNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonDialogueRuntime.ConversationNode.GetDebugParticipantColor
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ParticipantID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UConversationNode::GetDebugParticipantColor(const struct FGameplayTag& ParticipantID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationNode", "GetDebugParticipantColor");

	Params::UConversationNode_GetDebugParticipantColor_Params Parms{};

	Parms.ParticipantID = ParticipantID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonDialogueRuntime.ConversationSubNode
// (None)

class UClass* UConversationSubNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationSubNode");

	return Clss;
}


// ConversationSubNode CommonDialogueRuntime.Default__ConversationSubNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationSubNode* UConversationSubNode::GetDefaultObj()
{
	static class UConversationSubNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationSubNode*>(UConversationSubNode::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonDialogueRuntime.ConversationChoiceNode
// (None)

class UClass* UConversationChoiceNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationChoiceNode");

	return Clss;
}


// ConversationChoiceNode CommonDialogueRuntime.Default__ConversationChoiceNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationChoiceNode* UConversationChoiceNode::GetDefaultObj()
{
	static class UConversationChoiceNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationChoiceNode*>(UConversationChoiceNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonDialogueRuntime.ConversationChoiceNode.EvaluateChoice
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FText                        DisplayOption                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UConversationChoiceNode::EvaluateChoice(struct FConversationContext& Context, class FText* DisplayOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationChoiceNode", "EvaluateChoice");

	Params::UConversationChoiceNode_EvaluateChoice_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DisplayOption != nullptr)
		*DisplayOption = Parms.DisplayOption;

}


// Class CommonDialogueRuntime.ConversationContextHelpers
// (None)

class UClass* UConversationContextHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationContextHelpers");

	return Clss;
}


// ConversationContextHelpers CommonDialogueRuntime.Default__ConversationContextHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationContextHelpers* UConversationContextHelpers::GetDefaultObj()
{
	static class UConversationContextHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationContextHelpers*>(UConversationContextHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonDialogueRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FClientConversationMessage  Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::PauseConversationAndSendClientChoices(struct FConversationContext& Context, struct FClientConversationMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "PauseConversationAndSendClientChoices");

	Params::UConversationContextHelpers_PauseConversationAndSendClientChoices_Params Parms{};

	Parms.Context = Context;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationContextHelpers.MakeConversationParticipant
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      ParticipantActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ParticipantTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationContextHelpers::MakeConversationParticipant(struct FConversationContext& Context, class AActor* ParticipantActor, const struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "MakeConversationParticipant");

	Params::UConversationContextHelpers_MakeConversationParticipant_Params Parms{};

	Parms.Context = Context;
	Parms.ParticipantActor = ParticipantActor;
	Parms.ParticipantTag = ParticipantTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonDialogueRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationNodeHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FConversationNodeHandle UConversationContextHelpers::GetCurrentConversationNodeHandle(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "GetCurrentConversationNodeHandle");

	Params::UConversationContextHelpers_GetCurrentConversationNodeHandle_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationContextHelpers.GetConversationParticipantActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTag                ParticipantTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UConversationContextHelpers::GetConversationParticipantActor(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "GetConversationParticipantActor");

	Params::UConversationContextHelpers_GetConversationParticipantActor_Params Parms{};

	Parms.Context = Context;
	Parms.ParticipantTag = ParticipantTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationContextHelpers.GetConversationParticipant
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTag                ParticipantTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationParticipantComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationParticipantComponent* UConversationContextHelpers::GetConversationParticipant(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "GetConversationParticipant");

	Params::UConversationContextHelpers_GetConversationParticipant_Params Parms{};

	Parms.Context = Context;
	Parms.ParticipantTag = ParticipantTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationContextHelpers.GetConversationInstance
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UConversationInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationInstance* UConversationContextHelpers::GetConversationInstance(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "GetConversationInstance");

	Params::UConversationContextHelpers_GetConversationInstance_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationContextHelpers.FindConversationComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationParticipantComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationParticipantComponent* UConversationContextHelpers::FindConversationComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "FindConversationComponent");

	Params::UConversationContextHelpers_FindConversationComponent_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationContextHelpers.AdvanceConversationWithChoice
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationChoiceReferenceChoice                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::AdvanceConversationWithChoice(struct FConversationContext& Context, struct FConversationChoiceReference& Choice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "AdvanceConversationWithChoice");

	Params::UConversationContextHelpers_AdvanceConversationWithChoice_Params Parms{};

	Parms.Context = Context;
	Parms.Choice = Choice;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationContextHelpers.AdvanceConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::AdvanceConversation(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "AdvanceConversation");

	Params::UConversationContextHelpers_AdvanceConversation_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonDialogueRuntime.ConversationDatabase
// (None)

class UClass* UConversationDatabase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationDatabase");

	return Clss;
}


// ConversationDatabase CommonDialogueRuntime.Default__ConversationDatabase
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationDatabase* UConversationDatabase::GetDefaultObj()
{
	static class UConversationDatabase* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationDatabase*>(UConversationDatabase::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonDialogueRuntime.ConversationNodeWithLinks
// (None)

class UClass* UConversationNodeWithLinks::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationNodeWithLinks");

	return Clss;
}


// ConversationNodeWithLinks CommonDialogueRuntime.Default__ConversationNodeWithLinks
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationNodeWithLinks* UConversationNodeWithLinks::GetDefaultObj()
{
	static class UConversationNodeWithLinks* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationNodeWithLinks*>(UConversationNodeWithLinks::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonDialogueRuntime.ConversationEntryPointNode
// (None)

class UClass* UConversationEntryPointNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationEntryPointNode");

	return Clss;
}


// ConversationEntryPointNode CommonDialogueRuntime.Default__ConversationEntryPointNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationEntryPointNode* UConversationEntryPointNode::GetDefaultObj()
{
	static class UConversationEntryPointNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationEntryPointNode*>(UConversationEntryPointNode::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonDialogueRuntime.ConversationInstance
// (None)

class UClass* UConversationInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationInstance");

	return Clss;
}


// ConversationInstance CommonDialogueRuntime.Default__ConversationInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationInstance* UConversationInstance::GetDefaultObj()
{
	static class UConversationInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationInstance*>(UConversationInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonDialogueRuntime.ConversationLibrary
// (None)

class UClass* UConversationLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationLibrary");

	return Clss;
}


// ConversationLibrary CommonDialogueRuntime.Default__ConversationLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationLibrary* UConversationLibrary::GetDefaultObj()
{
	static class UConversationLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationLibrary*>(UConversationLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonDialogueRuntime.ConversationLibrary.StartConversation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ConversationEntryTag                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InstigatorTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                TargetTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationInstance* UConversationLibrary::StartConversation(const struct FGameplayTag& ConversationEntryTag, class AActor* Instigator, const struct FGameplayTag& InstigatorTag, class AActor* Target, const struct FGameplayTag& TargetTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationLibrary", "StartConversation");

	Params::UConversationLibrary_StartConversation_Params Parms{};

	Parms.ConversationEntryTag = ConversationEntryTag;
	Parms.Instigator = Instigator;
	Parms.InstigatorTag = InstigatorTag;
	Parms.Target = Target;
	Parms.TargetTag = TargetTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationLibrary.GetConversationNode
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationNodeHandle     NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationNode*           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationNode* UConversationLibrary::GetConversationNode(struct FConversationNodeHandle& NodeHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationLibrary", "GetConversationNode");

	Params::UConversationLibrary_GetConversationNode_Params Parms{};

	Parms.NodeHandle = NodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonDialogueRuntime.ConversationParticipantComponent
// (None)

class UClass* UConversationParticipantComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationParticipantComponent");

	return Clss;
}


// ConversationParticipantComponent CommonDialogueRuntime.Default__ConversationParticipantComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationParticipantComponent* UConversationParticipantComponent::GetDefaultObj()
{
	static class UConversationParticipantComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationParticipantComponent*>(UConversationParticipantComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonDialogueRuntime.ConversationParticipantComponent.ServerAdvanceConversation
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FConversationChoiceReferenceInChoicePicked                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ServerAdvanceConversation(struct FConversationChoiceReference& InChoicePicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ServerAdvanceConversation");

	Params::UConversationParticipantComponent_ServerAdvanceConversation_Params Parms{};

	Parms.InChoicePicked = InChoicePicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonDialogueRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationChoiceReferenceInChoicePicked                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::RequestServerAdvanceConversation(struct FConversationChoiceReference& InChoicePicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "RequestServerAdvanceConversation");

	Params::UConversationParticipantComponent_RequestServerAdvanceConversation_Params Parms{};

	Parms.InChoicePicked = InChoicePicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonDialogueRuntime.ConversationParticipantComponent.GetParticipantDisplayName
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UConversationParticipantComponent::GetParticipantDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "GetParticipantDisplayName");

	Params::UConversationParticipantComponent_GetParticipantDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationParticipantComponent.ClientUpdateConversation
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FClientConversationMessagePayloadMessage                                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateConversation(struct FClientConversationMessagePayload& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversation");

	Params::UConversationParticipantComponent_ClientUpdateConversation_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonDialogueRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationNodeHandle     Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientExecuteTaskAndSideEffects(const struct FConversationNodeHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientExecuteTaskAndSideEffects");

	Params::UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonDialogueRuntime.ConversationParticipantComponent.ClientConversationStarted
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void UConversationParticipantComponent::ClientConversationStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientConversationStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonDialogueRuntime.ConversationParticipantComponent.ClientConversationEnded
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void UConversationParticipantComponent::ClientConversationEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientConversationEnded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CommonDialogueRuntime.ConversationRegistry
// (None)

class UClass* UConversationRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationRegistry");

	return Clss;
}


// ConversationRegistry CommonDialogueRuntime.Default__ConversationRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationRegistry* UConversationRegistry::GetDefaultObj()
{
	static class UConversationRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationRegistry*>(UConversationRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonDialogueRuntime.ConversationRequirementNode
// (None)

class UClass* UConversationRequirementNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationRequirementNode");

	return Clss;
}


// ConversationRequirementNode CommonDialogueRuntime.Default__ConversationRequirementNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationRequirementNode* UConversationRequirementNode::GetDefaultObj()
{
	static class UConversationRequirementNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationRequirementNode*>(UConversationRequirementNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonDialogueRuntime.ConversationRequirementNode.IsRequirementSatisfied
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EConversationRequirementResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EConversationRequirementResult UConversationRequirementNode::IsRequirementSatisfied(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationRequirementNode", "IsRequirementSatisfied");

	Params::UConversationRequirementNode_IsRequirementSatisfied_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonDialogueRuntime.ConversationSideEffectNode
// (None)

class UClass* UConversationSideEffectNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationSideEffectNode");

	return Clss;
}


// ConversationSideEffectNode CommonDialogueRuntime.Default__ConversationSideEffectNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationSideEffectNode* UConversationSideEffectNode::GetDefaultObj()
{
	static class UConversationSideEffectNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationSideEffectNode*>(UConversationSideEffectNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonDialogueRuntime.ConversationSideEffectNode.ServerCauseSideEffect
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationSideEffectNode::ServerCauseSideEffect(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationSideEffectNode", "ServerCauseSideEffect");

	Params::UConversationSideEffectNode_ServerCauseSideEffect_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonDialogueRuntime.ConversationSideEffectNode.ClientCauseSideEffect
// (BlueprintCosmetic, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationSideEffectNode::ClientCauseSideEffect(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationSideEffectNode", "ClientCauseSideEffect");

	Params::UConversationSideEffectNode_ClientCauseSideEffect_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonDialogueRuntime.ConversationTaskNode
// (None)

class UClass* UConversationTaskNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationTaskNode");

	return Clss;
}


// ConversationTaskNode CommonDialogueRuntime.Default__ConversationTaskNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationTaskNode* UConversationTaskNode::GetDefaultObj()
{
	static class UConversationTaskNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationTaskNode*>(UConversationTaskNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonDialogueRuntime.ConversationTaskNode.IsRequirementSatisfied
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EConversationRequirementResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EConversationRequirementResult UConversationTaskNode::IsRequirementSatisfied(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "IsRequirementSatisfied");

	Params::UConversationTaskNode_IsRequirementSatisfied_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationTaskNode.GetNodeBodyColor
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                BodyColor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationTaskNode::GetNodeBodyColor(struct FLinearColor* BodyColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "GetNodeBodyColor");

	Params::UConversationTaskNode_GetNodeBodyColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BodyColor != nullptr)
		*BodyColor = std::move(Parms.BodyColor);

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationTaskNode.ExecuteTaskNode
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationTaskNode::ExecuteTaskNode(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "ExecuteTaskNode");

	Params::UConversationTaskNode_ExecuteTaskNode_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonDialogueRuntime.ConversationTaskNode.ExecuteClientEffects
// (BlueprintCosmetic, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationTaskNode::ExecuteClientEffects(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "ExecuteClientEffects");

	Params::UConversationTaskNode_ExecuteClientEffects_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


