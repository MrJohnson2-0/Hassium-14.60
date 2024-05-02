#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WhipTracker_Lowtower_Chaplin.WhipTracker_Lowtower_Chaplin_C
// (None)

class UClass* UWhipTracker_Lowtower_Chaplin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WhipTracker_Lowtower_Chaplin_C");

	return Clss;
}


// WhipTracker_Lowtower_Chaplin_C WhipTracker_Lowtower_Chaplin.Default__WhipTracker_Lowtower_Chaplin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWhipTracker_Lowtower_Chaplin_C* UWhipTracker_Lowtower_Chaplin_C::GetDefaultObj()
{
	static class UWhipTracker_Lowtower_Chaplin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWhipTracker_Lowtower_Chaplin_C*>(UWhipTracker_Lowtower_Chaplin_C::StaticClass()->DefaultObject);

	return Default;
}

}


