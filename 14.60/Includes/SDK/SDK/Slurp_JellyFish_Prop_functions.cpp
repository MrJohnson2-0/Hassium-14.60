#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Slurp_JellyFish_Prop.Slurp_JellyFish_Prop_C
// (Actor)

class UClass* ASlurp_JellyFish_Prop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Slurp_JellyFish_Prop_C");

	return Clss;
}


// Slurp_JellyFish_Prop_C Slurp_JellyFish_Prop.Default__Slurp_JellyFish_Prop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASlurp_JellyFish_Prop_C* ASlurp_JellyFish_Prop_C::GetDefaultObj()
{
	static class ASlurp_JellyFish_Prop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASlurp_JellyFish_Prop_C*>(ASlurp_JellyFish_Prop_C::StaticClass()->DefaultObject);

	return Default;
}

}


