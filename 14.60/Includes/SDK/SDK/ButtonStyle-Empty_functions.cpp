#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Empty.ButtonStyle-Empty_C
// (None)

class UClass* UButtonStyleMinusEmpty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Empty_C");

	return Clss;
}


// ButtonStyle-Empty_C ButtonStyle-Empty.Default__ButtonStyle-Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusEmpty_C* UButtonStyleMinusEmpty_C::GetDefaultObj()
{
	static class UButtonStyleMinusEmpty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusEmpty_C*>(UButtonStyleMinusEmpty_C::StaticClass()->DefaultObject);

	return Default;
}

}


