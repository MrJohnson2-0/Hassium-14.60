#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_HighTower_Date_BallLightning_PrefireLoop.GCNL_HighTower_Date_BallLightning_PrefireLoop_C
// (Actor)

class UClass* AGCNL_HighTower_Date_BallLightning_PrefireLoop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_HighTower_Date_BallLightning_PrefireLoop_C");

	return Clss;
}


// GCNL_HighTower_Date_BallLightning_PrefireLoop_C GCNL_HighTower_Date_BallLightning_PrefireLoop.Default__GCNL_HighTower_Date_BallLightning_PrefireLoop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_HighTower_Date_BallLightning_PrefireLoop_C* AGCNL_HighTower_Date_BallLightning_PrefireLoop_C::GetDefaultObj()
{
	static class AGCNL_HighTower_Date_BallLightning_PrefireLoop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_HighTower_Date_BallLightning_PrefireLoop_C*>(AGCNL_HighTower_Date_BallLightning_PrefireLoop_C::StaticClass()->DefaultObject);

	return Default;
}

}


