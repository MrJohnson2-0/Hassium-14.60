#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DangerGrape_NoDamage.GE_DangerGrape_NoDamage_C
// (None)

class UClass* UGE_DangerGrape_NoDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DangerGrape_NoDamage_C");

	return Clss;
}


// GE_DangerGrape_NoDamage_C GE_DangerGrape_NoDamage.Default__GE_DangerGrape_NoDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DangerGrape_NoDamage_C* UGE_DangerGrape_NoDamage_C::GetDefaultObj()
{
	static class UGE_DangerGrape_NoDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DangerGrape_NoDamage_C*>(UGE_DangerGrape_NoDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


