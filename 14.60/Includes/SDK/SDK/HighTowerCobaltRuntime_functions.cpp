#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HighTowerCobaltRuntime.FortAthenaMutator_CobaltHighTower
// (Actor)

class UClass* AFortAthenaMutator_CobaltHighTower::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_CobaltHighTower");

	return Clss;
}


// FortAthenaMutator_CobaltHighTower HighTowerCobaltRuntime.Default__FortAthenaMutator_CobaltHighTower
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_CobaltHighTower* AFortAthenaMutator_CobaltHighTower::GetDefaultObj()
{
	static class AFortAthenaMutator_CobaltHighTower* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_CobaltHighTower*>(AFortAthenaMutator_CobaltHighTower::StaticClass()->DefaultObject);

	return Default;
}

}


