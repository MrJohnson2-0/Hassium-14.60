#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_LDarkBlue.ButtonStyle-Skew_LDarkBlue_C
// (None)

class UClass* UButtonStyleMinusSkew_LDarkBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_LDarkBlue_C");

	return Clss;
}


// ButtonStyle-Skew_LDarkBlue_C ButtonStyle-Skew_LDarkBlue.Default__ButtonStyle-Skew_LDarkBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_LDarkBlue_C* UButtonStyleMinusSkew_LDarkBlue_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_LDarkBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_LDarkBlue_C*>(UButtonStyleMinusSkew_LDarkBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


