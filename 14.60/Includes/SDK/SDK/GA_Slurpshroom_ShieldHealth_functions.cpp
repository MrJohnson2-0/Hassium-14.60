#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Slurpshroom_ShieldHealth.GA_Slurpshroom_ShieldHealth_C
// (None)

class UClass* UGA_Slurpshroom_ShieldHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Slurpshroom_ShieldHealth_C");

	return Clss;
}


// GA_Slurpshroom_ShieldHealth_C GA_Slurpshroom_ShieldHealth.Default__GA_Slurpshroom_ShieldHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Slurpshroom_ShieldHealth_C* UGA_Slurpshroom_ShieldHealth_C::GetDefaultObj()
{
	static class UGA_Slurpshroom_ShieldHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Slurpshroom_ShieldHealth_C*>(UGA_Slurpshroom_ShieldHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


