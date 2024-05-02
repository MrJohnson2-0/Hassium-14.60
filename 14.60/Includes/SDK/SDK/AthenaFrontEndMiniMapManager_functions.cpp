#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AthenaFrontEndMiniMapManager.AthenaFrontEndMiniMapManager_C
// (Actor)

class UClass* AAthenaFrontEndMiniMapManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaFrontEndMiniMapManager_C");

	return Clss;
}


// AthenaFrontEndMiniMapManager_C AthenaFrontEndMiniMapManager.Default__AthenaFrontEndMiniMapManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthenaFrontEndMiniMapManager_C* AAthenaFrontEndMiniMapManager_C::GetDefaultObj()
{
	static class AAthenaFrontEndMiniMapManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthenaFrontEndMiniMapManager_C*>(AAthenaFrontEndMiniMapManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


