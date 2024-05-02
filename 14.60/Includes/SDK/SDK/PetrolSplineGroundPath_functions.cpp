#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetrolSplineGroundPath.PetrolSplineGroundPath_C
// (Actor)

class UClass* APetrolSplineGroundPath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetrolSplineGroundPath_C");

	return Clss;
}


// PetrolSplineGroundPath_C PetrolSplineGroundPath.Default__PetrolSplineGroundPath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APetrolSplineGroundPath_C* APetrolSplineGroundPath_C::GetDefaultObj()
{
	static class APetrolSplineGroundPath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APetrolSplineGroundPath_C*>(APetrolSplineGroundPath_C::StaticClass()->DefaultObject);

	return Default;
}

}


