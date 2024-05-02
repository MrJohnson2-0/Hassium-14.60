#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GasketDataTracker_Date.GasketDataTracker_Date_C
// (None)

class UClass* UGasketDataTracker_Date_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GasketDataTracker_Date_C");

	return Clss;
}


// GasketDataTracker_Date_C GasketDataTracker_Date.Default__GasketDataTracker_Date_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGasketDataTracker_Date_C* UGasketDataTracker_Date_C::GetDefaultObj()
{
	static class UGasketDataTracker_Date_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGasketDataTracker_Date_C*>(UGasketDataTracker_Date_C::StaticClass()->DefaultObject);

	return Default;
}

}


