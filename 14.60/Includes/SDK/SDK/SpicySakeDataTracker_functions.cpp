#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpicySakeDataTracker.SpicySakeDataTracker_C
// (None)

class UClass* USpicySakeDataTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpicySakeDataTracker_C");

	return Clss;
}


// SpicySakeDataTracker_C SpicySakeDataTracker.Default__SpicySakeDataTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpicySakeDataTracker_C* USpicySakeDataTracker_C::GetDefaultObj()
{
	static class USpicySakeDataTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpicySakeDataTracker_C*>(USpicySakeDataTracker_C::StaticClass()->DefaultObject);

	return Default;
}

}


