#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HydrogenRuntime.FortAthenaMutator_Hydrogen
// (Actor)

class UClass* AFortAthenaMutator_Hydrogen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Hydrogen");

	return Clss;
}


// FortAthenaMutator_Hydrogen HydrogenRuntime.Default__FortAthenaMutator_Hydrogen
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Hydrogen* AFortAthenaMutator_Hydrogen::GetDefaultObj()
{
	static class AFortAthenaMutator_Hydrogen* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Hydrogen*>(AFortAthenaMutator_Hydrogen::StaticClass()->DefaultObject);

	return Default;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.UpdateCapturePointsCounted
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_Hydrogen::UpdateCapturePointsCounted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "UpdateCapturePointsCounted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.TickHydrogenStormShield
// (Final, Native, Protected)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Hydrogen::TickHydrogenStormShield(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "TickHydrogenStormShield");

	Params::AFortAthenaMutator_Hydrogen_TickHydrogenStormShield_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetupSafeZoneRoute
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FVector                     StartVector                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndVector                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::SetupSafeZoneRoute(const struct FVector& StartVector, const struct FVector& EndVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "SetupSafeZoneRoute");

	Params::AFortAthenaMutator_Hydrogen_SetupSafeZoneRoute_Params Parms{};

	Parms.StartVector = StartVector;
	Parms.EndVector = EndVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetCapturePointFillAmount
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AHydrogenObjectiveActor*     InCapturePointActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InPlayerTeam                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::SetCapturePointFillAmount(class AHydrogenObjectiveActor* InCapturePointActor, uint8 InPlayerTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "SetCapturePointFillAmount");

	Params::AFortAthenaMutator_Hydrogen_SetCapturePointFillAmount_Params Parms{};

	Parms.InCapturePointActor = InCapturePointActor;
	Parms.InPlayerTeam = InPlayerTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.PositionHydrogenStormShield
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_Hydrogen::PositionHydrogenStormShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "PositionHydrogenStormShield");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OwningTeamChange
// (Final, Native, Public)
// Parameters:
// class AHydrogenObjectiveActor*     Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NewTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              OldTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::OwningTeamChange(class AHydrogenObjectiveActor* Objective, uint8 NewTeam, uint8 OldTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "OwningTeamChange");

	Params::AFortAthenaMutator_Hydrogen_OwningTeamChange_Params Parms{};

	Parms.Objective = Objective;
	Parms.NewTeam = NewTeam;
	Parms.OldTeam = OldTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnRep_WinningTeam
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_Hydrogen::OnRep_WinningTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "OnRep_WinningTeam");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnRep_HydrogenTeamPointsChanged
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_Hydrogen::OnRep_HydrogenTeamPointsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "OnRep_HydrogenTeamPointsChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortSafeZoneInterface>SafeZoneInterfaceConst                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::OnGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterfaceConst, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "OnGamePhaseStepChanged");

	Params::AFortAthenaMutator_Hydrogen_OnGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterfaceConst = SafeZoneInterfaceConst;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.IsInStormShield
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     TestLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Hydrogen::IsInStormShield(const struct FVector& TestLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "IsInStormShield");

	Params::AFortAthenaMutator_Hydrogen_IsInStormShield_Params Parms{};

	Parms.TestLocation = TestLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GotoNextStormShieldNode
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_Hydrogen::GotoNextStormShieldNode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GotoNextStormShieldNode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveObjectiveAccolade
// (Final, Native, Public)
// Parameters:
// class AFortPlayerControllerAthena* FortController                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::GiveObjectiveAccolade(class AFortPlayerControllerAthena* FortController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GiveObjectiveAccolade");

	Params::AFortAthenaMutator_Hydrogen_GiveObjectiveAccolade_Params Parms{};

	Parms.FortController = FortController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveEOMBonusAccolade
// (Final, Native, Public)
// Parameters:

void AFortAthenaMutator_Hydrogen::GiveEOMBonusAccolade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GiveEOMBonusAccolade");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetTimeToNextNode
// (Final, Native, Protected)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortAthenaMutator_Hydrogen::GetTimeToNextNode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GetTimeToNextNode");

	Params::AFortAthenaMutator_Hydrogen_GetTimeToNextNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetStormSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortAthenaMutator_Hydrogen::GetStormSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GetStormSpeed");

	Params::AFortAthenaMutator_Hydrogen_GetStormSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetSortedActivePointIndices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      OutSortedIndices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::GetSortedActivePointIndices(TArray<int32>* OutSortedIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GetSortedActivePointIndices");

	Params::AFortAthenaMutator_Hydrogen_GetSortedActivePointIndices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSortedIndices != nullptr)
		*OutSortedIndices = std::move(Parms.OutSortedIndices);

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetOwnedCapturePointCount
// (Final, Native, Protected)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortAthenaMutator_Hydrogen::GetOwnedCapturePointCount(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GetOwnedCapturePointCount");

	Params::AFortAthenaMutator_Hydrogen_GetOwnedCapturePointCount_Params Parms{};

	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetNextActorOnPathLocation
// (Final, Native, Protected, HasDefaults)
// Parameters:
// int32                              InPathIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortAthenaMutator_Hydrogen::GetNextActorOnPathLocation(int32 InPathIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GetNextActorOnPathLocation");

	Params::AFortAthenaMutator_Hydrogen_GetNextActorOnPathLocation_Params Parms{};

	Parms.InPathIndex = InPathIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetAllCapturePoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AHydrogenObjectiveActor*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class AHydrogenObjectiveActor*> AFortAthenaMutator_Hydrogen::GetAllCapturePoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GetAllCapturePoints");

	Params::AFortAthenaMutator_Hydrogen_GetAllCapturePoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetActorOnPathLocation
// (Final, Native, Protected, HasDefaults)
// Parameters:
// int32                              InPathIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortAthenaMutator_Hydrogen::GetActorOnPathLocation(int32 InPathIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "GetActorOnPathLocation");

	Params::AFortAthenaMutator_Hydrogen_GetActorOnPathLocation_Params Parms{};

	Parms.InPathIndex = InPathIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.EndGame
// (Final, Native, Protected)
// Parameters:
// uint8                              Winner                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::EndGame(uint8 Winner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "EndGame");

	Params::AFortAthenaMutator_Hydrogen_EndGame_Params Parms{};

	Parms.Winner = Winner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.CheckVictoryPoints
// (Final, Native, Protected)
// Parameters:
// float                              TimePassed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::CheckVictoryPoints(float TimePassed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "CheckVictoryPoints");

	Params::AFortAthenaMutator_Hydrogen_CheckVictoryPoints_Params Parms{};

	Parms.TimePassed = TimePassed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasWinnerBeenDeclared
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Hydrogen::bHasWinnerBeenDeclared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "bHasWinnerBeenDeclared");

	Params::AFortAthenaMutator_Hydrogen_bHasWinnerBeenDeclared_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasStormStarted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Hydrogen::bHasStormStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "bHasStormStarted");

	Params::AFortAthenaMutator_Hydrogen_bHasStormStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.AddBonusVictoryPointsForLockedCapturePoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InTeam                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Hydrogen::AddBonusVictoryPointsForLockedCapturePoints(uint8 InTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "AddBonusVictoryPointsForLockedCapturePoints");

	Params::AFortAthenaMutator_Hydrogen_AddBonusVictoryPointsForLockedCapturePoints_Params Parms{};

	Parms.InTeam = InTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.ActivateTheStormShield
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_Hydrogen::ActivateTheStormShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Hydrogen", "ActivateTheStormShield");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class HydrogenRuntime.HydrogenObjectiveActor
// (Actor)

class UClass* AHydrogenObjectiveActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HydrogenObjectiveActor");

	return Clss;
}


// HydrogenObjectiveActor HydrogenRuntime.Default__HydrogenObjectiveActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AHydrogenObjectiveActor* AHydrogenObjectiveActor::GetDefaultObj()
{
	static class AHydrogenObjectiveActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AHydrogenObjectiveActor*>(AHydrogenObjectiveActor::StaticClass()->DefaultObject);

	return Default;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.WaitForMutator
// (Final, Native, Protected)
// Parameters:

void AHydrogenObjectiveActor::WaitForMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "WaitForMutator");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.SetUpMaterialInstanceDynamic
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FSlateBrush                 MapIconBrush                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    DrawBrushMID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AHydrogenObjectiveActor::SetUpMaterialInstanceDynamic(struct FSlateBrush* MapIconBrush, class UMaterialInstanceDynamic** DrawBrushMID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "SetUpMaterialInstanceDynamic");

	Params::AHydrogenObjectiveActor_SetUpMaterialInstanceDynamic_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MapIconBrush != nullptr)
		*MapIconBrush = std::move(Parms.MapIconBrush);

	if (DrawBrushMID != nullptr)
		*DrawBrushMID = Parms.DrawBrushMID;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.SetActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsActive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AHydrogenObjectiveActor::SetActive(bool bInIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "SetActive");

	Params::AHydrogenObjectiveActor_SetActive_Params Parms{};

	Parms.bInIsActive = bInIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.ProcessOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AHydrogenObjectiveActor::ProcessOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "ProcessOverlap");

	Params::AHydrogenObjectiveActor_ProcessOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.PlayContestedMapTimeline
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHydrogenObjectiveActor::PlayContestedMapTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "PlayContestedMapTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnTimelineFlashing
// (Final, Native, Protected)
// Parameters:
// float                              IconOpacity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AHydrogenObjectiveActor::OnTimelineFlashing(float IconOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "OnTimelineFlashing");

	Params::AHydrogenObjectiveActor_OnTimelineFlashing_Params Parms{};

	Parms.IconOpacity = IconOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_TeamsOnCapturePoint
// (Final, Native, Private)
// Parameters:

void AHydrogenObjectiveActor::OnRep_TeamsOnCapturePoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "OnRep_TeamsOnCapturePoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_OwningTeam
// (Final, Native, Private)
// Parameters:

void AHydrogenObjectiveActor::OnRep_OwningTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "OnRep_OwningTeam");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_HydrogenCaptureStateEnum
// (Final, Native, Private)
// Parameters:

void AHydrogenObjectiveActor::OnRep_HydrogenCaptureStateEnum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "OnRep_HydrogenCaptureStateEnum");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_bIsActive
// (Final, Native, Protected)
// Parameters:

void AHydrogenObjectiveActor::OnRep_bIsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "OnRep_bIsActive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnOverlapBegin
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AHydrogenObjectiveActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "OnOverlapBegin");

	Params::AHydrogenObjectiveActor_OnOverlapBegin_Params Parms{};

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


// Function HydrogenRuntime.HydrogenObjectiveActor.OnMutatorAvailable
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AHydrogenObjectiveActor::OnMutatorAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "OnMutatorAvailable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnComponentBeginOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                      OverlappedActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AHydrogenObjectiveActor::OnComponentBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "OnComponentBeginOverlap");

	Params::AHydrogenObjectiveActor_OnComponentBeginOverlap_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.GetIsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AHydrogenObjectiveActor::GetIsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "GetIsActive");

	Params::AHydrogenObjectiveActor_GetIsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.FlashIcon
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AHydrogenObjectiveActor::FlashIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "FlashIcon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HydrogenRuntime.HydrogenObjectiveActor.CheckForStorm
// (Final, Native, Protected)
// Parameters:

void AHydrogenObjectiveActor::CheckForStorm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HydrogenObjectiveActor", "CheckForStorm");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class HydrogenRuntime.HydrogenPathActor
// (Actor)

class UClass* AHydrogenPathActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HydrogenPathActor");

	return Clss;
}


// HydrogenPathActor HydrogenRuntime.Default__HydrogenPathActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AHydrogenPathActor* AHydrogenPathActor::GetDefaultObj()
{
	static class AHydrogenPathActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AHydrogenPathActor*>(AHydrogenPathActor::StaticClass()->DefaultObject);

	return Default;
}

}


