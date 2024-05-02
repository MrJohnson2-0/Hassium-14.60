#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Nickel.MissionGen_Nickel_C
// (None)

class UClass* UMissionGen_Nickel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Nickel_C");

	return Clss;
}


// MissionGen_Nickel_C MissionGen_Nickel.Default__MissionGen_Nickel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Nickel_C* UMissionGen_Nickel_C::GetDefaultObj()
{
	static class UMissionGen_Nickel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Nickel_C*>(UMissionGen_Nickel_C::StaticClass()->DefaultObject);

	return Default;
}

}


