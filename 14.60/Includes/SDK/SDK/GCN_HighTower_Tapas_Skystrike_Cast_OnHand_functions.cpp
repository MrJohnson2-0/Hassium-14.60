#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_Tapas_Skystrike_Cast_OnHand.GCN_HighTower_Tapas_Skystrike_Cast_OnHand_C
// (None)

class UClass* UGCN_HighTower_Tapas_Skystrike_Cast_OnHand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_Tapas_Skystrike_Cast_OnHand_C");

	return Clss;
}


// GCN_HighTower_Tapas_Skystrike_Cast_OnHand_C GCN_HighTower_Tapas_Skystrike_Cast_OnHand.Default__GCN_HighTower_Tapas_Skystrike_Cast_OnHand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_Tapas_Skystrike_Cast_OnHand_C* UGCN_HighTower_Tapas_Skystrike_Cast_OnHand_C::GetDefaultObj()
{
	static class UGCN_HighTower_Tapas_Skystrike_Cast_OnHand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_Tapas_Skystrike_Cast_OnHand_C*>(UGCN_HighTower_Tapas_Skystrike_Cast_OnHand_C::StaticClass()->DefaultObject);

	return Default;
}

}


