#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Hydrogen.MissionGen_Hydrogen_C
// (None)

class UClass* UMissionGen_Hydrogen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Hydrogen_C");

	return Clss;
}


// MissionGen_Hydrogen_C MissionGen_Hydrogen.Default__MissionGen_Hydrogen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Hydrogen_C* UMissionGen_Hydrogen_C::GetDefaultObj()
{
	static class UMissionGen_Hydrogen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Hydrogen_C*>(UMissionGen_Hydrogen_C::StaticClass()->DefaultObject);

	return Default;
}

}


