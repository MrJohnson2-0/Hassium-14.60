#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Soy_Boarding.AbilityTooltip_Soy_Boarding_C
// (None)

class UClass* UAbilityTooltip_Soy_Boarding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Soy_Boarding_C");

	return Clss;
}


// AbilityTooltip_Soy_Boarding_C AbilityTooltip_Soy_Boarding.Default__AbilityTooltip_Soy_Boarding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Soy_Boarding_C* UAbilityTooltip_Soy_Boarding_C::GetDefaultObj()
{
	static class UAbilityTooltip_Soy_Boarding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Soy_Boarding_C*>(UAbilityTooltip_Soy_Boarding_C::StaticClass()->DefaultObject);

	return Default;
}

}


