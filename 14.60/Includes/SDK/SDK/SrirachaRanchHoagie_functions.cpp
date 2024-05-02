#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SrirachaRanchHoagie.StreamingRadioPlayerComponent_Hoagie
// (None)

class UClass* UStreamingRadioPlayerComponent_Hoagie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamingRadioPlayerComponent_Hoagie");

	return Clss;
}


// StreamingRadioPlayerComponent_Hoagie SrirachaRanchHoagie.Default__StreamingRadioPlayerComponent_Hoagie
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamingRadioPlayerComponent_Hoagie* UStreamingRadioPlayerComponent_Hoagie::GetDefaultObj()
{
	static class UStreamingRadioPlayerComponent_Hoagie* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamingRadioPlayerComponent_Hoagie*>(UStreamingRadioPlayerComponent_Hoagie::StaticClass()->DefaultObject);

	return Default;
}

}


