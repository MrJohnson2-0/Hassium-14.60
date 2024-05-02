#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_Grape_Bramble_Shield.Athena_PlayerCameraMode_Grape_Bramble_Shield_C
// (None)

class UClass* UAthena_PlayerCameraMode_Grape_Bramble_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_Grape_Bramble_Shield_C");

	return Clss;
}


// Athena_PlayerCameraMode_Grape_Bramble_Shield_C Athena_PlayerCameraMode_Grape_Bramble_Shield.Default__Athena_PlayerCameraMode_Grape_Bramble_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_Grape_Bramble_Shield_C* UAthena_PlayerCameraMode_Grape_Bramble_Shield_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_Grape_Bramble_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_Grape_Bramble_Shield_C*>(UAthena_PlayerCameraMode_Grape_Bramble_Shield_C::StaticClass()->DefaultObject);

	return Default;
}

}


