#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_LowTower_Laurel_Shoot.GCN_LowTower_Laurel_Shoot_C
// (Actor)

class UClass* AGCN_LowTower_Laurel_Shoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_LowTower_Laurel_Shoot_C");

	return Clss;
}


// GCN_LowTower_Laurel_Shoot_C GCN_LowTower_Laurel_Shoot.Default__GCN_LowTower_Laurel_Shoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_LowTower_Laurel_Shoot_C* AGCN_LowTower_Laurel_Shoot_C::GetDefaultObj()
{
	static class AGCN_LowTower_Laurel_Shoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_LowTower_Laurel_Shoot_C*>(AGCN_LowTower_Laurel_Shoot_C::StaticClass()->DefaultObject);

	return Default;
}

}


