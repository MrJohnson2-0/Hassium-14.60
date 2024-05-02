#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Uranium_P.MissionGen_Uranium_P_C
// (None)

class UClass* UMissionGen_Uranium_P_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Uranium_P_C");

	return Clss;
}


// MissionGen_Uranium_P_C MissionGen_Uranium_P.Default__MissionGen_Uranium_P_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Uranium_P_C* UMissionGen_Uranium_P_C::GetDefaultObj()
{
	static class UMissionGen_Uranium_P_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Uranium_P_C*>(UMissionGen_Uranium_P_C::StaticClass()->DefaultObject);

	return Default;
}

}


