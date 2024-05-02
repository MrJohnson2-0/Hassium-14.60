#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkyStrike_AimIndicator.BP_SkyStrike_AimIndicator_C
// (Actor)

class UClass* ABP_SkyStrike_AimIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkyStrike_AimIndicator_C");

	return Clss;
}


// BP_SkyStrike_AimIndicator_C BP_SkyStrike_AimIndicator.Default__BP_SkyStrike_AimIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkyStrike_AimIndicator_C* ABP_SkyStrike_AimIndicator_C::GetDefaultObj()
{
	static class ABP_SkyStrike_AimIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkyStrike_AimIndicator_C*>(ABP_SkyStrike_AimIndicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


