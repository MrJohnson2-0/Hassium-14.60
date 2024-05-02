#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro
// (Actor)

class UClass* AFortAthenaMutator_HighTowerAbilityIntro::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_HighTowerAbilityIntro");

	return Clss;
}


// FortAthenaMutator_HighTowerAbilityIntro HighTowerRuntime.Default__FortAthenaMutator_HighTowerAbilityIntro
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_HighTowerAbilityIntro* AFortAthenaMutator_HighTowerAbilityIntro::GetDefaultObj()
{
	static class AFortAthenaMutator_HighTowerAbilityIntro* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_HighTowerAbilityIntro*>(AFortAthenaMutator_HighTowerAbilityIntro::StaticClass()->DefaultObject);

	return Default;
}


// Function HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro.OnBeginSkydiveFromBus
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerZone*   PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_HighTowerAbilityIntro::OnBeginSkydiveFromBus(class AFortPlayerControllerZone* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_HighTowerAbilityIntro", "OnBeginSkydiveFromBus");

	Params::AFortAthenaMutator_HighTowerAbilityIntro_OnBeginSkydiveFromBus_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HighTowerRuntime.FortItemLayerAnimInstance_DateGaunlets
// (None)

class UClass* UFortItemLayerAnimInstance_DateGaunlets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemLayerAnimInstance_DateGaunlets");

	return Clss;
}


// FortItemLayerAnimInstance_DateGaunlets HighTowerRuntime.Default__FortItemLayerAnimInstance_DateGaunlets
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemLayerAnimInstance_DateGaunlets* UFortItemLayerAnimInstance_DateGaunlets::GetDefaultObj()
{
	static class UFortItemLayerAnimInstance_DateGaunlets* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemLayerAnimInstance_DateGaunlets*>(UFortItemLayerAnimInstance_DateGaunlets::StaticClass()->DefaultObject);

	return Default;
}

}


