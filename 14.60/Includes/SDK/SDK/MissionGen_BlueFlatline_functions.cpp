#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_BlueFlatline.MissionGen_BlueFlatline_C
// (None)

class UClass* UMissionGen_BlueFlatline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_BlueFlatline_C");

	return Clss;
}


// MissionGen_BlueFlatline_C MissionGen_BlueFlatline.Default__MissionGen_BlueFlatline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_BlueFlatline_C* UMissionGen_BlueFlatline_C::GetDefaultObj()
{
	static class UMissionGen_BlueFlatline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_BlueFlatline_C*>(UMissionGen_BlueFlatline_C::StaticClass()->DefaultObject);

	return Default;
}

}


