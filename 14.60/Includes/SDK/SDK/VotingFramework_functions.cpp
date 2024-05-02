#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VotingFramework.VoteBroadcasterComponent
// (None)

class UClass* UVoteBroadcasterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoteBroadcasterComponent");

	return Clss;
}


// VoteBroadcasterComponent VotingFramework.Default__VoteBroadcasterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoteBroadcasterComponent* UVoteBroadcasterComponent::GetDefaultObj()
{
	static class UVoteBroadcasterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoteBroadcasterComponent*>(UVoteBroadcasterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VoteSessionId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VoteId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteStart(class FName VoteSessionId, class FName VoteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteStart");

	Params::UVoteBroadcasterComponent_VoteStart_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteBroadcasterComponent.VoteSetup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VoteSessionId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VoteId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteSetup(class FName VoteSessionId, class FName VoteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSetup");

	Params::UVoteBroadcasterComponent_VoteSetup_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VoteSessionId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteSessionShutdown(class FName VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionShutdown");

	Params::UVoteBroadcasterComponent_VoteSessionShutdown_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VoteSessionId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartingVoteId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoteSessionNetworkType NetworkType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteSessionSetup(class FName VoteSessionId, class FName StartingVoteId, enum class EVoteSessionNetworkType NetworkType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionSetup");

	Params::UVoteBroadcasterComponent_VoteSessionSetup_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.StartingVoteId = StartingVoteId;
	Parms.NetworkType = NetworkType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VoteSessionId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteSessionComplete(class FName VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionComplete");

	Params::UVoteBroadcasterComponent_VoteSessionComplete_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteBroadcasterComponent.VoteEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VoteSessionId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VoteId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        WinningVoteSelectionId                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteEnd(class FName VoteSessionId, class FName VoteId, class FName WinningVoteSelectionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteEnd");

	Params::UVoteBroadcasterComponent_VoteEnd_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.WinningVoteSelectionId = WinningVoteSelectionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FName                        VoteSessionId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VoteId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VoteSelectionId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VoteDelta                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::ServerSubmitVotesAggregated(class FName VoteSessionId, class FName VoteId, class FName VoteSelectionId, int32 VoteDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteBroadcasterComponent", "ServerSubmitVotesAggregated");

	Params::UVoteBroadcasterComponent_ServerSubmitVotesAggregated_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.VoteSelectionId = VoteSelectionId;
	Parms.VoteDelta = VoteDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteBroadcasterComponent.OnVoteCasted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FUniqueNetIdRepl            UserNetId                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteId                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteSelectionId                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::OnVoteCasted(struct FUniqueNetIdRepl& UserNetId, struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteBroadcasterComponent", "OnVoteCasted");

	Params::UVoteBroadcasterComponent_OnVoteCasted_Params Parms{};

	Parms.UserNetId = UserNetId;
	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.VoteSelectionId = VoteSelectionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VotingFramework.VoteDispatchSubsystem
// (None)

class UClass* UVoteDispatchSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoteDispatchSubsystem");

	return Clss;
}


// VoteDispatchSubsystem VotingFramework.Default__VoteDispatchSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoteDispatchSubsystem* UVoteDispatchSubsystem::GetDefaultObj()
{
	static class UVoteDispatchSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoteDispatchSubsystem*>(UVoteDispatchSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class VotingFramework.VoteInitiationActor
// (Actor)

class UClass* AVoteInitiationActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoteInitiationActor");

	return Clss;
}


// VoteInitiationActor VotingFramework.Default__VoteInitiationActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AVoteInitiationActor* AVoteInitiationActor::GetDefaultObj()
{
	static class AVoteInitiationActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AVoteInitiationActor*>(AVoteInitiationActor::StaticClass()->DefaultObject);

	return Default;
}


// Class VotingFramework.VoteListenerComponent
// (None)

class UClass* UVoteListenerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoteListenerComponent");

	return Clss;
}


// VoteListenerComponent VotingFramework.Default__VoteListenerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoteListenerComponent* UVoteListenerComponent::GetDefaultObj()
{
	static class UVoteListenerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoteListenerComponent*>(UVoteListenerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VotingFramework.VoteListenerComponent.OnVoteStart
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteId                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoteState              VoteState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteStart(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum class EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteStart");

	Params::UVoteListenerComponent_OnVoteStart_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteListenerComponent.OnVoteSetup
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteId                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoteState              VoteState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum class EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSetup");

	Params::UVoteListenerComponent_OnVoteSetup_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionVoting
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                StartingVoteId                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoteSessionState       SessionState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSessionVoting(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum class EVoteSessionState SessionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionVoting");

	Params::UVoteListenerComponent_OnVoteSessionVoting_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.StartingVoteId = StartingVoteId;
	Parms.SessionState = SessionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionShutdown
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSessionShutdown(struct FGameplayTag& VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionShutdown");

	Params::UVoteListenerComponent_OnVoteSessionShutdown_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionSetup
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                StartingVoteId                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoteSessionNetworkType NetworkType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoteSessionState       SessionState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSessionSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum class EVoteSessionNetworkType NetworkType, enum class EVoteSessionState SessionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionSetup");

	Params::UVoteListenerComponent_OnVoteSessionSetup_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.StartingVoteId = StartingVoteId;
	Parms.NetworkType = NetworkType;
	Parms.SessionState = SessionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionComplete
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSessionComplete(struct FGameplayTag& VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionComplete");

	Params::UVoteListenerComponent_OnVoteSessionComplete_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteListenerComponent.OnVoteEnd
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteId                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WinningVoteSelectionId                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVoteState              VoteState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteEnd(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& WinningVoteSelectionId, enum class EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteEnd");

	Params::UVoteListenerComponent_OnVoteEnd_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.WinningVoteSelectionId = WinningVoteSelectionId;
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteListenerComponent.OnVoteChange
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGameplayTag                VoteSessionId                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteId                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteSelectionId                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ServerVoteTotal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AllServersVoteTotal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteChange(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteChange");

	Params::UVoteListenerComponent_OnVoteChange_Params Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.VoteSelectionId = VoteSelectionId;
	Parms.ServerVoteTotal = ServerVoteTotal;
	Parms.AllServersVoteTotal = AllServersVoteTotal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VotingFramework.VoteResponderComponent
// (None)

class UClass* UVoteResponderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoteResponderComponent");

	return Clss;
}


// VoteResponderComponent VotingFramework.Default__VoteResponderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoteResponderComponent* UVoteResponderComponent::GetDefaultObj()
{
	static class UVoteResponderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoteResponderComponent*>(UVoteResponderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            InUserId                                                         (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCastedVote                 CastedVote                                                       (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVoteResponderComponent::ServerCastVoteSelection(struct FUniqueNetIdRepl& InUserId, struct FCastedVote& CastedVote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteResponderComponent", "ServerCastVoteSelection");

	Params::UVoteResponderComponent_ServerCastVoteSelection_Params Parms{};

	Parms.InUserId = InUserId;
	Parms.CastedVote = CastedVote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                InPlayerState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SelectionIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteResponderComponent::CastManualVoteSelectionAtIndex(class APlayerState* InPlayerState, int32 SelectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteResponderComponent", "CastManualVoteSelectionAtIndex");

	Params::UVoteResponderComponent_CastManualVoteSelectionAtIndex_Params Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.SelectionIndex = SelectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteResponderComponent.CastManualVoteSelection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerState*                InPlayerState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VoteSelection                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteResponderComponent::CastManualVoteSelection(class APlayerState* InPlayerState, struct FGameplayTag& VoteSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteResponderComponent", "CastManualVoteSelection");

	Params::UVoteResponderComponent_CastManualVoteSelection_Params Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.VoteSelection = VoteSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                InPlayerState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteResponderComponent::CastDefaultVoteSelection(class APlayerState* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteResponderComponent", "CastDefaultVoteSelection");

	Params::UVoteResponderComponent_CastDefaultVoteSelection_Params Parms{};

	Parms.InPlayerState = InPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


