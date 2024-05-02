#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Date_BallLightning_CoreBR.GA_HighTower_Date_BallLightning_CoreBR_C
// (None)

class UClass* UGA_HighTower_Date_BallLightning_CoreBR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Date_BallLightning_CoreBR_C");

	return Clss;
}


// GA_HighTower_Date_BallLightning_CoreBR_C GA_HighTower_Date_BallLightning_CoreBR.Default__GA_HighTower_Date_BallLightning_CoreBR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Date_BallLightning_CoreBR_C* UGA_HighTower_Date_BallLightning_CoreBR_C::GetDefaultObj()
{
	static class UGA_HighTower_Date_BallLightning_CoreBR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Date_BallLightning_CoreBR_C*>(UGA_HighTower_Date_BallLightning_CoreBR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HighTower_Date_BallLightning_CoreBR.GA_HighTower_Date_BallLightning_CoreBR_C.PowerSpawnProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         ProjectileSpawned                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_PowerSpawnProjectile_ProjectileSpawned                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_BallLightning_CoreBR_C::PowerSpawnProjectile(class AFortProjectileBase** ProjectileSpawned, class AFortProjectileBase* CallFunc_PowerSpawnProjectile_ProjectileSpawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_CoreBR_C", "PowerSpawnProjectile");

	Params::UGA_HighTower_Date_BallLightning_CoreBR_C_PowerSpawnProjectile_Params Parms{};

	Parms.CallFunc_PowerSpawnProjectile_ProjectileSpawned = CallFunc_PowerSpawnProjectile_ProjectileSpawned;

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileSpawned != nullptr)
		*ProjectileSpawned = Parms.ProjectileSpawned;

}

}


