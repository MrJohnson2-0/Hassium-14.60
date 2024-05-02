#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_FloppingRabbit_HighTier.GA_Athena_FloppingRabbit_HighTier_C
// (None)

class UClass* UGA_Athena_FloppingRabbit_HighTier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_FloppingRabbit_HighTier_C");

	return Clss;
}


// GA_Athena_FloppingRabbit_HighTier_C GA_Athena_FloppingRabbit_HighTier.Default__GA_Athena_FloppingRabbit_HighTier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_FloppingRabbit_HighTier_C* UGA_Athena_FloppingRabbit_HighTier_C::GetDefaultObj()
{
	static class UGA_Athena_FloppingRabbit_HighTier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_FloppingRabbit_HighTier_C*>(UGA_Athena_FloppingRabbit_HighTier_C::StaticClass()->DefaultObject);

	return Default;
}

}


