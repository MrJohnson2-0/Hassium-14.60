#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Embers.FoleyLib_Embers_C
// (None)

class UClass* UFoleyLib_Embers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Embers_C");

	return Clss;
}


// FoleyLib_Embers_C FoleyLib_Embers.Default__FoleyLib_Embers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Embers_C* UFoleyLib_Embers_C::GetDefaultObj()
{
	static class UFoleyLib_Embers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Embers_C*>(UFoleyLib_Embers_C::StaticClass()->DefaultObject);

	return Default;
}

}


