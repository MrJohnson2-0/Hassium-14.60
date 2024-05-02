#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Hightower_Grape.FoleyLib_Hightower_Grape_C
// (None)

class UClass* UFoleyLib_Hightower_Grape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Hightower_Grape_C");

	return Clss;
}


// FoleyLib_Hightower_Grape_C FoleyLib_Hightower_Grape.Default__FoleyLib_Hightower_Grape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Hightower_Grape_C* UFoleyLib_Hightower_Grape_C::GetDefaultObj()
{
	static class UFoleyLib_Hightower_Grape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Hightower_Grape_C*>(UFoleyLib_Hightower_Grape_C::StaticClass()->DefaultObject);

	return Default;
}

}


