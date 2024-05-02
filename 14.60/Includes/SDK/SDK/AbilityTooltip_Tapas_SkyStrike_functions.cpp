#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Tapas_SkyStrike.AbilityTooltip_Tapas_SkyStrike_C
// (None)

class UClass* UAbilityTooltip_Tapas_SkyStrike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Tapas_SkyStrike_C");

	return Clss;
}


// AbilityTooltip_Tapas_SkyStrike_C AbilityTooltip_Tapas_SkyStrike.Default__AbilityTooltip_Tapas_SkyStrike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Tapas_SkyStrike_C* UAbilityTooltip_Tapas_SkyStrike_C::GetDefaultObj()
{
	static class UAbilityTooltip_Tapas_SkyStrike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Tapas_SkyStrike_C*>(UAbilityTooltip_Tapas_SkyStrike_C::StaticClass()->DefaultObject);

	return Default;
}

}


