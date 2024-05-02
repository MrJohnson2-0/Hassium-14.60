#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Hightower_Vertigo_Punch_CoreBR.GA_Hightower_Vertigo_Punch_CoreBR_C
// (None)

class UClass* UGA_Hightower_Vertigo_Punch_CoreBR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Hightower_Vertigo_Punch_CoreBR_C");

	return Clss;
}


// GA_Hightower_Vertigo_Punch_CoreBR_C GA_Hightower_Vertigo_Punch_CoreBR.Default__GA_Hightower_Vertigo_Punch_CoreBR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Hightower_Vertigo_Punch_CoreBR_C* UGA_Hightower_Vertigo_Punch_CoreBR_C::GetDefaultObj()
{
	static class UGA_Hightower_Vertigo_Punch_CoreBR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Hightower_Vertigo_Punch_CoreBR_C*>(UGA_Hightower_Vertigo_Punch_CoreBR_C::StaticClass()->DefaultObject);

	return Default;
}

}


