#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_UncleBrolly_Damage.CameraShake_UncleBrolly_Damage_C
// (None)

class UClass* UCameraShake_UncleBrolly_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_UncleBrolly_Damage_C");

	return Clss;
}


// CameraShake_UncleBrolly_Damage_C CameraShake_UncleBrolly_Damage.Default__CameraShake_UncleBrolly_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_UncleBrolly_Damage_C* UCameraShake_UncleBrolly_Damage_C::GetDefaultObj()
{
	static class UCameraShake_UncleBrolly_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_UncleBrolly_Damage_C*>(UCameraShake_UncleBrolly_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


