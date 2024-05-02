#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_HidingProp_Teleport.Athena_PlayerCameraMode_HidingProp_Teleport_C
// (None)

class UClass* UAthena_PlayerCameraMode_HidingProp_Teleport_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_HidingProp_Teleport_C");

	return Clss;
}


// Athena_PlayerCameraMode_HidingProp_Teleport_C Athena_PlayerCameraMode_HidingProp_Teleport.Default__Athena_PlayerCameraMode_HidingProp_Teleport_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_HidingProp_Teleport_C* UAthena_PlayerCameraMode_HidingProp_Teleport_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_HidingProp_Teleport_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_HidingProp_Teleport_C*>(UAthena_PlayerCameraMode_HidingProp_Teleport_C::StaticClass()->DefaultObject);

	return Default;
}

}


