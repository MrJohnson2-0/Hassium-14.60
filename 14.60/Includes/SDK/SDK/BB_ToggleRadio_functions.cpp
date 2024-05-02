#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_ToggleRadio.BB_ToggleRadio_C
// (None)

class UClass* UBB_ToggleRadio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_ToggleRadio_C");

	return Clss;
}


// BB_ToggleRadio_C BB_ToggleRadio.Default__BB_ToggleRadio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_ToggleRadio_C* UBB_ToggleRadio_C::GetDefaultObj()
{
	static class UBB_ToggleRadio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_ToggleRadio_C*>(UBB_ToggleRadio_C::StaticClass()->DefaultObject);

	return Default;
}

}


