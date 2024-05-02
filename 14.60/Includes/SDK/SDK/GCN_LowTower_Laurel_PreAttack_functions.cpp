#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_LowTower_Laurel_PreAttack.GCN_LowTower_Laurel_PreAttack_C
// (None)

class UClass* UGCN_LowTower_Laurel_PreAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_LowTower_Laurel_PreAttack_C");

	return Clss;
}


// GCN_LowTower_Laurel_PreAttack_C GCN_LowTower_Laurel_PreAttack.Default__GCN_LowTower_Laurel_PreAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_LowTower_Laurel_PreAttack_C* UGCN_LowTower_Laurel_PreAttack_C::GetDefaultObj()
{
	static class UGCN_LowTower_Laurel_PreAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_LowTower_Laurel_PreAttack_C*>(UGCN_LowTower_Laurel_PreAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


