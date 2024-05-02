#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Grape_BrambleShield.AbilityTooltip_Grape_BrambleShield_C
// (None)

class UClass* UAbilityTooltip_Grape_BrambleShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Grape_BrambleShield_C");

	return Clss;
}


// AbilityTooltip_Grape_BrambleShield_C AbilityTooltip_Grape_BrambleShield.Default__AbilityTooltip_Grape_BrambleShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Grape_BrambleShield_C* UAbilityTooltip_Grape_BrambleShield_C::GetDefaultObj()
{
	static class UAbilityTooltip_Grape_BrambleShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Grape_BrambleShield_C*>(UAbilityTooltip_Grape_BrambleShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


