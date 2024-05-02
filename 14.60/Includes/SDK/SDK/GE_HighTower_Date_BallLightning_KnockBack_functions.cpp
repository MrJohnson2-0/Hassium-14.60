#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_Date_BallLightning_KnockBack.GE_HighTower_Date_BallLightning_KnockBack_C
// (None)

class UClass* UGE_HighTower_Date_BallLightning_KnockBack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_Date_BallLightning_KnockBack_C");

	return Clss;
}


// GE_HighTower_Date_BallLightning_KnockBack_C GE_HighTower_Date_BallLightning_KnockBack.Default__GE_HighTower_Date_BallLightning_KnockBack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_Date_BallLightning_KnockBack_C* UGE_HighTower_Date_BallLightning_KnockBack_C::GetDefaultObj()
{
	static class UGE_HighTower_Date_BallLightning_KnockBack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_Date_BallLightning_KnockBack_C*>(UGE_HighTower_Date_BallLightning_KnockBack_C::StaticClass()->DefaultObject);

	return Default;
}

}


