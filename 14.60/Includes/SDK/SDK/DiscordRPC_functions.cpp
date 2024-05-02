#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DiscordRPC.DiscordRuntimeSettings
// (None)

class UClass* UDiscordRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DiscordRuntimeSettings");

	return Clss;
}


// DiscordRuntimeSettings DiscordRPC.Default__DiscordRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDiscordRuntimeSettings* UDiscordRuntimeSettings::GetDefaultObj()
{
	static class UDiscordRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiscordRuntimeSettings*>(UDiscordRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}

}


