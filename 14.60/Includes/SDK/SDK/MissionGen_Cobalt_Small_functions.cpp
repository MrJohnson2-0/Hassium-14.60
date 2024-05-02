#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Cobalt_Small.MissionGen_Cobalt_Small_C
// (None)

class UClass* UMissionGen_Cobalt_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Cobalt_Small_C");

	return Clss;
}


// MissionGen_Cobalt_Small_C MissionGen_Cobalt_Small.Default__MissionGen_Cobalt_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Cobalt_Small_C* UMissionGen_Cobalt_Small_C::GetDefaultObj()
{
	static class UMissionGen_Cobalt_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Cobalt_Small_C*>(UMissionGen_Cobalt_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


