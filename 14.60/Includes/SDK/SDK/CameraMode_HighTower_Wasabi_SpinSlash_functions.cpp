#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraMode_HighTower_Wasabi_SpinSlash.CameraMode_HighTower_Wasabi_SpinSlash_C
// (None)

class UClass* UCameraMode_HighTower_Wasabi_SpinSlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraMode_HighTower_Wasabi_SpinSlash_C");

	return Clss;
}


// CameraMode_HighTower_Wasabi_SpinSlash_C CameraMode_HighTower_Wasabi_SpinSlash.Default__CameraMode_HighTower_Wasabi_SpinSlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraMode_HighTower_Wasabi_SpinSlash_C* UCameraMode_HighTower_Wasabi_SpinSlash_C::GetDefaultObj()
{
	static class UCameraMode_HighTower_Wasabi_SpinSlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraMode_HighTower_Wasabi_SpinSlash_C*>(UCameraMode_HighTower_Wasabi_SpinSlash_C::StaticClass()->DefaultObject);

	return Default;
}

}


