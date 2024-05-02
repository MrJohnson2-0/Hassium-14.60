#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HighTower_Tomato_CameraShake.HighTower_Tomato_CameraShake_C
// (None)

class UClass* UHighTower_Tomato_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighTower_Tomato_CameraShake_C");

	return Clss;
}


// HighTower_Tomato_CameraShake_C HighTower_Tomato_CameraShake.Default__HighTower_Tomato_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHighTower_Tomato_CameraShake_C* UHighTower_Tomato_CameraShake_C::GetDefaultObj()
{
	static class UHighTower_Tomato_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighTower_Tomato_CameraShake_C*>(UHighTower_Tomato_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


