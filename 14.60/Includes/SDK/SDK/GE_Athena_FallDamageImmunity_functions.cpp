#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Athena_FallDamageImmunity.GE_Athena_FallDamageImmunity_C
// (None)

class UClass* UGE_Athena_FallDamageImmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Athena_FallDamageImmunity_C");

	return Clss;
}


// GE_Athena_FallDamageImmunity_C GE_Athena_FallDamageImmunity.Default__GE_Athena_FallDamageImmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Athena_FallDamageImmunity_C* UGE_Athena_FallDamageImmunity_C::GetDefaultObj()
{
	static class UGE_Athena_FallDamageImmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Athena_FallDamageImmunity_C*>(UGE_Athena_FallDamageImmunity_C::StaticClass()->DefaultObject);

	return Default;
}

}


