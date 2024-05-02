#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ConcertSyncCore.ConcertSyncConfig
// (None)

class UClass* UConcertSyncConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConcertSyncConfig");

	return Clss;
}


// ConcertSyncConfig ConcertSyncCore.Default__ConcertSyncConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UConcertSyncConfig* UConcertSyncConfig::GetDefaultObj()
{
	static class UConcertSyncConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UConcertSyncConfig*>(UConcertSyncConfig::StaticClass()->DefaultObject);

	return Default;
}

}


