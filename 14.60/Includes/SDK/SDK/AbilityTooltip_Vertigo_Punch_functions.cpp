#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Vertigo_Punch.AbilityTooltip_Vertigo_Punch_C
// (None)

class UClass* UAbilityTooltip_Vertigo_Punch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Vertigo_Punch_C");

	return Clss;
}


// AbilityTooltip_Vertigo_Punch_C AbilityTooltip_Vertigo_Punch.Default__AbilityTooltip_Vertigo_Punch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Vertigo_Punch_C* UAbilityTooltip_Vertigo_Punch_C::GetDefaultObj()
{
	static class UAbilityTooltip_Vertigo_Punch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Vertigo_Punch_C*>(UAbilityTooltip_Vertigo_Punch_C::StaticClass()->DefaultObject);

	return Default;
}

}


