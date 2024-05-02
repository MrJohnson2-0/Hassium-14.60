#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_skill_phoebe_bot_DBNO.AI_skill_phoebe_bot_DBNO_C
// (None)

class UClass* UAI_skill_phoebe_bot_DBNO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_skill_phoebe_bot_DBNO_C");

	return Clss;
}


// AI_skill_phoebe_bot_DBNO_C AI_skill_phoebe_bot_DBNO.Default__AI_skill_phoebe_bot_DBNO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_skill_phoebe_bot_DBNO_C* UAI_skill_phoebe_bot_DBNO_C::GetDefaultObj()
{
	static class UAI_skill_phoebe_bot_DBNO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_skill_phoebe_bot_DBNO_C*>(UAI_skill_phoebe_bot_DBNO_C::StaticClass()->DefaultObject);

	return Default;
}

}


