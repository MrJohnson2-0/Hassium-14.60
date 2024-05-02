#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingTethered.Athena_PlayerCameraModeTargetingTethered_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingTethered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingTethered_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingTethered_C Athena_PlayerCameraModeTargetingTethered.Default__Athena_PlayerCameraModeTargetingTethered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingTethered_C* UAthena_PlayerCameraModeTargetingTethered_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingTethered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingTethered_C*>(UAthena_PlayerCameraModeTargetingTethered_C::StaticClass()->DefaultObject);

	return Default;
}

}


