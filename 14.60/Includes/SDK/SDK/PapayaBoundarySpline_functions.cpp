#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PapayaBoundarySpline.PapayaBoundarySpline_C
// (Actor)

class UClass* APapayaBoundarySpline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PapayaBoundarySpline_C");

	return Clss;
}


// PapayaBoundarySpline_C PapayaBoundarySpline.Default__PapayaBoundarySpline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APapayaBoundarySpline_C* APapayaBoundarySpline_C::GetDefaultObj()
{
	static class APapayaBoundarySpline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APapayaBoundarySpline_C*>(APapayaBoundarySpline_C::StaticClass()->DefaultObject);

	return Default;
}

}


