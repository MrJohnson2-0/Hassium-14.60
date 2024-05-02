#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_UtilityPower.BB_UtilityPower_C
// (None)

class UClass* UBB_UtilityPower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_UtilityPower_C");

	return Clss;
}


// BB_UtilityPower_C BB_UtilityPower.Default__BB_UtilityPower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_UtilityPower_C* UBB_UtilityPower_C::GetDefaultObj()
{
	static class UBB_UtilityPower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_UtilityPower_C*>(UBB_UtilityPower_C::StaticClass()->DefaultObject);

	return Default;
}

}


