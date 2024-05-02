#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HopDrop_LowGravity_UsingJump.GE_HopDrop_LowGravity_UsingJump_C
// (None)

class UClass* UGE_HopDrop_LowGravity_UsingJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HopDrop_LowGravity_UsingJump_C");

	return Clss;
}


// GE_HopDrop_LowGravity_UsingJump_C GE_HopDrop_LowGravity_UsingJump.Default__GE_HopDrop_LowGravity_UsingJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HopDrop_LowGravity_UsingJump_C* UGE_HopDrop_LowGravity_UsingJump_C::GetDefaultObj()
{
	static class UGE_HopDrop_LowGravity_UsingJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HopDrop_LowGravity_UsingJump_C*>(UGE_HopDrop_LowGravity_UsingJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


