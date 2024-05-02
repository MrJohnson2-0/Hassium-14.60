#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Cobalt_Small_Test.MissionGen_Cobalt_Small_Test_C
// (None)

class UClass* UMissionGen_Cobalt_Small_Test_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Cobalt_Small_Test_C");

	return Clss;
}


// MissionGen_Cobalt_Small_Test_C MissionGen_Cobalt_Small_Test.Default__MissionGen_Cobalt_Small_Test_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Cobalt_Small_Test_C* UMissionGen_Cobalt_Small_Test_C::GetDefaultObj()
{
	static class UMissionGen_Cobalt_Small_Test_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Cobalt_Small_Test_C*>(UMissionGen_Cobalt_Small_Test_C::StaticClass()->DefaultObject);

	return Default;
}

}


