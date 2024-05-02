#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_HoneyDew_Fist.AbilityTooltip_HoneyDew_Fist_C
// (None)

class UClass* UAbilityTooltip_HoneyDew_Fist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_HoneyDew_Fist_C");

	return Clss;
}


// AbilityTooltip_HoneyDew_Fist_C AbilityTooltip_HoneyDew_Fist.Default__AbilityTooltip_HoneyDew_Fist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_HoneyDew_Fist_C* UAbilityTooltip_HoneyDew_Fist_C::GetDefaultObj()
{
	static class UAbilityTooltip_HoneyDew_Fist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_HoneyDew_Fist_C*>(UAbilityTooltip_HoneyDew_Fist_C::StaticClass()->DefaultObject);

	return Default;
}

}


