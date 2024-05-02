#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AbilityTooltip_Wasabi_Claws.AbilityTooltip_Wasabi_Claws_C
// (None)

class UClass* UAbilityTooltip_Wasabi_Claws_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTooltip_Wasabi_Claws_C");

	return Clss;
}


// AbilityTooltip_Wasabi_Claws_C AbilityTooltip_Wasabi_Claws.Default__AbilityTooltip_Wasabi_Claws_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilityTooltip_Wasabi_Claws_C* UAbilityTooltip_Wasabi_Claws_C::GetDefaultObj()
{
	static class UAbilityTooltip_Wasabi_Claws_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTooltip_Wasabi_Claws_C*>(UAbilityTooltip_Wasabi_Claws_C::StaticClass()->DefaultObject);

	return Default;
}

}


