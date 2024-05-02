#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Argon.MissionGen_Argon_C
// (None)

class UClass* UMissionGen_Argon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Argon_C");

	return Clss;
}


// MissionGen_Argon_C MissionGen_Argon.Default__MissionGen_Argon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Argon_C* UMissionGen_Argon_C::GetDefaultObj()
{
	static class UMissionGen_Argon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Argon_C*>(UMissionGen_Argon_C::StaticClass()->DefaultObject);

	return Default;
}

}


