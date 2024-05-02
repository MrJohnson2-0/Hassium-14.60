#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Hightower_HoneyDew_Fist_Mantis.GA_Hightower_HoneyDew_Fist_Mantis_C
// (None)

class UClass* UGA_Hightower_HoneyDew_Fist_Mantis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Hightower_HoneyDew_Fist_Mantis_C");

	return Clss;
}


// GA_Hightower_HoneyDew_Fist_Mantis_C GA_Hightower_HoneyDew_Fist_Mantis.Default__GA_Hightower_HoneyDew_Fist_Mantis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Hightower_HoneyDew_Fist_Mantis_C* UGA_Hightower_HoneyDew_Fist_Mantis_C::GetDefaultObj()
{
	static class UGA_Hightower_HoneyDew_Fist_Mantis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Hightower_HoneyDew_Fist_Mantis_C*>(UGA_Hightower_HoneyDew_Fist_Mantis_C::StaticClass()->DefaultObject);

	return Default;
}

}


