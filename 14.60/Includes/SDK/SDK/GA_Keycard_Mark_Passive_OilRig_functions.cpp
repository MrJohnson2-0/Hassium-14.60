#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Keycard_Mark_Passive_OilRig.GA_Keycard_Mark_Passive_OilRig_C
// (None)

class UClass* UGA_Keycard_Mark_Passive_OilRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Keycard_Mark_Passive_OilRig_C");

	return Clss;
}


// GA_Keycard_Mark_Passive_OilRig_C GA_Keycard_Mark_Passive_OilRig.Default__GA_Keycard_Mark_Passive_OilRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Keycard_Mark_Passive_OilRig_C* UGA_Keycard_Mark_Passive_OilRig_C::GetDefaultObj()
{
	static class UGA_Keycard_Mark_Passive_OilRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Keycard_Mark_Passive_OilRig_C*>(UGA_Keycard_Mark_Passive_OilRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


