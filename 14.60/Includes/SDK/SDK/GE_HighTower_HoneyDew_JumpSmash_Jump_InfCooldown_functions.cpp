#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown.GE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C
// (None)

class UClass* UGE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C");

	return Clss;
}


// GE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C GE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown.Default__GE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C* UGE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C::GetDefaultObj()
{
	static class UGE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C*>(UGE_HighTower_HoneyDew_JumpSmash_Jump_InfCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


