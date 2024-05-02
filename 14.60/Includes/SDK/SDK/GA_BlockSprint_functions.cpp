#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_BlockSprint.GA_BlockSprint_C
// (None)

class UClass* UGA_BlockSprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_BlockSprint_C");

	return Clss;
}


// GA_BlockSprint_C GA_BlockSprint.Default__GA_BlockSprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_BlockSprint_C* UGA_BlockSprint_C::GetDefaultObj()
{
	static class UGA_BlockSprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_BlockSprint_C*>(UGA_BlockSprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


