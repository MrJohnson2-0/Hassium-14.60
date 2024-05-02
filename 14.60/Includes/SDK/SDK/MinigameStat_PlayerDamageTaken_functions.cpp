#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_PlayerDamageTaken.MinigameStat_PlayerDamageTaken_C
// (None)

class UClass* UMinigameStat_PlayerDamageTaken_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_PlayerDamageTaken_C");

	return Clss;
}


// MinigameStat_PlayerDamageTaken_C MinigameStat_PlayerDamageTaken.Default__MinigameStat_PlayerDamageTaken_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_PlayerDamageTaken_C* UMinigameStat_PlayerDamageTaken_C::GetDefaultObj()
{
	static class UMinigameStat_PlayerDamageTaken_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_PlayerDamageTaken_C*>(UMinigameStat_PlayerDamageTaken_C::StaticClass()->DefaultObject);

	return Default;
}

}


