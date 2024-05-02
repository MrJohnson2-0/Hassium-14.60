#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealthSpeedSmall_Speed.GE_HealthSpeedSmall_Speed_C
// (None)

class UClass* UGE_HealthSpeedSmall_Speed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealthSpeedSmall_Speed_C");

	return Clss;
}


// GE_HealthSpeedSmall_Speed_C GE_HealthSpeedSmall_Speed.Default__GE_HealthSpeedSmall_Speed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealthSpeedSmall_Speed_C* UGE_HealthSpeedSmall_Speed_C::GetDefaultObj()
{
	static class UGE_HealthSpeedSmall_Speed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealthSpeedSmall_Speed_C*>(UGE_HealthSpeedSmall_Speed_C::StaticClass()->DefaultObject);

	return Default;
}

}


