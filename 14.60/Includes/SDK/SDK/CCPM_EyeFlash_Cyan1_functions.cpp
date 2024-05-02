#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_EyeFlash_Cyan1.CCPM_EyeFlash_Cyan1_C
// (Actor)

class UClass* ACCPM_EyeFlash_Cyan1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_EyeFlash_Cyan1_C");

	return Clss;
}


// CCPM_EyeFlash_Cyan1_C CCPM_EyeFlash_Cyan1.Default__CCPM_EyeFlash_Cyan1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_EyeFlash_Cyan1_C* ACCPM_EyeFlash_Cyan1_C::GetDefaultObj()
{
	static class ACCPM_EyeFlash_Cyan1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_EyeFlash_Cyan1_C*>(ACCPM_EyeFlash_Cyan1_C::StaticClass()->DefaultObject);

	return Default;
}

}


