#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Keycard_Mark_Passive_Fortilla.GA_Keycard_Mark_Passive_Fortilla_C
// (None)

class UClass* UGA_Keycard_Mark_Passive_Fortilla_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Keycard_Mark_Passive_Fortilla_C");

	return Clss;
}


// GA_Keycard_Mark_Passive_Fortilla_C GA_Keycard_Mark_Passive_Fortilla.Default__GA_Keycard_Mark_Passive_Fortilla_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Keycard_Mark_Passive_Fortilla_C* UGA_Keycard_Mark_Passive_Fortilla_C::GetDefaultObj()
{
	static class UGA_Keycard_Mark_Passive_Fortilla_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Keycard_Mark_Passive_Fortilla_C*>(UGA_Keycard_Mark_Passive_Fortilla_C::StaticClass()->DefaultObject);

	return Default;
}

}


