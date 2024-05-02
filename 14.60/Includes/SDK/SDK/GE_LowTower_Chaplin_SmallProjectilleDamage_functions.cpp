#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LowTower_Chaplin_SmallProjectilleDamage.GE_LowTower_Chaplin_SmallProjectilleDamage_C
// (None)

class UClass* UGE_LowTower_Chaplin_SmallProjectilleDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LowTower_Chaplin_SmallProjectilleDamage_C");

	return Clss;
}


// GE_LowTower_Chaplin_SmallProjectilleDamage_C GE_LowTower_Chaplin_SmallProjectilleDamage.Default__GE_LowTower_Chaplin_SmallProjectilleDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LowTower_Chaplin_SmallProjectilleDamage_C* UGE_LowTower_Chaplin_SmallProjectilleDamage_C::GetDefaultObj()
{
	static class UGE_LowTower_Chaplin_SmallProjectilleDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LowTower_Chaplin_SmallProjectilleDamage_C*>(UGE_LowTower_Chaplin_SmallProjectilleDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


