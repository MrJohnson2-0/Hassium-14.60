#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_BattleLab_Fortnitemares.MissionGen_BattleLab_Fortnitemares_C
// (None)

class UClass* UMissionGen_BattleLab_Fortnitemares_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_BattleLab_Fortnitemares_C");

	return Clss;
}


// MissionGen_BattleLab_Fortnitemares_C MissionGen_BattleLab_Fortnitemares.Default__MissionGen_BattleLab_Fortnitemares_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_BattleLab_Fortnitemares_C* UMissionGen_BattleLab_Fortnitemares_C::GetDefaultObj()
{
	static class UMissionGen_BattleLab_Fortnitemares_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_BattleLab_Fortnitemares_C*>(UMissionGen_BattleLab_Fortnitemares_C::StaticClass()->DefaultObject);

	return Default;
}

}


