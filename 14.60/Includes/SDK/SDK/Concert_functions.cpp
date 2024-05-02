#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Concert.ConcertServerConfig
// (None)

class UClass* UConcertServerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConcertServerConfig");

	return Clss;
}


// ConcertServerConfig Concert.Default__ConcertServerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UConcertServerConfig* UConcertServerConfig::GetDefaultObj()
{
	static class UConcertServerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UConcertServerConfig*>(UConcertServerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class Concert.ConcertClientConfig
// (None)

class UClass* UConcertClientConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConcertClientConfig");

	return Clss;
}


// ConcertClientConfig Concert.Default__ConcertClientConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UConcertClientConfig* UConcertClientConfig::GetDefaultObj()
{
	static class UConcertClientConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UConcertClientConfig*>(UConcertClientConfig::StaticClass()->DefaultObject);

	return Default;
}

}


