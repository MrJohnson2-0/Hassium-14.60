#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Tomato_RepulsorCannon.AbilityTooltip_Tomato_RepulsorCannon_C
// (None)

class UClass* UAbilityTooltip_Tomato_RepulsorCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Tomato_RepulsorCannon_C");

	return Clss;
}


// AbilityTooltip_Tomato_RepulsorCannon_C AbilityTooltip_Tomato_RepulsorCannon.Default__AbilityTooltip_Tomato_RepulsorCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Tomato_RepulsorCannon_C* UAbilityTooltip_Tomato_RepulsorCannon_C::GetDefaultObj()
{
	static class UAbilityTooltip_Tomato_RepulsorCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Tomato_RepulsorCannon_C*>(UAbilityTooltip_Tomato_RepulsorCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


