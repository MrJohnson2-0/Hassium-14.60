#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena_HighTier.B_FloppingRabbit_Weap_Athena_HighTier_C
// (Actor)

class UClass* AB_FloppingRabbit_Weap_Athena_HighTier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FloppingRabbit_Weap_Athena_HighTier_C");

	return Clss;
}


// B_FloppingRabbit_Weap_Athena_HighTier_C B_FloppingRabbit_Weap_Athena_HighTier.Default__B_FloppingRabbit_Weap_Athena_HighTier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_FloppingRabbit_Weap_Athena_HighTier_C* AB_FloppingRabbit_Weap_Athena_HighTier_C::GetDefaultObj()
{
	static class AB_FloppingRabbit_Weap_Athena_HighTier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_FloppingRabbit_Weap_Athena_HighTier_C*>(AB_FloppingRabbit_Weap_Athena_HighTier_C::StaticClass()->DefaultObject);

	return Default;
}

}


