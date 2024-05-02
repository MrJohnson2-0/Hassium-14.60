#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Antares.MissionGen_Antares_C
// (None)

class UClass* UMissionGen_Antares_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Antares_C");

	return Clss;
}


// MissionGen_Antares_C MissionGen_Antares.Default__MissionGen_Antares_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Antares_C* UMissionGen_Antares_C::GetDefaultObj()
{
	static class UMissionGen_Antares_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Antares_C*>(UMissionGen_Antares_C::StaticClass()->DefaultObject);

	return Default;
}

}


