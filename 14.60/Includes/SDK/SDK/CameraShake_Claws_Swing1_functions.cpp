#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Claws_Swing1.CameraShake_Claws_Swing1_C
// (None)

class UClass* UCameraShake_Claws_Swing1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Claws_Swing1_C");

	return Clss;
}


// CameraShake_Claws_Swing1_C CameraShake_Claws_Swing1.Default__CameraShake_Claws_Swing1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Claws_Swing1_C* UCameraShake_Claws_Swing1_C::GetDefaultObj()
{
	static class UCameraShake_Claws_Swing1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Claws_Swing1_C*>(UCameraShake_Claws_Swing1_C::StaticClass()->DefaultObject);

	return Default;
}

}


