#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed.GE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C
// (None)

class UClass* UGE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C");

	return Clss;
}


// GE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C GE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed.Default__GE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C* UGE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C::GetDefaultObj()
{
	static class UGE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C*>(UGE_HighTower_Wasabi_Claws_AirHitDash_Landed_Movespeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


