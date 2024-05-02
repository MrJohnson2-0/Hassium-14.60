#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GasketDataTracker_Tomato.GasketDataTracker_Tomato_C
// (None)

class UClass* UGasketDataTracker_Tomato_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GasketDataTracker_Tomato_C");

	return Clss;
}


// GasketDataTracker_Tomato_C GasketDataTracker_Tomato.Default__GasketDataTracker_Tomato_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGasketDataTracker_Tomato_C* UGasketDataTracker_Tomato_C::GetDefaultObj()
{
	static class UGasketDataTracker_Tomato_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGasketDataTracker_Tomato_C*>(UGasketDataTracker_Tomato_C::StaticClass()->DefaultObject);

	return Default;
}

}


