#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LowTowerDataTracker.LowTowerDataTracker_C
// (None)

class UClass* ULowTowerDataTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowTowerDataTracker_C");

	return Clss;
}


// LowTowerDataTracker_C LowTowerDataTracker.Default__LowTowerDataTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULowTowerDataTracker_C* ULowTowerDataTracker_C::GetDefaultObj()
{
	static class ULowTowerDataTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowTowerDataTracker_C*>(ULowTowerDataTracker_C::StaticClass()->DefaultObject);

	return Default;
}

}


