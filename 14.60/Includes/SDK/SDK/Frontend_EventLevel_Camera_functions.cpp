#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_EventLevel_Camera.Frontend_EventLevel_Camera_C
// (Actor)

class UClass* AFrontend_EventLevel_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_EventLevel_Camera_C");

	return Clss;
}


// Frontend_EventLevel_Camera_C Frontend_EventLevel_Camera.Default__Frontend_EventLevel_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_EventLevel_Camera_C* AFrontend_EventLevel_Camera_C::GetDefaultObj()
{
	static class AFrontend_EventLevel_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_EventLevel_Camera_C*>(AFrontend_EventLevel_Camera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_EventLevel_Camera.Frontend_EventLevel_Camera_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void AFrontend_EventLevel_Camera_C::UserConstructionScript(const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_EventLevel_Camera_C", "UserConstructionScript");

	Params::AFrontend_EventLevel_Camera_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


