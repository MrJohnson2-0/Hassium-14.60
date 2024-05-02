#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WhipTracker_Hightower_Date_BallLightning.WhipTracker_Hightower_Date_BallLightning_C
// (None)

class UClass* UWhipTracker_Hightower_Date_BallLightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WhipTracker_Hightower_Date_BallLightning_C");

	return Clss;
}


// WhipTracker_Hightower_Date_BallLightning_C WhipTracker_Hightower_Date_BallLightning.Default__WhipTracker_Hightower_Date_BallLightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWhipTracker_Hightower_Date_BallLightning_C* UWhipTracker_Hightower_Date_BallLightning_C::GetDefaultObj()
{
	static class UWhipTracker_Hightower_Date_BallLightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWhipTracker_Hightower_Date_BallLightning_C*>(UWhipTracker_Hightower_Date_BallLightning_C::StaticClass()->DefaultObject);

	return Default;
}

}


