#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_Wasabi_Claws_AirAttack_Dash.GCN_HighTower_Wasabi_Claws_AirAttack_Dash_C
// (None)

class UClass* UGCN_HighTower_Wasabi_Claws_AirAttack_Dash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_Wasabi_Claws_AirAttack_Dash_C");

	return Clss;
}


// GCN_HighTower_Wasabi_Claws_AirAttack_Dash_C GCN_HighTower_Wasabi_Claws_AirAttack_Dash.Default__GCN_HighTower_Wasabi_Claws_AirAttack_Dash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_Wasabi_Claws_AirAttack_Dash_C* UGCN_HighTower_Wasabi_Claws_AirAttack_Dash_C::GetDefaultObj()
{
	static class UGCN_HighTower_Wasabi_Claws_AirAttack_Dash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_Wasabi_Claws_AirAttack_Dash_C*>(UGCN_HighTower_Wasabi_Claws_AirAttack_Dash_C::StaticClass()->DefaultObject);

	return Default;
}

}


