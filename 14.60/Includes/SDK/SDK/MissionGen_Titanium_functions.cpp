#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Titanium.MissionGen_Titanium_C
// (None)

class UClass* UMissionGen_Titanium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Titanium_C");

	return Clss;
}


// MissionGen_Titanium_C MissionGen_Titanium.Default__MissionGen_Titanium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Titanium_C* UMissionGen_Titanium_C::GetDefaultObj()
{
	static class UMissionGen_Titanium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Titanium_C*>(UMissionGen_Titanium_C::StaticClass()->DefaultObject);

	return Default;
}

}


