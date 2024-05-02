#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_Squash_Quest.GE_HighTower_Squash_Quest_C
// (None)

class UClass* UGE_HighTower_Squash_Quest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_Squash_Quest_C");

	return Clss;
}


// GE_HighTower_Squash_Quest_C GE_HighTower_Squash_Quest.Default__GE_HighTower_Squash_Quest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_Squash_Quest_C* UGE_HighTower_Squash_Quest_C::GetDefaultObj()
{
	static class UGE_HighTower_Squash_Quest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_Squash_Quest_C*>(UGE_HighTower_Squash_Quest_C::StaticClass()->DefaultObject);

	return Default;
}

}


