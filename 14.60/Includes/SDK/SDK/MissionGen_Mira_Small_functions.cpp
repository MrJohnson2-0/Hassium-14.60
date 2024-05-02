#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Mira_Small.MissionGen_Mira_Small_C
// (None)

class UClass* UMissionGen_Mira_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Mira_Small_C");

	return Clss;
}


// MissionGen_Mira_Small_C MissionGen_Mira_Small.Default__MissionGen_Mira_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Mira_Small_C* UMissionGen_Mira_Small_C::GetDefaultObj()
{
	static class UMissionGen_Mira_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Mira_Small_C*>(UMissionGen_Mira_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


