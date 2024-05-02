#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Camera_Shake_HighTower_Date_Boost.BP_Camera_Shake_HighTower_Date_Boost_C
// (None)

class UClass* UBP_Camera_Shake_HighTower_Date_Boost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Camera_Shake_HighTower_Date_Boost_C");

	return Clss;
}


// BP_Camera_Shake_HighTower_Date_Boost_C BP_Camera_Shake_HighTower_Date_Boost.Default__BP_Camera_Shake_HighTower_Date_Boost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Camera_Shake_HighTower_Date_Boost_C* UBP_Camera_Shake_HighTower_Date_Boost_C::GetDefaultObj()
{
	static class UBP_Camera_Shake_HighTower_Date_Boost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Camera_Shake_HighTower_Date_Boost_C*>(UBP_Camera_Shake_HighTower_Date_Boost_C::StaticClass()->DefaultObject);

	return Default;
}

}


