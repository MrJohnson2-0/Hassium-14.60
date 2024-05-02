#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NickelRuntime.FortAthenaMutator_Nickel
// (Actor)

class UClass* AFortAthenaMutator_Nickel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Nickel");

	return Clss;
}


// FortAthenaMutator_Nickel NickelRuntime.Default__FortAthenaMutator_Nickel
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Nickel* AFortAthenaMutator_Nickel::GetDefaultObj()
{
	static class AFortAthenaMutator_Nickel* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Nickel*>(AFortAthenaMutator_Nickel::StaticClass()->DefaultObject);

	return Default;
}

}


