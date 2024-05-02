#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Grant_Swipe_Montage_Ability.GE_Grant_Swipe_Montage_Ability_C
// (None)

class UClass* UGE_Grant_Swipe_Montage_Ability_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Grant_Swipe_Montage_Ability_C");

	return Clss;
}


// GE_Grant_Swipe_Montage_Ability_C GE_Grant_Swipe_Montage_Ability.Default__GE_Grant_Swipe_Montage_Ability_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Grant_Swipe_Montage_Ability_C* UGE_Grant_Swipe_Montage_Ability_C::GetDefaultObj()
{
	static class UGE_Grant_Swipe_Montage_Ability_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Grant_Swipe_Montage_Ability_C*>(UGE_Grant_Swipe_Montage_Ability_C::StaticClass()->DefaultObject);

	return Default;
}

}


