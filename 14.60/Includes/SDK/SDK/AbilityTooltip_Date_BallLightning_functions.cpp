#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Date_BallLightning.AbilityTooltip_Date_BallLightning_C
// (None)

class UClass* UAbilityTooltip_Date_BallLightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Date_BallLightning_C");

	return Clss;
}


// AbilityTooltip_Date_BallLightning_C AbilityTooltip_Date_BallLightning.Default__AbilityTooltip_Date_BallLightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Date_BallLightning_C* UAbilityTooltip_Date_BallLightning_C::GetDefaultObj()
{
	static class UAbilityTooltip_Date_BallLightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Date_BallLightning_C*>(UAbilityTooltip_Date_BallLightning_C::StaticClass()->DefaultObject);

	return Default;
}

}


