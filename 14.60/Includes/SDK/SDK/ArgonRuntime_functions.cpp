#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ArgonRuntime.ArgonPlayerComponent
// (None)

class UClass* UArgonPlayerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArgonPlayerComponent");

	return Clss;
}


// ArgonPlayerComponent ArgonRuntime.Default__ArgonPlayerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UArgonPlayerComponent* UArgonPlayerComponent::GetDefaultObj()
{
	static class UArgonPlayerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UArgonPlayerComponent*>(UArgonPlayerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonRuntime.ArgonPlayerComponent.PlayFinishedRaceEmote
// (Final, Native, Public)
// Parameters:

void UArgonPlayerComponent::PlayFinishedRaceEmote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonPlayerComponent", "PlayFinishedRaceEmote");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.ArgonPlayerComponent.OnRep_RotatePawnToCamera
// (Final, Native, Protected)
// Parameters:

void UArgonPlayerComponent::OnRep_RotatePawnToCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonPlayerComponent", "OnRep_RotatePawnToCamera");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.ArgonPlayerComponent.OnRep_EntireSquadDiedServerTimeForRespawn
// (Final, Native, Public)
// Parameters:

void UArgonPlayerComponent::OnRep_EntireSquadDiedServerTimeForRespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonPlayerComponent", "OnRep_EntireSquadDiedServerTimeForRespawn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.ArgonPlayerComponent.OnRep_ArgonMutator
// (Final, Native, Private)
// Parameters:

void UArgonPlayerComponent::OnRep_ArgonMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonPlayerComponent", "OnRep_ArgonMutator");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.ArgonPlayerComponent.OnRacePhaseChanged
// (Final, Native, Private)
// Parameters:
// enum class EArgonRacePhase         NewRacePhase                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UArgonPlayerComponent::OnRacePhaseChanged(enum class EArgonRacePhase NewRacePhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonPlayerComponent", "OnRacePhaseChanged");

	Params::UArgonPlayerComponent_OnRacePhaseChanged_Params Parms{};

	Parms.NewRacePhase = NewRacePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ArgonRuntime.ArgonStartingPlatform
// (Actor)

class UClass* AArgonStartingPlatform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArgonStartingPlatform");

	return Clss;
}


// ArgonStartingPlatform ArgonRuntime.Default__ArgonStartingPlatform
// (Public, ClassDefaultObject, ArchetypeObject)

class AArgonStartingPlatform* AArgonStartingPlatform::GetDefaultObj()
{
	static class AArgonStartingPlatform* Default = nullptr;

	if (!Default)
		Default = static_cast<AArgonStartingPlatform*>(AArgonStartingPlatform::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonRuntime.ArgonStartingPlatform.OnRep_IsEnabled
// (Final, Native, Protected)
// Parameters:

void AArgonStartingPlatform::OnRep_IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonStartingPlatform", "OnRep_IsEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ArgonRuntime.ArgonTicketComponent
// (None)

class UClass* UArgonTicketComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArgonTicketComponent");

	return Clss;
}


// ArgonTicketComponent ArgonRuntime.Default__ArgonTicketComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UArgonTicketComponent* UArgonTicketComponent::GetDefaultObj()
{
	static class UArgonTicketComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UArgonTicketComponent*>(UArgonTicketComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonRuntime.ArgonTicketComponent.IsNearToPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UArgonTicketComponent::IsNearToPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonTicketComponent", "IsNearToPlayer");

	Params::UArgonTicketComponent_IsNearToPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ArgonRuntime.ArgonTraversePoint
// (Actor)

class UClass* AArgonTraversePoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArgonTraversePoint");

	return Clss;
}


// ArgonTraversePoint ArgonRuntime.Default__ArgonTraversePoint
// (Public, ClassDefaultObject, ArchetypeObject)

class AArgonTraversePoint* AArgonTraversePoint::GetDefaultObj()
{
	static class AArgonTraversePoint* Default = nullptr;

	if (!Default)
		Default = static_cast<AArgonTraversePoint*>(AArgonTraversePoint::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonRuntime.ArgonTraversePoint.OnNewState_Hidden_Server_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void AArgonTraversePoint::OnNewState_Hidden_Server_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonTraversePoint", "OnNewState_Hidden_Server_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArgonRuntime.ArgonTraversePoint.OnNewState_Active_Server_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void AArgonTraversePoint::OnNewState_Active_Server_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonTraversePoint", "OnNewState_Active_Server_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArgonRuntime.ArgonTraversePoint.ClientSpawnMarkerActor
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void AArgonTraversePoint::ClientSpawnMarkerActor(struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonTraversePoint", "ClientSpawnMarkerActor");

	Params::AArgonTraversePoint_ClientSpawnMarkerActor_Params Parms{};

	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ArgonRuntime.ArgonVehicleSpawner
// (Actor)

class UClass* AArgonVehicleSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArgonVehicleSpawner");

	return Clss;
}


// ArgonVehicleSpawner ArgonRuntime.Default__ArgonVehicleSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class AArgonVehicleSpawner* AArgonVehicleSpawner::GetDefaultObj()
{
	static class AArgonVehicleSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<AArgonVehicleSpawner*>(AArgonVehicleSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Class ArgonRuntime.FortAthenaMutator_Argon
// (Actor)

class UClass* AFortAthenaMutator_Argon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Argon");

	return Clss;
}


// FortAthenaMutator_Argon ArgonRuntime.Default__FortAthenaMutator_Argon
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Argon* AFortAthenaMutator_Argon::GetDefaultObj()
{
	static class AFortAthenaMutator_Argon* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Argon*>(AFortAthenaMutator_Argon::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.SortClientTicketComponents
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Argon::SortClientTicketComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "SortClientTicketComponents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_TeamTicketCounts
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Argon::OnRep_TeamTicketCounts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "OnRep_TeamTicketCounts");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_RacingPlayersByPlace
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Argon::OnRep_RacingPlayersByPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "OnRep_RacingPlayersByPlace");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_NumSupplyDropClustersSpawned
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Argon::OnRep_NumSupplyDropClustersSpawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "OnRep_NumSupplyDropClustersSpawned");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_EndTraversePoint
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Argon::OnRep_EndTraversePoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "OnRep_EndTraversePoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_CurrentRaceState
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Argon::OnRep_CurrentRaceState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "OnRep_CurrentRaceState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnEndTraversePointTouched
// (Final, Native, Private)
// Parameters:
// class AAthenaTraversePoint*        PointActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      TouchingPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Argon::OnEndTraversePointTouched(class AAthenaTraversePoint* PointActor, class AFortPlayerStateAthena* TouchingPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "OnEndTraversePointTouched");

	Params::AFortAthenaMutator_Argon_OnEndTraversePointTouched_Params Parms{};

	Parms.PointActor = PointActor;
	Parms.TouchingPlayer = TouchingPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.IsUsingRespawnAndSpectateSelectMutator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Argon::IsUsingRespawnAndSpectateSelectMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "IsUsingRespawnAndSpectateSelectMutator");

	Params::AFortAthenaMutator_Argon_IsUsingRespawnAndSpectateSelectMutator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.HasTeamFinishedRace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              Team                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Argon::HasTeamFinishedRace(uint8 Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "HasTeamFinishedRace");

	Params::AFortAthenaMutator_Argon_HasTeamFinishedRace_Params Parms{};

	Parms.Team = Team;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.HasPlayerFinishedRace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Argon::HasPlayerFinishedRace(class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "HasPlayerFinishedRace");

	Params::AFortAthenaMutator_Argon_HasPlayerFinishedRace_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.HandlePlayerTeleportComplete
// (Final, Native, Private)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Argon::HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "HandlePlayerTeleportComplete");

	Params::AFortAthenaMutator_Argon_HandlePlayerTeleportComplete_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.HandleGroupTeleportComplete
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Argon::HandleGroupTeleportComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "HandleGroupTeleportComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.HandleGameStartCountdownEnd
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Argon::HandleGameStartCountdownEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "HandleGameStartCountdownEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetTicketItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortWorldItemDefinition*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItemDefinition* AFortAthenaMutator_Argon::GetTicketItemDefinition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "GetTicketItemDefinition");

	Params::AFortAthenaMutator_Argon_GetTicketItemDefinition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetRandomStartingLineEmotePlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortAthenaMutator_Argon::GetRandomStartingLineEmotePlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "GetRandomStartingLineEmotePlayRate");

	Params::AFortAthenaMutator_Argon_GetRandomStartingLineEmotePlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetRaceTimeElapsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortAthenaMutator_Argon::GetRaceTimeElapsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "GetRaceTimeElapsed");

	Params::AFortAthenaMutator_Argon_GetRaceTimeElapsed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetProgressBarUIInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutMyPercent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutSquadmatePcts                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              OutNumSquadTickets                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FArgonTeamProgressBarInfo>OutEnemyProgressInfos                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Argon::GetProgressBarUIInfo(float* OutMyPercent, TArray<float>* OutSquadmatePcts, uint8* OutNumSquadTickets, TArray<struct FArgonTeamProgressBarInfo>* OutEnemyProgressInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "GetProgressBarUIInfo");

	Params::AFortAthenaMutator_Argon_GetProgressBarUIInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMyPercent != nullptr)
		*OutMyPercent = Parms.OutMyPercent;

	if (OutSquadmatePcts != nullptr)
		*OutSquadmatePcts = std::move(Parms.OutSquadmatePcts);

	if (OutNumSquadTickets != nullptr)
		*OutNumSquadTickets = Parms.OutNumSquadTickets;

	if (OutEnemyProgressInfos != nullptr)
		*OutEnemyProgressInfos = std::move(Parms.OutEnemyProgressInfos);

}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetPlayerTeamPlacement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*      Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortAthenaMutator_Argon::GetPlayerTeamPlacement(class AFortPlayerStateAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "GetPlayerTeamPlacement");

	Params::AFortAthenaMutator_Argon_GetPlayerTeamPlacement_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsTeamHasAcquired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              Team                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortAthenaMutator_Argon::GetNumberOfTicketsTeamHasAcquired(uint8 Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "GetNumberOfTicketsTeamHasAcquired");

	Params::AFortAthenaMutator_Argon_GetNumberOfTicketsTeamHasAcquired_Params Parms{};

	Parms.Team = Team;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsNeededToFinishRace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortAthenaMutator_Argon::GetNumberOfTicketsNeededToFinishRace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "GetNumberOfTicketsNeededToFinishRace");

	Params::AFortAthenaMutator_Argon_GetNumberOfTicketsNeededToFinishRace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetEndTraversePoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AArgonTraversePoint*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AArgonTraversePoint* AFortAthenaMutator_Argon::GetEndTraversePoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "GetEndTraversePoint");

	Params::AFortAthenaMutator_Argon_GetEndTraversePoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonRuntime.FortAthenaMutator_Argon.DidPlayerCrossFinishLine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Argon::DidPlayerCrossFinishLine(class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Argon", "DidPlayerCrossFinishLine");

	Params::AFortAthenaMutator_Argon_DidPlayerCrossFinishLine_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ArgonRuntime.FortCheatManager_Argon
// (None)

class UClass* UFortCheatManager_Argon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_Argon");

	return Clss;
}


// FortCheatManager_Argon ArgonRuntime.Default__FortCheatManager_Argon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_Argon* UFortCheatManager_Argon::GetDefaultObj()
{
	static class UFortCheatManager_Argon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_Argon*>(UFortCheatManager_Argon::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonRuntime.FortCheatManager_Argon.ArgonTeleportToEndPoint
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_Argon::ArgonTeleportToEndPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Argon", "ArgonTeleportToEndPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


