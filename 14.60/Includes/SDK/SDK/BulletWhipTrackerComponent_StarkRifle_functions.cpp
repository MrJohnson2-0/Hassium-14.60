#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_StarkRifle.BulletWhipTrackerComponent_StarkRifle_C
// (None)

class UClass* UBulletWhipTrackerComponent_StarkRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_StarkRifle_C");

	return Clss;
}


// BulletWhipTrackerComponent_StarkRifle_C BulletWhipTrackerComponent_StarkRifle.Default__BulletWhipTrackerComponent_StarkRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_StarkRifle_C* UBulletWhipTrackerComponent_StarkRifle_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_StarkRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_StarkRifle_C*>(UBulletWhipTrackerComponent_StarkRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


