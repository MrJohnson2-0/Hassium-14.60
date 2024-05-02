#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Respawn_Op.MissionGen_Respawn_Op_C
// (None)

class UClass* UMissionGen_Respawn_Op_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Respawn_Op_C");

	return Clss;
}


// MissionGen_Respawn_Op_C MissionGen_Respawn_Op.Default__MissionGen_Respawn_Op_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Respawn_Op_C* UMissionGen_Respawn_Op_C::GetDefaultObj()
{
	static class UMissionGen_Respawn_Op_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Respawn_Op_C*>(UMissionGen_Respawn_Op_C::StaticClass()->DefaultObject);

	return Default;
}

}


