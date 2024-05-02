#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_Wasabi_Claws_Finisher_Swing.GCN_HighTower_Wasabi_Claws_Finisher_Swing_C
// (None)

class UClass* UGCN_HighTower_Wasabi_Claws_Finisher_Swing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_Wasabi_Claws_Finisher_Swing_C");

	return Clss;
}


// GCN_HighTower_Wasabi_Claws_Finisher_Swing_C GCN_HighTower_Wasabi_Claws_Finisher_Swing.Default__GCN_HighTower_Wasabi_Claws_Finisher_Swing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_Wasabi_Claws_Finisher_Swing_C* UGCN_HighTower_Wasabi_Claws_Finisher_Swing_C::GetDefaultObj()
{
	static class UGCN_HighTower_Wasabi_Claws_Finisher_Swing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_Wasabi_Claws_Finisher_Swing_C*>(UGCN_HighTower_Wasabi_Claws_Finisher_Swing_C::StaticClass()->DefaultObject);

	return Default;
}

}


