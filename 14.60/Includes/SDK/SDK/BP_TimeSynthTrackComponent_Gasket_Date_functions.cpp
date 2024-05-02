#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TimeSynthTrackComponent_Gasket_Date.BP_TimeSynthTrackComponent_Gasket_Date_C
// (None)

class UClass* UBP_TimeSynthTrackComponent_Gasket_Date_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TimeSynthTrackComponent_Gasket_Date_C");

	return Clss;
}


// BP_TimeSynthTrackComponent_Gasket_Date_C BP_TimeSynthTrackComponent_Gasket_Date.Default__BP_TimeSynthTrackComponent_Gasket_Date_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TimeSynthTrackComponent_Gasket_Date_C* UBP_TimeSynthTrackComponent_Gasket_Date_C::GetDefaultObj()
{
	static class UBP_TimeSynthTrackComponent_Gasket_Date_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TimeSynthTrackComponent_Gasket_Date_C*>(UBP_TimeSynthTrackComponent_Gasket_Date_C::StaticClass()->DefaultObject);

	return Default;
}

}


