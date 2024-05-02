#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurieExecution_Water.CurieExecution_Water_C
// (None)

class UClass* UCurieExecution_Water_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieExecution_Water_C");

	return Clss;
}


// CurieExecution_Water_C CurieExecution_Water.Default__CurieExecution_Water_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurieExecution_Water_C* UCurieExecution_Water_C::GetDefaultObj()
{
	static class UCurieExecution_Water_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieExecution_Water_C*>(UCurieExecution_Water_C::StaticClass()->DefaultObject);

	return Default;
}

}


