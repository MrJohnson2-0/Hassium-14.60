#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_BoostJumpPack_Papaya.GA_BoostJumpPack_Papaya_C
// (None)

class UClass* UGA_BoostJumpPack_Papaya_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_BoostJumpPack_Papaya_C");

	return Clss;
}


// GA_BoostJumpPack_Papaya_C GA_BoostJumpPack_Papaya.Default__GA_BoostJumpPack_Papaya_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_BoostJumpPack_Papaya_C* UGA_BoostJumpPack_Papaya_C::GetDefaultObj()
{
	static class UGA_BoostJumpPack_Papaya_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_BoostJumpPack_Papaya_C*>(UGA_BoostJumpPack_Papaya_C::StaticClass()->DefaultObject);

	return Default;
}

}


