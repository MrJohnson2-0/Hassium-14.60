#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Wasabi_SpinSlash_Pull.GA_HighTower_Wasabi_SpinSlash_Pull_C
// (None)

class UClass* UGA_HighTower_Wasabi_SpinSlash_Pull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Wasabi_SpinSlash_Pull_C");

	return Clss;
}


// GA_HighTower_Wasabi_SpinSlash_Pull_C GA_HighTower_Wasabi_SpinSlash_Pull.Default__GA_HighTower_Wasabi_SpinSlash_Pull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Wasabi_SpinSlash_Pull_C* UGA_HighTower_Wasabi_SpinSlash_Pull_C::GetDefaultObj()
{
	static class UGA_HighTower_Wasabi_SpinSlash_Pull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Wasabi_SpinSlash_Pull_C*>(UGA_HighTower_Wasabi_SpinSlash_Pull_C::StaticClass()->DefaultObject);

	return Default;
}

}


