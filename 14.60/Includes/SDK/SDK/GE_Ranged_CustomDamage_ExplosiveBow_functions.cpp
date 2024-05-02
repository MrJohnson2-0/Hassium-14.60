#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ranged_CustomDamage_ExplosiveBow.GE_Ranged_CustomDamage_ExplosiveBow_C
// (None)

class UClass* UGE_Ranged_CustomDamage_ExplosiveBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ranged_CustomDamage_ExplosiveBow_C");

	return Clss;
}


// GE_Ranged_CustomDamage_ExplosiveBow_C GE_Ranged_CustomDamage_ExplosiveBow.Default__GE_Ranged_CustomDamage_ExplosiveBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ranged_CustomDamage_ExplosiveBow_C* UGE_Ranged_CustomDamage_ExplosiveBow_C::GetDefaultObj()
{
	static class UGE_Ranged_CustomDamage_ExplosiveBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ranged_CustomDamage_ExplosiveBow_C*>(UGE_Ranged_CustomDamage_ExplosiveBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


