#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_HighExplosives.MissionGen_HighExplosives_C
// (None)

class UClass* UMissionGen_HighExplosives_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_HighExplosives_C");

	return Clss;
}


// MissionGen_HighExplosives_C MissionGen_HighExplosives.Default__MissionGen_HighExplosives_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_HighExplosives_C* UMissionGen_HighExplosives_C::GetDefaultObj()
{
	static class UMissionGen_HighExplosives_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_HighExplosives_C*>(UMissionGen_HighExplosives_C::StaticClass()->DefaultObject);

	return Default;
}

}


