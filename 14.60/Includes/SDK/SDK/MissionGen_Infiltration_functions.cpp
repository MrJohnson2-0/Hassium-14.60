#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Infiltration.MissionGen_Infiltration_C
// (None)

class UClass* UMissionGen_Infiltration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Infiltration_C");

	return Clss;
}


// MissionGen_Infiltration_C MissionGen_Infiltration.Default__MissionGen_Infiltration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Infiltration_C* UMissionGen_Infiltration_C::GetDefaultObj()
{
	static class UMissionGen_Infiltration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Infiltration_C*>(UMissionGen_Infiltration_C::StaticClass()->DefaultObject);

	return Default;
}

}


