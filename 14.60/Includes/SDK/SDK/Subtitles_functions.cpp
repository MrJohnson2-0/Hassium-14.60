#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Subtitles.Subtitles_C
// (None)

class UClass* USubtitles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Subtitles_C");

	return Clss;
}


// Subtitles_C Subtitles.Default__Subtitles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubtitles_C* USubtitles_C::GetDefaultObj()
{
	static class USubtitles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitles_C*>(USubtitles_C::StaticClass()->DefaultObject);

	return Default;
}

}


