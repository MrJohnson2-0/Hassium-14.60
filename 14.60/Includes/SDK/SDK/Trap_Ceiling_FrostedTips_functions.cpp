#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trap_Ceiling_FrostedTips.Trap_Ceiling_FrostedTips_C
// (Actor)

class UClass* ATrap_Ceiling_FrostedTips_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trap_Ceiling_FrostedTips_C");

	return Clss;
}


// Trap_Ceiling_FrostedTips_C Trap_Ceiling_FrostedTips.Default__Trap_Ceiling_FrostedTips_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrap_Ceiling_FrostedTips_C* ATrap_Ceiling_FrostedTips_C::GetDefaultObj()
{
	static class ATrap_Ceiling_FrostedTips_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrap_Ceiling_FrostedTips_C*>(ATrap_Ceiling_FrostedTips_C::StaticClass()->DefaultObject);

	return Default;
}

}


