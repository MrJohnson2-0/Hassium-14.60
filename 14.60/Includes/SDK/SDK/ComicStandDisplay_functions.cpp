#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ComicStandDisplay.ComicStandDisplay_C
// (Actor)

class UClass* AComicStandDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComicStandDisplay_C");

	return Clss;
}


// ComicStandDisplay_C ComicStandDisplay.Default__ComicStandDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AComicStandDisplay_C* AComicStandDisplay_C::GetDefaultObj()
{
	static class AComicStandDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AComicStandDisplay_C*>(AComicStandDisplay_C::StaticClass()->DefaultObject);

	return Default;
}

}


