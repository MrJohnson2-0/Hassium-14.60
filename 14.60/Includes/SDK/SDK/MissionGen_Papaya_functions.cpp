#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Papaya.MissionGen_Papaya_C
// (None)

class UClass* UMissionGen_Papaya_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Papaya_C");

	return Clss;
}


// MissionGen_Papaya_C MissionGen_Papaya.Default__MissionGen_Papaya_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Papaya_C* UMissionGen_Papaya_C::GetDefaultObj()
{
	static class UMissionGen_Papaya_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Papaya_C*>(UMissionGen_Papaya_C::StaticClass()->DefaultObject);

	return Default;
}

}


