#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Interrogation_Voice_PickedUp.GE_Interrogation_Voice_PickedUp_C
// (None)

class UClass* UGE_Interrogation_Voice_PickedUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Interrogation_Voice_PickedUp_C");

	return Clss;
}


// GE_Interrogation_Voice_PickedUp_C GE_Interrogation_Voice_PickedUp.Default__GE_Interrogation_Voice_PickedUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Interrogation_Voice_PickedUp_C* UGE_Interrogation_Voice_PickedUp_C::GetDefaultObj()
{
	static class UGE_Interrogation_Voice_PickedUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Interrogation_Voice_PickedUp_C*>(UGE_Interrogation_Voice_PickedUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


