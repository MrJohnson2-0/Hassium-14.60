#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Athena_AppleSun_FallDamageImmunity_.GE_Athena_AppleSun_FallDamageImmunity__C
// (None)

class UClass* UGE_Athena_AppleSun_FallDamageImmunity__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Athena_AppleSun_FallDamageImmunity__C");

	return Clss;
}


// GE_Athena_AppleSun_FallDamageImmunity__C GE_Athena_AppleSun_FallDamageImmunity_.Default__GE_Athena_AppleSun_FallDamageImmunity__C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Athena_AppleSun_FallDamageImmunity__C* UGE_Athena_AppleSun_FallDamageImmunity__C::GetDefaultObj()
{
	static class UGE_Athena_AppleSun_FallDamageImmunity__C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Athena_AppleSun_FallDamageImmunity__C*>(UGE_Athena_AppleSun_FallDamageImmunity__C::StaticClass()->DefaultObject);

	return Default;
}

}


