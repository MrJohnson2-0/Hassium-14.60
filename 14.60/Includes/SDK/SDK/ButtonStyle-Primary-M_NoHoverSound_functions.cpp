#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-M_NoHoverSound.ButtonStyle-Primary-M_NoHoverSound_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusM_NoHoverSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-M_NoHoverSound_C");

	return Clss;
}


// ButtonStyle-Primary-M_NoHoverSound_C ButtonStyle-Primary-M_NoHoverSound.Default__ButtonStyle-Primary-M_NoHoverSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusM_NoHoverSound_C* UButtonStyleMinusPrimaryMinusM_NoHoverSound_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusM_NoHoverSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusM_NoHoverSound_C*>(UButtonStyleMinusPrimaryMinusM_NoHoverSound_C::StaticClass()->DefaultObject);

	return Default;
}

}


