#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_HighTower_HoneyDew_JumpSmash_Smashing.GCNL_HighTower_HoneyDew_JumpSmash_Smashing_C
// (Actor)

class UClass* AGCNL_HighTower_HoneyDew_JumpSmash_Smashing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_HighTower_HoneyDew_JumpSmash_Smashing_C");

	return Clss;
}


// GCNL_HighTower_HoneyDew_JumpSmash_Smashing_C GCNL_HighTower_HoneyDew_JumpSmash_Smashing.Default__GCNL_HighTower_HoneyDew_JumpSmash_Smashing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_HighTower_HoneyDew_JumpSmash_Smashing_C* AGCNL_HighTower_HoneyDew_JumpSmash_Smashing_C::GetDefaultObj()
{
	static class AGCNL_HighTower_HoneyDew_JumpSmash_Smashing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_HighTower_HoneyDew_JumpSmash_Smashing_C*>(AGCNL_HighTower_HoneyDew_JumpSmash_Smashing_C::StaticClass()->DefaultObject);

	return Default;
}

}


