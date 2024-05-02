#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerSurveyDispatcher.PlayerSurveyDispatcher_C
// (None)

class UClass* UPlayerSurveyDispatcher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyDispatcher_C");

	return Clss;
}


// PlayerSurveyDispatcher_C PlayerSurveyDispatcher.Default__PlayerSurveyDispatcher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyDispatcher_C* UPlayerSurveyDispatcher_C::GetDefaultObj()
{
	static class UPlayerSurveyDispatcher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyDispatcher_C*>(UPlayerSurveyDispatcher_C::StaticClass()->DefaultObject);

	return Default;
}

}


