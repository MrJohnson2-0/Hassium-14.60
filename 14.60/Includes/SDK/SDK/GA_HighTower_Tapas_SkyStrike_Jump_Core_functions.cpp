#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Tapas_SkyStrike_Jump_Core.GA_HighTower_Tapas_SkyStrike_Jump_Core_C
// (None)

class UClass* UGA_HighTower_Tapas_SkyStrike_Jump_Core_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Tapas_SkyStrike_Jump_Core_C");

	return Clss;
}


// GA_HighTower_Tapas_SkyStrike_Jump_Core_C GA_HighTower_Tapas_SkyStrike_Jump_Core.Default__GA_HighTower_Tapas_SkyStrike_Jump_Core_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Tapas_SkyStrike_Jump_Core_C* UGA_HighTower_Tapas_SkyStrike_Jump_Core_C::GetDefaultObj()
{
	static class UGA_HighTower_Tapas_SkyStrike_Jump_Core_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Tapas_SkyStrike_Jump_Core_C*>(UGA_HighTower_Tapas_SkyStrike_Jump_Core_C::StaticClass()->DefaultObject);

	return Default;
}

}


