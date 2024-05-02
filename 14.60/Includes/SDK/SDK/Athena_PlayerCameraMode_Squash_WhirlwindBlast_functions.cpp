#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_Squash_WhirlwindBlast.Athena_PlayerCameraMode_Squash_WhirlwindBlast_C
// (None)

class UClass* UAthena_PlayerCameraMode_Squash_WhirlwindBlast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_Squash_WhirlwindBlast_C");

	return Clss;
}


// Athena_PlayerCameraMode_Squash_WhirlwindBlast_C Athena_PlayerCameraMode_Squash_WhirlwindBlast.Default__Athena_PlayerCameraMode_Squash_WhirlwindBlast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_Squash_WhirlwindBlast_C* UAthena_PlayerCameraMode_Squash_WhirlwindBlast_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_Squash_WhirlwindBlast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_Squash_WhirlwindBlast_C*>(UAthena_PlayerCameraMode_Squash_WhirlwindBlast_C::StaticClass()->DefaultObject);

	return Default;
}

}


