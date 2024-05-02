#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_Prop_Campfire_WithPot.Athena_Prop_Campfire_WithPot_C
// (Actor)

class UClass* AAthena_Prop_Campfire_WithPot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_Prop_Campfire_WithPot_C");

	return Clss;
}


// Athena_Prop_Campfire_WithPot_C Athena_Prop_Campfire_WithPot.Default__Athena_Prop_Campfire_WithPot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_Prop_Campfire_WithPot_C* AAthena_Prop_Campfire_WithPot_C::GetDefaultObj()
{
	static class AAthena_Prop_Campfire_WithPot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_Prop_Campfire_WithPot_C*>(AAthena_Prop_Campfire_WithPot_C::StaticClass()->DefaultObject);

	return Default;
}

}


