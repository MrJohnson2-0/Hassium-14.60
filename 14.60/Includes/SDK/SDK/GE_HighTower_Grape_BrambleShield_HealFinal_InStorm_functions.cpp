#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_Grape_BrambleShield_HealFinal_InStorm.GE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C
// (None)

class UClass* UGE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C");

	return Clss;
}


// GE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C GE_HighTower_Grape_BrambleShield_HealFinal_InStorm.Default__GE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C* UGE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C::GetDefaultObj()
{
	static class UGE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C*>(UGE_HighTower_Grape_BrambleShield_HealFinal_InStorm_C::StaticClass()->DefaultObject);

	return Default;
}

}


