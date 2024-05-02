#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Camera_Shake_Pulse_Zoom_Small.BP_Camera_Shake_Pulse_Zoom_Small_C
// (None)

class UClass* UBP_Camera_Shake_Pulse_Zoom_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Camera_Shake_Pulse_Zoom_Small_C");

	return Clss;
}


// BP_Camera_Shake_Pulse_Zoom_Small_C BP_Camera_Shake_Pulse_Zoom_Small.Default__BP_Camera_Shake_Pulse_Zoom_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Camera_Shake_Pulse_Zoom_Small_C* UBP_Camera_Shake_Pulse_Zoom_Small_C::GetDefaultObj()
{
	static class UBP_Camera_Shake_Pulse_Zoom_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Camera_Shake_Pulse_Zoom_Small_C*>(UBP_Camera_Shake_Pulse_Zoom_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


