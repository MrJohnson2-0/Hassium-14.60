#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GasketDataTracker_Wasabi.GasketDataTracker_Wasabi_C
// (None)

class UClass* UGasketDataTracker_Wasabi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GasketDataTracker_Wasabi_C");

	return Clss;
}


// GasketDataTracker_Wasabi_C GasketDataTracker_Wasabi.Default__GasketDataTracker_Wasabi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGasketDataTracker_Wasabi_C* UGasketDataTracker_Wasabi_C::GetDefaultObj()
{
	static class UGasketDataTracker_Wasabi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGasketDataTracker_Wasabi_C*>(UGasketDataTracker_Wasabi_C::StaticClass()->DefaultObject);

	return Default;
}

}


