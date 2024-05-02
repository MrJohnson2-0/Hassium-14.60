#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_HoneyDew_Fist_Knockup.GA_HighTower_HoneyDew_Fist_Knockup_C
// (None)

class UClass* UGA_HighTower_HoneyDew_Fist_Knockup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_HoneyDew_Fist_Knockup_C");

	return Clss;
}


// GA_HighTower_HoneyDew_Fist_Knockup_C GA_HighTower_HoneyDew_Fist_Knockup.Default__GA_HighTower_HoneyDew_Fist_Knockup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_HoneyDew_Fist_Knockup_C* UGA_HighTower_HoneyDew_Fist_Knockup_C::GetDefaultObj()
{
	static class UGA_HighTower_HoneyDew_Fist_Knockup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_HoneyDew_Fist_Knockup_C*>(UGA_HighTower_HoneyDew_Fist_Knockup_C::StaticClass()->DefaultObject);

	return Default;
}

}


