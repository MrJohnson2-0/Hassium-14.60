#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_HoneyDew_Fist_Stun.GA_HighTower_HoneyDew_Fist_Stun_C
// (None)

class UClass* UGA_HighTower_HoneyDew_Fist_Stun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_HoneyDew_Fist_Stun_C");

	return Clss;
}


// GA_HighTower_HoneyDew_Fist_Stun_C GA_HighTower_HoneyDew_Fist_Stun.Default__GA_HighTower_HoneyDew_Fist_Stun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_HoneyDew_Fist_Stun_C* UGA_HighTower_HoneyDew_Fist_Stun_C::GetDefaultObj()
{
	static class UGA_HighTower_HoneyDew_Fist_Stun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_HoneyDew_Fist_Stun_C*>(UGA_HighTower_HoneyDew_Fist_Stun_C::StaticClass()->DefaultObject);

	return Default;
}

}


