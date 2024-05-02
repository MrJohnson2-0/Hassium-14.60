#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject.BP_Frontend_EventLevel_NavObject_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_C BP_Frontend_EventLevel_NavObject.Default__BP_Frontend_EventLevel_NavObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_C* ABP_Frontend_EventLevel_NavObject_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_C*>(ABP_Frontend_EventLevel_NavObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


