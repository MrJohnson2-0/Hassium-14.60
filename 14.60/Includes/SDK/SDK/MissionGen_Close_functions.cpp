#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Close.MissionGen_Close_C
// (None)

class UClass* UMissionGen_Close_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Close_C");

	return Clss;
}


// MissionGen_Close_C MissionGen_Close.Default__MissionGen_Close_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Close_C* UMissionGen_Close_C::GetDefaultObj()
{
	static class UMissionGen_Close_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Close_C*>(UMissionGen_Close_C::StaticClass()->DefaultObject);

	return Default;
}

}


