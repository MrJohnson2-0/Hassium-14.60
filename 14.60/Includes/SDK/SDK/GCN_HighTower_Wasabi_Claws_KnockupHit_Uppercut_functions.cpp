#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut.GCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C
// (None)

class UClass* UGCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C");

	return Clss;
}


// GCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C GCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut.Default__GCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C* UGCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C::GetDefaultObj()
{
	static class UGCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C*>(UGCN_HighTower_Wasabi_Claws_KnockupHit_Uppercut_C::StaticClass()->DefaultObject);

	return Default;
}

}


