#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_Interrogation_Map.Athena_PlayerCameraMode_Interrogation_Map_C
// (None)

class UClass* UAthena_PlayerCameraMode_Interrogation_Map_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_Interrogation_Map_C");

	return Clss;
}


// Athena_PlayerCameraMode_Interrogation_Map_C Athena_PlayerCameraMode_Interrogation_Map.Default__Athena_PlayerCameraMode_Interrogation_Map_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_Interrogation_Map_C* UAthena_PlayerCameraMode_Interrogation_Map_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_Interrogation_Map_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_Interrogation_Map_C*>(UAthena_PlayerCameraMode_Interrogation_Map_C::StaticClass()->DefaultObject);

	return Default;
}

}


