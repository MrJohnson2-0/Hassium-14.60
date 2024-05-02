#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_BP14_Room_A_Scripting.Frontend_BP14_Room_A_Scripting_C
// (Actor)

class UClass* AFrontend_BP14_Room_A_Scripting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_BP14_Room_A_Scripting_C");

	return Clss;
}


// Frontend_BP14_Room_A_Scripting_C Frontend_BP14_Room_A_Scripting.Default__Frontend_BP14_Room_A_Scripting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_BP14_Room_A_Scripting_C* AFrontend_BP14_Room_A_Scripting_C::GetDefaultObj()
{
	static class AFrontend_BP14_Room_A_Scripting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_BP14_Room_A_Scripting_C*>(AFrontend_BP14_Room_A_Scripting_C::StaticClass()->DefaultObject);

	return Default;
}

}


