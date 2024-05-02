#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_York.FoleyLib_York_C
// (None)

class UClass* UFoleyLib_York_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_York_C");

	return Clss;
}


// FoleyLib_York_C FoleyLib_York.Default__FoleyLib_York_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_York_C* UFoleyLib_York_C::GetDefaultObj()
{
	static class UFoleyLib_York_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_York_C*>(UFoleyLib_York_C::StaticClass()->DefaultObject);

	return Default;
}

}


