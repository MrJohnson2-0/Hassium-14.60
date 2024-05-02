#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Tomato_Repulsor.AbilityTooltip_Tomato_Repulsor_C
// (None)

class UClass* UAbilityTooltip_Tomato_Repulsor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Tomato_Repulsor_C");

	return Clss;
}


// AbilityTooltip_Tomato_Repulsor_C AbilityTooltip_Tomato_Repulsor.Default__AbilityTooltip_Tomato_Repulsor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Tomato_Repulsor_C* UAbilityTooltip_Tomato_Repulsor_C::GetDefaultObj()
{
	static class UAbilityTooltip_Tomato_Repulsor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Tomato_Repulsor_C*>(UAbilityTooltip_Tomato_Repulsor_C::StaticClass()->DefaultObject);

	return Default;
}

}


