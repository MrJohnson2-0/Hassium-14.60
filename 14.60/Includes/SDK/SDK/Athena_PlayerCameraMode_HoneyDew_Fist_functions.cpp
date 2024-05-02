#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_HoneyDew_Fist.Athena_PlayerCameraMode_HoneyDew_Fist_C
// (None)

class UClass* UAthena_PlayerCameraMode_HoneyDew_Fist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_HoneyDew_Fist_C");

	return Clss;
}


// Athena_PlayerCameraMode_HoneyDew_Fist_C Athena_PlayerCameraMode_HoneyDew_Fist.Default__Athena_PlayerCameraMode_HoneyDew_Fist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_HoneyDew_Fist_C* UAthena_PlayerCameraMode_HoneyDew_Fist_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_HoneyDew_Fist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_HoneyDew_Fist_C*>(UAthena_PlayerCameraMode_HoneyDew_Fist_C::StaticClass()->DefaultObject);

	return Default;
}

}


