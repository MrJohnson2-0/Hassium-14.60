#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Barrel_FishingRod_Container_Athena.Barrel_FishingRod_Container_Athena_C
// (Actor)

class UClass* ABarrel_FishingRod_Container_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Barrel_FishingRod_Container_Athena_C");

	return Clss;
}


// Barrel_FishingRod_Container_Athena_C Barrel_FishingRod_Container_Athena.Default__Barrel_FishingRod_Container_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABarrel_FishingRod_Container_Athena_C* ABarrel_FishingRod_Container_Athena_C::GetDefaultObj()
{
	static class ABarrel_FishingRod_Container_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABarrel_FishingRod_Container_Athena_C*>(ABarrel_FishingRod_Container_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


