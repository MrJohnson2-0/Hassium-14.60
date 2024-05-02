#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Squash_WhirlwindBlast.AbilityTooltip_Squash_WhirlwindBlast_C
// (None)

class UClass* UAbilityTooltip_Squash_WhirlwindBlast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Squash_WhirlwindBlast_C");

	return Clss;
}


// AbilityTooltip_Squash_WhirlwindBlast_C AbilityTooltip_Squash_WhirlwindBlast.Default__AbilityTooltip_Squash_WhirlwindBlast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Squash_WhirlwindBlast_C* UAbilityTooltip_Squash_WhirlwindBlast_C::GetDefaultObj()
{
	static class UAbilityTooltip_Squash_WhirlwindBlast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Squash_WhirlwindBlast_C*>(UAbilityTooltip_Squash_WhirlwindBlast_C::StaticClass()->DefaultObject);

	return Default;
}

}


