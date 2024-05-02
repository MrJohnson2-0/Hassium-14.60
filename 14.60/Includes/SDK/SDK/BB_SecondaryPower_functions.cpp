#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_SecondaryPower.BB_SecondaryPower_C
// (None)

class UClass* UBB_SecondaryPower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_SecondaryPower_C");

	return Clss;
}


// BB_SecondaryPower_C BB_SecondaryPower.Default__BB_SecondaryPower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_SecondaryPower_C* UBB_SecondaryPower_C::GetDefaultObj()
{
	static class UBB_SecondaryPower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_SecondaryPower_C*>(UBB_SecondaryPower_C::StaticClass()->DefaultObject);

	return Default;
}

}


