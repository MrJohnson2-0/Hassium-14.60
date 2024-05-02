#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinimapChallengeIndicators.MinimapChallengeIndicators_C
// (None)

class UClass* UMinimapChallengeIndicators_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimapChallengeIndicators_C");

	return Clss;
}


// MinimapChallengeIndicators_C MinimapChallengeIndicators.Default__MinimapChallengeIndicators_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimapChallengeIndicators_C* UMinimapChallengeIndicators_C::GetDefaultObj()
{
	static class UMinimapChallengeIndicators_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimapChallengeIndicators_C*>(UMinimapChallengeIndicators_C::StaticClass()->DefaultObject);

	return Default;
}

}


