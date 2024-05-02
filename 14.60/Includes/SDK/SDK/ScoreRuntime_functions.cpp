#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ScoreRuntime.FortAthenaMutator_Score
// (Actor)

class UClass* AFortAthenaMutator_Score::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Score");

	return Clss;
}


// FortAthenaMutator_Score ScoreRuntime.Default__FortAthenaMutator_Score
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Score* AFortAthenaMutator_Score::GetDefaultObj()
{
	static class AFortAthenaMutator_Score* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Score*>(AFortAthenaMutator_Score::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoreRuntime.FortAthenaMutator_Score.OnMutatorGameplayEvent
// (Final, Native, Protected)
// Parameters:
// int32                              EventId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EventParam1                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EventParam2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EventParam3                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Score::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Score", "OnMutatorGameplayEvent");

	Params::AFortAthenaMutator_Score_OnMutatorGameplayEvent_Params Parms{};

	Parms.EventId = EventId;
	Parms.EventParam1 = EventParam1;
	Parms.EventParam2 = EventParam2;
	Parms.EventParam3 = EventParam3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScoreRuntime.FortAthenaMutator_Score.OnGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Score::OnGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Score", "OnGamePhaseStepChanged");

	Params::AFortAthenaMutator_Score_OnGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


