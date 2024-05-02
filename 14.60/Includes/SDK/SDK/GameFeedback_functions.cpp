#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameFeedback.LogOptions
// (None)

class UClass* ULogOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LogOptions");

	return Clss;
}


// LogOptions GameFeedback.Default__LogOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class ULogOptions* ULogOptions::GetDefaultObj()
{
	static class ULogOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<ULogOptions*>(ULogOptions::StaticClass()->DefaultObject);

	return Default;
}

}


