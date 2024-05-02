#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Argon_Duos.MissionGen_Argon_Duos_C
// (None)

class UClass* UMissionGen_Argon_Duos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Argon_Duos_C");

	return Clss;
}


// MissionGen_Argon_Duos_C MissionGen_Argon_Duos.Default__MissionGen_Argon_Duos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Argon_Duos_C* UMissionGen_Argon_Duos_C::GetDefaultObj()
{
	static class UMissionGen_Argon_Duos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Argon_Duos_C*>(UMissionGen_Argon_Duos_C::StaticClass()->DefaultObject);

	return Default;
}

}


