#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_HoneyDew_Swing_3.GCN_HighTower_HoneyDew_Swing_3_C
// (None)

class UClass* UGCN_HighTower_HoneyDew_Swing_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_HoneyDew_Swing_3_C");

	return Clss;
}


// GCN_HighTower_HoneyDew_Swing_3_C GCN_HighTower_HoneyDew_Swing_3.Default__GCN_HighTower_HoneyDew_Swing_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_HoneyDew_Swing_3_C* UGCN_HighTower_HoneyDew_Swing_3_C::GetDefaultObj()
{
	static class UGCN_HighTower_HoneyDew_Swing_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_HoneyDew_Swing_3_C*>(UGCN_HighTower_HoneyDew_Swing_3_C::StaticClass()->DefaultObject);

	return Default;
}

}


