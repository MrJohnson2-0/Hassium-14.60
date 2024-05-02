#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_HeldObject_TnTina_Cook.Athena_PlayerCameraMode_HeldObject_TnTina_Cook_C
// (None)

class UClass* UAthena_PlayerCameraMode_HeldObject_TnTina_Cook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_HeldObject_TnTina_Cook_C");

	return Clss;
}


// Athena_PlayerCameraMode_HeldObject_TnTina_Cook_C Athena_PlayerCameraMode_HeldObject_TnTina_Cook.Default__Athena_PlayerCameraMode_HeldObject_TnTina_Cook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_HeldObject_TnTina_Cook_C* UAthena_PlayerCameraMode_HeldObject_TnTina_Cook_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_HeldObject_TnTina_Cook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_HeldObject_TnTina_Cook_C*>(UAthena_PlayerCameraMode_HeldObject_TnTina_Cook_C::StaticClass()->DefaultObject);

	return Default;
}

}


