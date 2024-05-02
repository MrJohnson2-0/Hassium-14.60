#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Hightower_Vertigo.FoleyLib_Hightower_Vertigo_C
// (None)

class UClass* UFoleyLib_Hightower_Vertigo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Hightower_Vertigo_C");

	return Clss;
}


// FoleyLib_Hightower_Vertigo_C FoleyLib_Hightower_Vertigo.Default__FoleyLib_Hightower_Vertigo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Hightower_Vertigo_C* UFoleyLib_Hightower_Vertigo_C::GetDefaultObj()
{
	static class UFoleyLib_Hightower_Vertigo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Hightower_Vertigo_C*>(UFoleyLib_Hightower_Vertigo_C::StaticClass()->DefaultObject);

	return Default;
}

}


