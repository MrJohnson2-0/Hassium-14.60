#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpicySakeRuntime.FortSpicySakeComponent_Telemetry
// (None)

class UClass* UFortSpicySakeComponent_Telemetry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSpicySakeComponent_Telemetry");

	return Clss;
}


// FortSpicySakeComponent_Telemetry SpicySakeRuntime.Default__FortSpicySakeComponent_Telemetry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSpicySakeComponent_Telemetry* UFortSpicySakeComponent_Telemetry::GetDefaultObj()
{
	static class UFortSpicySakeComponent_Telemetry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSpicySakeComponent_Telemetry*>(UFortSpicySakeComponent_Telemetry::StaticClass()->DefaultObject);

	return Default;
}


// Class SpicySakeRuntime.FortSpicySakeGameplayCueNotifyLoop_Alive
// (Actor)

class UClass* AFortSpicySakeGameplayCueNotifyLoop_Alive::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSpicySakeGameplayCueNotifyLoop_Alive");

	return Clss;
}


// FortSpicySakeGameplayCueNotifyLoop_Alive SpicySakeRuntime.Default__FortSpicySakeGameplayCueNotifyLoop_Alive
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortSpicySakeGameplayCueNotifyLoop_Alive* AFortSpicySakeGameplayCueNotifyLoop_Alive::GetDefaultObj()
{
	static class AFortSpicySakeGameplayCueNotifyLoop_Alive* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortSpicySakeGameplayCueNotifyLoop_Alive*>(AFortSpicySakeGameplayCueNotifyLoop_Alive::StaticClass()->DefaultObject);

	return Default;
}


// Class SpicySakeRuntime.FortSpicySakeOccupantAnimInstanceLayer
// (None)

class UClass* UFortSpicySakeOccupantAnimInstanceLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSpicySakeOccupantAnimInstanceLayer");

	return Clss;
}


// FortSpicySakeOccupantAnimInstanceLayer SpicySakeRuntime.Default__FortSpicySakeOccupantAnimInstanceLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSpicySakeOccupantAnimInstanceLayer* UFortSpicySakeOccupantAnimInstanceLayer::GetDefaultObj()
{
	static class UFortSpicySakeOccupantAnimInstanceLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSpicySakeOccupantAnimInstanceLayer*>(UFortSpicySakeOccupantAnimInstanceLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class SpicySakeRuntime.FortSpicySakeVehicleAnimInstance
// (None)

class UClass* UFortSpicySakeVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSpicySakeVehicleAnimInstance");

	return Clss;
}


// FortSpicySakeVehicleAnimInstance SpicySakeRuntime.Default__FortSpicySakeVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSpicySakeVehicleAnimInstance* UFortSpicySakeVehicleAnimInstance::GetDefaultObj()
{
	static class UFortSpicySakeVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSpicySakeVehicleAnimInstance*>(UFortSpicySakeVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}

}


