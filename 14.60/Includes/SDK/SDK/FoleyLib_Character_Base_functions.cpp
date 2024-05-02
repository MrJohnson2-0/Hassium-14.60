#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Character_Base.FoleyLib_Character_Base_C
// (None)

class UClass* UFoleyLib_Character_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Character_Base_C");

	return Clss;
}


// FoleyLib_Character_Base_C FoleyLib_Character_Base.Default__FoleyLib_Character_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Character_Base_C* UFoleyLib_Character_Base_C::GetDefaultObj()
{
	static class UFoleyLib_Character_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Character_Base_C*>(UFoleyLib_Character_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


