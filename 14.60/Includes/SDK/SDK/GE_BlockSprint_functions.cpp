#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BlockSprint.GE_BlockSprint_C
// (None)

class UClass* UGE_BlockSprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BlockSprint_C");

	return Clss;
}


// GE_BlockSprint_C GE_BlockSprint.Default__GE_BlockSprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BlockSprint_C* UGE_BlockSprint_C::GetDefaultObj()
{
	static class UGE_BlockSprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BlockSprint_C*>(UGE_BlockSprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


