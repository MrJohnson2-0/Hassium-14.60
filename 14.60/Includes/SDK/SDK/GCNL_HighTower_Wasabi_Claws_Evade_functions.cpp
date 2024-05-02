#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_HighTower_Wasabi_Claws_Evade.GCNL_HighTower_Wasabi_Claws_Evade_C
// (Actor)

class UClass* AGCNL_HighTower_Wasabi_Claws_Evade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_HighTower_Wasabi_Claws_Evade_C");

	return Clss;
}


// GCNL_HighTower_Wasabi_Claws_Evade_C GCNL_HighTower_Wasabi_Claws_Evade.Default__GCNL_HighTower_Wasabi_Claws_Evade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_HighTower_Wasabi_Claws_Evade_C* AGCNL_HighTower_Wasabi_Claws_Evade_C::GetDefaultObj()
{
	static class AGCNL_HighTower_Wasabi_Claws_Evade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_HighTower_Wasabi_Claws_Evade_C*>(AGCNL_HighTower_Wasabi_Claws_Evade_C::StaticClass()->DefaultObject);

	return Default;
}

}


