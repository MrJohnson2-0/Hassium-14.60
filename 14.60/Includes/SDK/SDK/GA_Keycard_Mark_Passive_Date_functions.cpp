#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Keycard_Mark_Passive_Date.GA_Keycard_Mark_Passive_Date_C
// (None)

class UClass* UGA_Keycard_Mark_Passive_Date_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Keycard_Mark_Passive_Date_C");

	return Clss;
}


// GA_Keycard_Mark_Passive_Date_C GA_Keycard_Mark_Passive_Date.Default__GA_Keycard_Mark_Passive_Date_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Keycard_Mark_Passive_Date_C* UGA_Keycard_Mark_Passive_Date_C::GetDefaultObj()
{
	static class UGA_Keycard_Mark_Passive_Date_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Keycard_Mark_Passive_Date_C*>(UGA_Keycard_Mark_Passive_Date_C::StaticClass()->DefaultObject);

	return Default;
}

}


