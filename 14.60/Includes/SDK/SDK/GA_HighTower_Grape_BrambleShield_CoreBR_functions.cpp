#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Grape_BrambleShield_CoreBR.GA_HighTower_Grape_BrambleShield_CoreBR_C
// (None)

class UClass* UGA_HighTower_Grape_BrambleShield_CoreBR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Grape_BrambleShield_CoreBR_C");

	return Clss;
}


// GA_HighTower_Grape_BrambleShield_CoreBR_C GA_HighTower_Grape_BrambleShield_CoreBR.Default__GA_HighTower_Grape_BrambleShield_CoreBR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Grape_BrambleShield_CoreBR_C* UGA_HighTower_Grape_BrambleShield_CoreBR_C::GetDefaultObj()
{
	static class UGA_HighTower_Grape_BrambleShield_CoreBR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Grape_BrambleShield_CoreBR_C*>(UGA_HighTower_Grape_BrambleShield_CoreBR_C::StaticClass()->DefaultObject);

	return Default;
}

}


