#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Plum_KineticAbs.AbilityTooltip_Plum_KineticAbs_C
// (None)

class UClass* UAbilityTooltip_Plum_KineticAbs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Plum_KineticAbs_C");

	return Clss;
}


// AbilityTooltip_Plum_KineticAbs_C AbilityTooltip_Plum_KineticAbs.Default__AbilityTooltip_Plum_KineticAbs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Plum_KineticAbs_C* UAbilityTooltip_Plum_KineticAbs_C::GetDefaultObj()
{
	static class UAbilityTooltip_Plum_KineticAbs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Plum_KineticAbs_C*>(UAbilityTooltip_Plum_KineticAbs_C::StaticClass()->DefaultObject);

	return Default;
}

}


