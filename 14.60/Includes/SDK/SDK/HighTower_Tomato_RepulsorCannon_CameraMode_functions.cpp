#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HighTower_Tomato_RepulsorCannon_CameraMode.HighTower_Tomato_RepulsorCannon_CameraMode_C
// (None)

class UClass* UHighTower_Tomato_RepulsorCannon_CameraMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighTower_Tomato_RepulsorCannon_CameraMode_C");

	return Clss;
}


// HighTower_Tomato_RepulsorCannon_CameraMode_C HighTower_Tomato_RepulsorCannon_CameraMode.Default__HighTower_Tomato_RepulsorCannon_CameraMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHighTower_Tomato_RepulsorCannon_CameraMode_C* UHighTower_Tomato_RepulsorCannon_CameraMode_C::GetDefaultObj()
{
	static class UHighTower_Tomato_RepulsorCannon_CameraMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighTower_Tomato_RepulsorCannon_CameraMode_C*>(UHighTower_Tomato_RepulsorCannon_CameraMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


