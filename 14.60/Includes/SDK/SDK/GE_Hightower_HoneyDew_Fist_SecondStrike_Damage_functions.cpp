#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Hightower_HoneyDew_Fist_SecondStrike_Damage.GE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C
// (None)

class UClass* UGE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C");

	return Clss;
}


// GE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C GE_Hightower_HoneyDew_Fist_SecondStrike_Damage.Default__GE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C* UGE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C::GetDefaultObj()
{
	static class UGE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C*>(UGE_Hightower_HoneyDew_Fist_SecondStrike_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


