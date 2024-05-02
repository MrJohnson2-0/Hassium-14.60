#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_HoneyDew_JumpSmash_Land.GE_HighTower_HoneyDew_JumpSmash_Land_C
// (None)

class UClass* UGE_HighTower_HoneyDew_JumpSmash_Land_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_HoneyDew_JumpSmash_Land_C");

	return Clss;
}


// GE_HighTower_HoneyDew_JumpSmash_Land_C GE_HighTower_HoneyDew_JumpSmash_Land.Default__GE_HighTower_HoneyDew_JumpSmash_Land_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_HoneyDew_JumpSmash_Land_C* UGE_HighTower_HoneyDew_JumpSmash_Land_C::GetDefaultObj()
{
	static class UGE_HighTower_HoneyDew_JumpSmash_Land_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_HoneyDew_JumpSmash_Land_C*>(UGE_HighTower_HoneyDew_JumpSmash_Land_C::StaticClass()->DefaultObject);

	return Default;
}

}


