#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Trap_FrostedTips_Wall.GA_Trap_FrostedTips_Wall_C
// (None)

class UClass* UGA_Trap_FrostedTips_Wall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Trap_FrostedTips_Wall_C");

	return Clss;
}


// GA_Trap_FrostedTips_Wall_C GA_Trap_FrostedTips_Wall.Default__GA_Trap_FrostedTips_Wall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Trap_FrostedTips_Wall_C* UGA_Trap_FrostedTips_Wall_C::GetDefaultObj()
{
	static class UGA_Trap_FrostedTips_Wall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Trap_FrostedTips_Wall_C*>(UGA_Trap_FrostedTips_Wall_C::StaticClass()->DefaultObject);

	return Default;
}

}


