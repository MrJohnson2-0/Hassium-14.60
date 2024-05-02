#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_AirstrikeCameraShaking.B_AirstrikeCameraShaking_C
// (None)

class UClass* UB_AirstrikeCameraShaking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_AirstrikeCameraShaking_C");

	return Clss;
}


// B_AirstrikeCameraShaking_C B_AirstrikeCameraShaking.Default__B_AirstrikeCameraShaking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_AirstrikeCameraShaking_C* UB_AirstrikeCameraShaking_C::GetDefaultObj()
{
	static class UB_AirstrikeCameraShaking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_AirstrikeCameraShaking_C*>(UB_AirstrikeCameraShaking_C::StaticClass()->DefaultObject);

	return Default;
}

}


