#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ConcertTransport.ConcertEndpointConfig
// (None)

class UClass* UConcertEndpointConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConcertEndpointConfig");

	return Clss;
}


// ConcertEndpointConfig ConcertTransport.Default__ConcertEndpointConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UConcertEndpointConfig* UConcertEndpointConfig::GetDefaultObj()
{
	static class UConcertEndpointConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UConcertEndpointConfig*>(UConcertEndpointConfig::StaticClass()->DefaultObject);

	return Default;
}

}


