#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_Vertigo_Punch_Pull.GCN_HighTower_Vertigo_Punch_Pull_C
// (None)

class UClass* UGCN_HighTower_Vertigo_Punch_Pull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_Vertigo_Punch_Pull_C");

	return Clss;
}


// GCN_HighTower_Vertigo_Punch_Pull_C GCN_HighTower_Vertigo_Punch_Pull.Default__GCN_HighTower_Vertigo_Punch_Pull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_Vertigo_Punch_Pull_C* UGCN_HighTower_Vertigo_Punch_Pull_C::GetDefaultObj()
{
	static class UGCN_HighTower_Vertigo_Punch_Pull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_Vertigo_Punch_Pull_C*>(UGCN_HighTower_Vertigo_Punch_Pull_C::StaticClass()->DefaultObject);

	return Default;
}

}


