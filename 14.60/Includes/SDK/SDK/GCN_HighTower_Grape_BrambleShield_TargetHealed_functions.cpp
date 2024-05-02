#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_Grape_BrambleShield_TargetHealed.GCN_HighTower_Grape_BrambleShield_TargetHealed_C
// (None)

class UClass* UGCN_HighTower_Grape_BrambleShield_TargetHealed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_Grape_BrambleShield_TargetHealed_C");

	return Clss;
}


// GCN_HighTower_Grape_BrambleShield_TargetHealed_C GCN_HighTower_Grape_BrambleShield_TargetHealed.Default__GCN_HighTower_Grape_BrambleShield_TargetHealed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_Grape_BrambleShield_TargetHealed_C* UGCN_HighTower_Grape_BrambleShield_TargetHealed_C::GetDefaultObj()
{
	static class UGCN_HighTower_Grape_BrambleShield_TargetHealed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_Grape_BrambleShield_TargetHealed_C*>(UGCN_HighTower_Grape_BrambleShield_TargetHealed_C::StaticClass()->DefaultObject);

	return Default;
}

}


