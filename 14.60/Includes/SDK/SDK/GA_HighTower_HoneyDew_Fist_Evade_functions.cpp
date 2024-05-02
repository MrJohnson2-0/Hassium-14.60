#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_HoneyDew_Fist_Evade.GA_HighTower_HoneyDew_Fist_Evade_C
// (None)

class UClass* UGA_HighTower_HoneyDew_Fist_Evade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_HoneyDew_Fist_Evade_C");

	return Clss;
}


// GA_HighTower_HoneyDew_Fist_Evade_C GA_HighTower_HoneyDew_Fist_Evade.Default__GA_HighTower_HoneyDew_Fist_Evade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_HoneyDew_Fist_Evade_C* UGA_HighTower_HoneyDew_Fist_Evade_C::GetDefaultObj()
{
	static class UGA_HighTower_HoneyDew_Fist_Evade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_HoneyDew_Fist_Evade_C*>(UGA_HighTower_HoneyDew_Fist_Evade_C::StaticClass()->DefaultObject);

	return Default;
}

}


