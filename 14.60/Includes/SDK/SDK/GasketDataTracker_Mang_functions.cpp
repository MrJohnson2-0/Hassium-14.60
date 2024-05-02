#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GasketDataTracker_Mang.GasketDataTracker_Mang_C
// (None)

class UClass* UGasketDataTracker_Mang_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GasketDataTracker_Mang_C");

	return Clss;
}


// GasketDataTracker_Mang_C GasketDataTracker_Mang.Default__GasketDataTracker_Mang_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGasketDataTracker_Mang_C* UGasketDataTracker_Mang_C::GetDefaultObj()
{
	static class UGasketDataTracker_Mang_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGasketDataTracker_Mang_C*>(UGasketDataTracker_Mang_C::StaticClass()->DefaultObject);

	return Default;
}

}


