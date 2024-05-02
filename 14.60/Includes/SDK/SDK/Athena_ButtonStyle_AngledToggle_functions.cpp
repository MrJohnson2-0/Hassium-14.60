#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_ButtonStyle_AngledToggle.Athena_ButtonStyle_AngledToggle_C
// (None)

class UClass* UAthena_ButtonStyle_AngledToggle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ButtonStyle_AngledToggle_C");

	return Clss;
}


// Athena_ButtonStyle_AngledToggle_C Athena_ButtonStyle_AngledToggle.Default__Athena_ButtonStyle_AngledToggle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ButtonStyle_AngledToggle_C* UAthena_ButtonStyle_AngledToggle_C::GetDefaultObj()
{
	static class UAthena_ButtonStyle_AngledToggle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ButtonStyle_AngledToggle_C*>(UAthena_ButtonStyle_AngledToggle_C::StaticClass()->DefaultObject);

	return Default;
}

}


