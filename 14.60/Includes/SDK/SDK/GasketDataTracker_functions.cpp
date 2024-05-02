#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GasketDataTracker.GasketDataTracker_C
// (None)

class UClass* UGasketDataTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GasketDataTracker_C");

	return Clss;
}


// GasketDataTracker_C GasketDataTracker.Default__GasketDataTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGasketDataTracker_C* UGasketDataTracker_C::GetDefaultObj()
{
	static class UGasketDataTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGasketDataTracker_C*>(UGasketDataTracker_C::StaticClass()->DefaultObject);

	return Default;
}

}


