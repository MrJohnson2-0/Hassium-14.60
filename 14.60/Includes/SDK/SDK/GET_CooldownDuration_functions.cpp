#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_CooldownDuration.GET_CooldownDuration_C
// (None)

class UClass* UGET_CooldownDuration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_CooldownDuration_C");

	return Clss;
}


// GET_CooldownDuration_C GET_CooldownDuration.Default__GET_CooldownDuration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_CooldownDuration_C* UGET_CooldownDuration_C::GetDefaultObj()
{
	static class UGET_CooldownDuration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_CooldownDuration_C*>(UGET_CooldownDuration_C::StaticClass()->DefaultObject);

	return Default;
}

}


