#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HighTower_PlayerCameraMode_Date_ChainLightning_Targeting.HighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C
// (None)

class UClass* UHighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C");

	return Clss;
}


// HighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C HighTower_PlayerCameraMode_Date_ChainLightning_Targeting.Default__HighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C* UHighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C::GetDefaultObj()
{
	static class UHighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C*>(UHighTower_PlayerCameraMode_Date_ChainLightning_Targeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


