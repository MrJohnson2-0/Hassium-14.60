#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_PlayerDamageDealt.MinigameStat_PlayerDamageDealt_C
// (None)

class UClass* UMinigameStat_PlayerDamageDealt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_PlayerDamageDealt_C");

	return Clss;
}


// MinigameStat_PlayerDamageDealt_C MinigameStat_PlayerDamageDealt.Default__MinigameStat_PlayerDamageDealt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_PlayerDamageDealt_C* UMinigameStat_PlayerDamageDealt_C::GetDefaultObj()
{
	static class UMinigameStat_PlayerDamageDealt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_PlayerDamageDealt_C*>(UMinigameStat_PlayerDamageDealt_C::StaticClass()->DefaultObject);

	return Default;
}

}


