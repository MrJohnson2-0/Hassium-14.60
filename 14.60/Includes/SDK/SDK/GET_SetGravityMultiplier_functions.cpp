#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_SetGravityMultiplier.GET_SetGravityMultiplier_C
// (None)

class UClass* UGET_SetGravityMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_SetGravityMultiplier_C");

	return Clss;
}


// GET_SetGravityMultiplier_C GET_SetGravityMultiplier.Default__GET_SetGravityMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_SetGravityMultiplier_C* UGET_SetGravityMultiplier_C::GetDefaultObj()
{
	static class UGET_SetGravityMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_SetGravityMultiplier_C*>(UGET_SetGravityMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


