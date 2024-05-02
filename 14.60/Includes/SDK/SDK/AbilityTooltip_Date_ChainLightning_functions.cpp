#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Date_ChainLightning.AbilityTooltip_Date_ChainLightning_C
// (None)

class UClass* UAbilityTooltip_Date_ChainLightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Date_ChainLightning_C");

	return Clss;
}


// AbilityTooltip_Date_ChainLightning_C AbilityTooltip_Date_ChainLightning.Default__AbilityTooltip_Date_ChainLightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Date_ChainLightning_C* UAbilityTooltip_Date_ChainLightning_C::GetDefaultObj()
{
	static class UAbilityTooltip_Date_ChainLightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Date_ChainLightning_C*>(UAbilityTooltip_Date_ChainLightning_C::StaticClass()->DefaultObject);

	return Default;
}

}


