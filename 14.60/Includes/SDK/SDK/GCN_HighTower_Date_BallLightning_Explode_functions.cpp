#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_HighTower_Date_BallLightning_Explode.GCN_HighTower_Date_BallLightning_Explode_C
// (None)

class UClass* UGCN_HighTower_Date_BallLightning_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_HighTower_Date_BallLightning_Explode_C");

	return Clss;
}


// GCN_HighTower_Date_BallLightning_Explode_C GCN_HighTower_Date_BallLightning_Explode.Default__GCN_HighTower_Date_BallLightning_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_HighTower_Date_BallLightning_Explode_C* UGCN_HighTower_Date_BallLightning_Explode_C::GetDefaultObj()
{
	static class UGCN_HighTower_Date_BallLightning_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_HighTower_Date_BallLightning_Explode_C*>(UGCN_HighTower_Date_BallLightning_Explode_C::StaticClass()->DefaultObject);

	return Default;
}

}


