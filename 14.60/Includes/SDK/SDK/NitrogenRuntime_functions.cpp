#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NitrogenRuntime.FortAthenaMutator_Nitrogen
// (Actor)

class UClass* AFortAthenaMutator_Nitrogen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Nitrogen");

	return Clss;
}


// FortAthenaMutator_Nitrogen NitrogenRuntime.Default__FortAthenaMutator_Nitrogen
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Nitrogen* AFortAthenaMutator_Nitrogen::GetDefaultObj()
{
	static class AFortAthenaMutator_Nitrogen* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Nitrogen*>(AFortAthenaMutator_Nitrogen::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_SortedTeamDataByScore
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Nitrogen::OnRep_SortedTeamDataByScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "OnRep_SortedTeamDataByScore");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_NitrogenGamePhase
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Nitrogen::OnRep_NitrogenGamePhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "OnRep_NitrogenGamePhase");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_CurrentFares
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Nitrogen::OnRep_CurrentFares()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "OnRep_CurrentFares");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehiclePlayerExit
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Nitrogen::OnNitrogenVehiclePlayerExit(class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "OnNitrogenVehiclePlayerExit");

	Params::AFortAthenaMutator_Nitrogen_OnNitrogenVehiclePlayerExit_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDriverChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* NewController                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Nitrogen::OnNitrogenVehicleDriverChanged(class AFortPlayerControllerAthena* NewController, class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "OnNitrogenVehicleDriverChanged");

	Params::AFortAthenaMutator_Nitrogen_OnNitrogenVehicleDriverChanged_Params Parms{};

	Parms.NewController = NewController;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      VehicleDestroyed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Nitrogen::OnNitrogenVehicleDestroyed(class AActor* VehicleDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "OnNitrogenVehicleDestroyed");

	Params::AFortAthenaMutator_Nitrogen_OnNitrogenVehicleDestroyed_Params Parms{};

	Parms.VehicleDestroyed = VehicleDestroyed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandlePlayerTeleportComplete
// (Final, Native, Private)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Nitrogen::HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "HandlePlayerTeleportComplete");

	Params::AFortAthenaMutator_Nitrogen_HandlePlayerTeleportComplete_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandleGroupTeleportComplete
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Nitrogen::HandleGroupTeleportComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "HandleGroupTeleportComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandleGameStartCountdownEnd
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Nitrogen::HandleGameStartCountdownEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Nitrogen", "HandleGameStartCountdownEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenRuntime.FortCheatManager_Nitrogen
// (None)

class UClass* UFortCheatManager_Nitrogen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_Nitrogen");

	return Clss;
}


// FortCheatManager_Nitrogen NitrogenRuntime.Default__FortCheatManager_Nitrogen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_Nitrogen* UFortCheatManager_Nitrogen::GetDefaultObj()
{
	static class UFortCheatManager_Nitrogen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_Nitrogen*>(UFortCheatManager_Nitrogen::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToSquadStartAtIndex
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortSquadStartSearchParamDataSearchParam                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      TeleportReasonString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Nitrogen::TeleportToSquadStartAtIndex(int32 Index, struct FFortSquadStartSearchParamData& SearchParam, class FString* TeleportReasonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Nitrogen", "TeleportToSquadStartAtIndex");

	Params::UFortCheatManager_Nitrogen_TeleportToSquadStartAtIndex_Params Parms{};

	Parms.Index = Index;
	Parms.SearchParam = SearchParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TeleportReasonString != nullptr)
		*TeleportReasonString = std::move(Parms.TeleportReasonString);

}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenSpawnActor
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Nitrogen::TeleportToNitrogenSpawnActor(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Nitrogen", "TeleportToNitrogenSpawnActor");

	Params::UFortCheatManager_Nitrogen_TeleportToNitrogenSpawnActor_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenRespawnActor
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Nitrogen::TeleportToNitrogenRespawnActor(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Nitrogen", "TeleportToNitrogenRespawnActor");

	Params::UFortCheatManager_Nitrogen_TeleportToNitrogenRespawnActor_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.SpawnNitrogenFare
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// float                              PickUpDistance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DropOffDistance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Nitrogen::SpawnNitrogenFare(float PickUpDistance, float DropOffDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Nitrogen", "SpawnNitrogenFare");

	Params::UFortCheatManager_Nitrogen_SpawnNitrogenFare_Params Parms{};

	Parms.PickUpDistance = PickUpDistance;
	Parms.DropOffDistance = DropOffDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenScore
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              Score                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ScoreReason                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Nitrogen::SetNitrogenScore(int32 Score, uint8 ScoreReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Nitrogen", "SetNitrogenScore");

	Params::UFortCheatManager_Nitrogen_SetNitrogenScore_Params Parms{};

	Parms.Score = Score;
	Parms.ScoreReason = ScoreReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenNavDestinationToCurrentLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_Nitrogen::SetNitrogenNavDestinationToCurrentLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Nitrogen", "SetNitrogenNavDestinationToCurrentLocation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.CompleteNitrogenFare
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_Nitrogen::CompleteNitrogenFare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Nitrogen", "CompleteNitrogenFare");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenRuntime.NitrogenFare
// (Actor)

class UClass* ANitrogenFare::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenFare");

	return Clss;
}


// NitrogenFare NitrogenRuntime.Default__NitrogenFare
// (Public, ClassDefaultObject, ArchetypeObject)

class ANitrogenFare* ANitrogenFare::GetDefaultObj()
{
	static class ANitrogenFare* Default = nullptr;

	if (!Default)
		Default = static_cast<ANitrogenFare*>(ANitrogenFare::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenFare.PickUpPointOverlapped
// (Final, Native, Public)
// Parameters:
// class AAthenaTraversePoint*        TraversePoint                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenFare::PickUpPointOverlapped(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "PickUpPointOverlapped");

	Params::ANitrogenFare_PickUpPointOverlapped_Params Parms{};

	Parms.TraversePoint = TraversePoint;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenFare.PickUpPointExited
// (Final, Native, Protected)
// Parameters:
// class AAthenaTraversePoint*        TraversePoint                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenFare::PickUpPointExited(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "PickUpPointExited");

	Params::ANitrogenFare_PickUpPointExited_Params Parms{};

	Parms.TraversePoint = TraversePoint;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenFare.OnVehicleEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedVehicle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenFare::OnVehicleEndPlay(class AActor* DestroyedVehicle, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "OnVehicleEndPlay");

	Params::ANitrogenFare_OnVehicleEndPlay_Params Parms{};

	Parms.DestroyedVehicle = DestroyedVehicle;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenFare.OnVehicleDriverChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* NewDriver                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenFare::OnVehicleDriverChanged(class AFortPlayerControllerAthena* NewDriver, class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "OnVehicleDriverChanged");

	Params::ANitrogenFare_OnVehicleDriverChanged_Params Parms{};

	Parms.NewDriver = NewDriver;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenFare.OnVehicleDestroyed
// (Final, Native, Private)
// Parameters:
// class AFortDagwoodVehicle*         DestroyedVehicle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenFare::OnVehicleDestroyed(class AFortDagwoodVehicle* DestroyedVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "OnVehicleDestroyed");

	Params::ANitrogenFare_OnVehicleDestroyed_Params Parms{};

	Parms.DestroyedVehicle = DestroyedVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenFare.OnRep_PassengerPickedUp
// (Final, Native, Private)
// Parameters:

void ANitrogenFare::OnRep_PassengerPickedUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "OnRep_PassengerPickedUp");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenFare.GetRewardValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ANitrogenFare::GetRewardValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "GetRewardValue");

	Params::ANitrogenFare_GetRewardValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitrogenRuntime.NitrogenFare.DropOffPointOverlapped
// (Final, Native, Public)
// Parameters:
// class AAthenaTraversePoint*        TraversePoint                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenFare::DropOffPointOverlapped(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "DropOffPointOverlapped");

	Params::ANitrogenFare_DropOffPointOverlapped_Params Parms{};

	Parms.TraversePoint = TraversePoint;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenFare.DropOffPointExited
// (Final, Native, Protected)
// Parameters:
// class AAthenaTraversePoint*        TraversePoint                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenFare::DropOffPointExited(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFare", "DropOffPointExited");

	Params::ANitrogenFare_DropOffPointExited_Params Parms{};

	Parms.TraversePoint = TraversePoint;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenRuntime.NitrogenFareValueIndicator
// (Actor)

class UClass* ANitrogenFareValueIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenFareValueIndicator");

	return Clss;
}


// NitrogenFareValueIndicator NitrogenRuntime.Default__NitrogenFareValueIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class ANitrogenFareValueIndicator* ANitrogenFareValueIndicator::GetDefaultObj()
{
	static class ANitrogenFareValueIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<ANitrogenFareValueIndicator*>(ANitrogenFareValueIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenFareValueIndicator.OnRep_IndicatorValue
// (Final, Native, Private)
// Parameters:

void ANitrogenFareValueIndicator::OnRep_IndicatorValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareValueIndicator", "OnRep_IndicatorValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenFareValueIndicator.OnFareIndicatorValueChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// uint8                              NewIndicatorValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenFareValueIndicator::OnFareIndicatorValueChanged(uint8 NewIndicatorValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareValueIndicator", "OnFareIndicatorValueChanged");

	Params::ANitrogenFareValueIndicator_OnFareIndicatorValueChanged_Params Parms{};

	Parms.NewIndicatorValue = NewIndicatorValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Class NitrogenRuntime.NitrogenNavArrow
// (Actor)

class UClass* ANitrogenNavArrow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenNavArrow");

	return Clss;
}


// NitrogenNavArrow NitrogenRuntime.Default__NitrogenNavArrow
// (Public, ClassDefaultObject, ArchetypeObject)

class ANitrogenNavArrow* ANitrogenNavArrow::GetDefaultObj()
{
	static class ANitrogenNavArrow* Default = nullptr;

	if (!Default)
		Default = static_cast<ANitrogenNavArrow*>(ANitrogenNavArrow::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenNavArrow.UpdatePulseSpeedForDistance
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ANitrogenNavArrow::UpdatePulseSpeedForDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenNavArrow", "UpdatePulseSpeedForDistance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenNavArrow.UpdatePrimaryColorForDistance
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ANitrogenNavArrow::UpdatePrimaryColorForDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenNavArrow", "UpdatePrimaryColorForDistance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenNavArrow.ThrowArrowToDestination
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ANitrogenNavArrow::ThrowArrowToDestination()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenNavArrow", "ThrowArrowToDestination");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenNavArrow.RecallArrowToOwner
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ANitrogenNavArrow::RecallArrowToOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenNavArrow", "RecallArrowToOwner");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenRuntime.NitrogenPassengerPawnComponent
// (None)

class UClass* UNitrogenPassengerPawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenPassengerPawnComponent");

	return Clss;
}


// NitrogenPassengerPawnComponent NitrogenRuntime.Default__NitrogenPassengerPawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenPassengerPawnComponent* UNitrogenPassengerPawnComponent::GetDefaultObj()
{
	static class UNitrogenPassengerPawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenPassengerPawnComponent*>(UNitrogenPassengerPawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenPassengerPawnComponent.OnRep_PassengerState
// (Final, Native, Private)
// Parameters:

void UNitrogenPassengerPawnComponent::OnRep_PassengerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPassengerPawnComponent", "OnRep_PassengerState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPassengerPawnComponent.OnRep_FareValueIndicator
// (Final, Native, Private)
// Parameters:

void UNitrogenPassengerPawnComponent::OnRep_FareValueIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPassengerPawnComponent", "OnRep_FareValueIndicator");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientPlayDeathEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNitrogenPassengerPawnComponent::ClientPlayDeathEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPassengerPawnComponent", "ClientPlayDeathEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientHandleFinishedCharacterCustomization
// (Final, Native, Private)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPassengerPawnComponent::ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPassengerPawnComponent", "ClientHandleFinishedCharacterCustomization");

	Params::UNitrogenPassengerPawnComponent_ClientHandleFinishedCharacterCustomization_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenRuntime.NitrogenPickup
// (Actor)

class UClass* ANitrogenPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenPickup");

	return Clss;
}


// NitrogenPickup NitrogenRuntime.Default__NitrogenPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ANitrogenPickup* ANitrogenPickup::GetDefaultObj()
{
	static class ANitrogenPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ANitrogenPickup*>(ANitrogenPickup::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenPickup.OnRep_TeamHidden
// (Final, Native, Private)
// Parameters:

void ANitrogenPickup::OnRep_TeamHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPickup", "OnRep_TeamHidden");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPickup.OnNitrogenPickupOverlapped
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ANitrogenPickup::OnNitrogenPickupOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPickup", "OnNitrogenPickupOverlapped");

	Params::ANitrogenPickup_OnNitrogenPickupOverlapped_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenRuntime.NitrogenFareDataRepActor
// (Actor)

class UClass* ANitrogenFareDataRepActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenFareDataRepActor");

	return Clss;
}


// NitrogenFareDataRepActor NitrogenRuntime.Default__NitrogenFareDataRepActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ANitrogenFareDataRepActor* ANitrogenFareDataRepActor::GetDefaultObj()
{
	static class ANitrogenFareDataRepActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ANitrogenFareDataRepActor*>(ANitrogenFareDataRepActor::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenFareDataRepActor.OnRep_FareRepData
// (Final, Native, Public)
// Parameters:

void ANitrogenFareDataRepActor::OnRep_FareRepData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareDataRepActor", "OnRep_FareRepData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenRuntime.NitrogenPlayerComponent
// (None)

class UClass* UNitrogenPlayerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenPlayerComponent");

	return Clss;
}


// NitrogenPlayerComponent NitrogenRuntime.Default__NitrogenPlayerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenPlayerComponent* UNitrogenPlayerComponent::GetDefaultObj()
{
	static class UNitrogenPlayerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenPlayerComponent*>(UNitrogenPlayerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_FareInteractionData
// (Final, Native, Private)
// Parameters:

void UNitrogenPlayerComponent::OnRep_FareInteractionData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "OnRep_FareInteractionData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_FareDataRepActor
// (Final, Native, Private)
// Parameters:

void UNitrogenPlayerComponent::OnRep_FareDataRepActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "OnRep_FareDataRepActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_CachedMutator
// (Final, Native, Private)
// Parameters:

void UNitrogenPlayerComponent::OnRep_CachedMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "OnRep_CachedMutator");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnNitrogenGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// enum class ENitrogenGamePhase      NewGamePhase                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlayerComponent::OnNitrogenGamePhaseChanged(enum class ENitrogenGamePhase NewGamePhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "OnNitrogenGamePhaseChanged");

	Params::UNitrogenPlayerComponent_OnNitrogenGamePhaseChanged_Params Parms{};

	Parms.NewGamePhase = NewGamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnGameStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenPlayerComponent::OnGameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "OnGameStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnExitVehicle
// (Final, Native, Private)
// Parameters:

void UNitrogenPlayerComponent::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "OnExitVehicle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnEnterVehiclePassenger
// (Final, Native, Private)
// Parameters:

void UNitrogenPlayerComponent::OnEnterVehiclePassenger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "OnEnterVehiclePassenger");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnEnterVehicleDriver
// (Final, Native, Private)
// Parameters:

void UNitrogenPlayerComponent::OnEnterVehicleDriver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "OnEnterVehicleDriver");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.HandleVehicleDestroyedBuildingActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ABuildingActor*              BuildingActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlayerComponent::HandleVehicleDestroyedBuildingActor(class AFortAthenaVehicle* Vehicle, class ABuildingActor* BuildingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "HandleVehicleDestroyedBuildingActor");

	Params::UNitrogenPlayerComponent_HandleVehicleDestroyedBuildingActor_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.BuildingActor = BuildingActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromDropOff
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNitrogenPlayerComponent::GetDistanceFromDropOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "GetDistanceFromDropOff");

	Params::UNitrogenPlayerComponent_GetDistanceFromDropOff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromClosestPassenger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNitrogenPlayerComponent::GetDistanceFromClosestPassenger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "GetDistanceFromClosestPassenger");

	Params::UNitrogenPlayerComponent_GetDistanceFromClosestPassenger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitrogenRuntime.NitrogenPlayerComponent.ClientHandleLoadingScreenStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnableLoadScreen                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        HUDReasonText                                                    (Parm, NativeAccessSpecifierPublic)

void UNitrogenPlayerComponent::ClientHandleLoadingScreenStateChanged(class AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, class FText HUDReasonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlayerComponent", "ClientHandleLoadingScreenStateChanged");

	Params::UNitrogenPlayerComponent_ClientHandleLoadingScreenStateChanged_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bEnableLoadScreen = bEnableLoadScreen;
	Parms.HUDReasonText = HUDReasonText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenRuntime.NitrogenTraversePoint
// (Actor)

class UClass* ANitrogenTraversePoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenTraversePoint");

	return Clss;
}


// NitrogenTraversePoint NitrogenRuntime.Default__NitrogenTraversePoint
// (Public, ClassDefaultObject, ArchetypeObject)

class ANitrogenTraversePoint* ANitrogenTraversePoint::GetDefaultObj()
{
	static class ANitrogenTraversePoint* Default = nullptr;

	if (!Default)
		Default = static_cast<ANitrogenTraversePoint*>(ANitrogenTraversePoint::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenTraversePoint.OnEndOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                      OverlappedActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenTraversePoint::OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenTraversePoint", "OnEndOverlap");

	Params::ANitrogenTraversePoint_OnEndOverlap_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenTraversePoint.OnClientVisibiltyUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewHidden                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenTraversePoint::OnClientVisibiltyUpdated(bool bNewHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenTraversePoint", "OnClientVisibiltyUpdated");

	Params::ANitrogenTraversePoint_OnClientVisibiltyUpdated_Params Parms{};

	Parms.bNewHidden = bNewHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenRuntime.NitrogenTraversePoint.OnClientInteracted
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bOwnedByClient                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANitrogenTraversePoint::OnClientInteracted(bool bOwnedByClient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenTraversePoint", "OnClientInteracted");

	Params::ANitrogenTraversePoint_OnClientInteracted_Params Parms{};

	Parms.bOwnedByClient = bOwnedByClient;

	UObject::ProcessEvent(Func, &Parms);

}


// Class NitrogenRuntime.NitrogenVehicleComponent
// (None)

class UClass* UNitrogenVehicleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenVehicleComponent");

	return Clss;
}


// NitrogenVehicleComponent NitrogenRuntime.Default__NitrogenVehicleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenVehicleComponent* UNitrogenVehicleComponent::GetDefaultObj()
{
	static class UNitrogenVehicleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenVehicleComponent*>(UNitrogenVehicleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetSparksCounts
// (Final, Native, Private)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenVehicleComponent::TimelineBoostFXUpdate_JetSparksCounts(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenVehicleComponent", "TimelineBoostFXUpdate_JetSparksCounts");

	Params::UNitrogenVehicleComponent_TimelineBoostFXUpdate_JetSparksCounts_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetFlamesHeight
// (Final, Native, Private)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenVehicleComponent::TimelineBoostFXUpdate_JetFlamesHeight(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenVehicleComponent", "TimelineBoostFXUpdate_JetFlamesHeight");

	Params::UNitrogenVehicleComponent_TimelineBoostFXUpdate_JetFlamesHeight_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenVehicleComponent.SetBoostFXActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenVehicleComponent::SetBoostFXActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenVehicleComponent", "SetBoostFXActive");

	Params::UNitrogenVehicleComponent_SetBoostFXActive_Params Parms{};

	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenRuntime.NitrogenVehicleComponent.IsVehicleUnderCleanupWaterDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNitrogenVehicleComponent::IsVehicleUnderCleanupWaterDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenVehicleComponent", "IsVehicleUnderCleanupWaterDepth");

	Params::UNitrogenVehicleComponent_IsVehicleUnderCleanupWaterDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NitrogenRuntime.NitrogenVehicleComponent.HandleVehicleOnHit
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UNitrogenVehicleComponent::HandleVehicleOnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenVehicleComponent", "HandleVehicleOnHit");

	Params::UNitrogenVehicleComponent_HandleVehicleOnHit_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


