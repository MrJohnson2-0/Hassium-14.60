#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C
// (None)

class UClass* UGA_Athena_ActivePower_SpawnProjectile_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_ActivePower_SpawnProjectile_Parent_C");

	return Clss;
}


// GA_Athena_ActivePower_SpawnProjectile_Parent_C GA_Athena_ActivePower_SpawnProjectile_Parent.Default__GA_Athena_ActivePower_SpawnProjectile_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_ActivePower_SpawnProjectile_Parent_C* UGA_Athena_ActivePower_SpawnProjectile_Parent_C::GetDefaultObj()
{
	static class UGA_Athena_ActivePower_SpawnProjectile_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_ActivePower_SpawnProjectile_Parent_C*>(UGA_Athena_ActivePower_SpawnProjectile_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class AFortProjectileTrajectory>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class AFortProjectileTrajectory> UGA_Athena_ActivePower_SpawnProjectile_Parent_C::GetProjectileTrajectoryActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "GetProjectileTrajectoryActor");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_GetProjectileTrajectoryActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             OutSplinePoints                                                  (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FVector>             OutSplineTangents                                                (Parm, OutParm, HasGetValueTypeHash)
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "GetProjectileTrajectoryPoints");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_GetProjectileTrajectoryPoints_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = std::move(Parms.OutSplinePoints);

	if (OutSplineTangents != nullptr)
		*OutSplineTangents = std::move(Parms.OutSplineTangents);

	if (OutHitResult != nullptr)
		*OutHitResult = std::move(Parms.OutHitResult);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Athena_ActivePower_SpawnProjectile_Parent_C::ShouldOnlyShowTrajectoryOnUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "ShouldOnlyShowTrajectoryOnUse");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSpawnOnEquip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileTrajectory*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AFortProjectileTrajectory* UGA_Athena_ActivePower_SpawnProjectile_Parent_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "SpawnTrajectoryIndicator");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_SpawnTrajectoryIndicator_Params Parms{};

	Parms.bSpawnOnEquip = bSpawnOnEquip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.AddAdditionalExplosionContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             (None)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::AddAdditionalExplosionContainer(class AFortProjectileBase* Projectile, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "AddAdditionalExplosionContainer");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_AddAdditionalExplosionContainer_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.SpawnProjectileGCParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

struct FGameplayCueParameters UGA_Athena_ActivePower_SpawnProjectile_Parent_C::SpawnProjectileGCParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "SpawnProjectileGCParams");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_SpawnProjectileGCParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.InitAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortGameplayEffectContainerSpecCallFunc_MakeEffectContainers_Hit                                (None)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeEffectContainers_Explode                            (None)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::InitAbility(const struct FFortGameplayEffectContainerSpec& CallFunc_MakeEffectContainers_Hit, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeEffectContainers_Explode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "InitAbility");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_InitAbility_Params Parms{};

	Parms.CallFunc_MakeEffectContainers_Hit = CallFunc_MakeEffectContainers_Hit;
	Parms.CallFunc_MakeEffectContainers_Explode = CallFunc_MakeEffectContainers_Explode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.MakeEffectContainers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortGameplayEffectContainerSpecHit                                                              (Parm, OutParm)
// struct FFortGameplayEffectContainerSpecExplode                                                          (Parm, OutParm)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             (None)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1           (None)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::MakeEffectContainers(struct FFortGameplayEffectContainerSpec* Hit, struct FFortGameplayEffectContainerSpec* Explode, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "MakeEffectContainers");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_MakeEffectContainers_Params Parms{};

	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1 = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Hit != nullptr)
		*Hit = std::move(Parms.Hit);

	if (Explode != nullptr)
		*Explode = std::move(Parms.Explode);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.Get Homing Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      HomingTarget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::Get_Homing_Target(class AActor** HomingTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "Get Homing Target");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_Get_Homing_Target_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HomingTarget != nullptr)
		*HomingTarget = Parms.HomingTarget;

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.GetProjectileSpawnLocationAndRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::GetProjectileSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Direction, float CallFunc_GetValueAtLevel_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "GetProjectileSpawnLocationAndRotation");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_GetProjectileSpawnLocationAndRotation_Params Parms{};

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.PowerSpawnProjectile
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         ProjectileSpawned                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_SpawnProjectileGCParams_ReturnValue                     (ContainsInstancedReference)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Get_Homing_Target_HomingTarget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetProjectileSpawnLocationAndRotation_Location          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetProjectileSpawnLocationAndRotation_Direction         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::PowerSpawnProjectile(class AFortProjectileBase** ProjectileSpawned, const struct FGameplayCueParameters& CallFunc_SpawnProjectileGCParams_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, class AActor* CallFunc_Get_Homing_Target_HomingTarget, const struct FVector& CallFunc_GetProjectileSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetProjectileSpawnLocationAndRotation_Direction, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool Temp_bool_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Select_Default, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "PowerSpawnProjectile");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_PowerSpawnProjectile_Params Parms{};

	Parms.CallFunc_SpawnProjectileGCParams_ReturnValue = CallFunc_SpawnProjectileGCParams_ReturnValue;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_Get_Homing_Target_HomingTarget = CallFunc_Get_Homing_Target_HomingTarget;
	Parms.CallFunc_GetProjectileSpawnLocationAndRotation_Location = CallFunc_GetProjectileSpawnLocationAndRotation_Location;
	Parms.CallFunc_GetProjectileSpawnLocationAndRotation_Direction = CallFunc_GetProjectileSpawnLocationAndRotation_Direction;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileSpawned != nullptr)
		*ProjectileSpawned = Parms.ProjectileSpawned;

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "CleanupTrajectoryIndicatorOnUnequip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::InitTrajectoryVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "InitTrajectoryVariables");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::UpdateTrajectory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "UpdateTrajectory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.CastMontageNotifyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::CastMontageNotifyStart(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "CastMontageNotifyStart");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_CastMontageNotifyStart_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.PowerCommitFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::PowerCommitFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "PowerCommitFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.CastMontageCancelledOrInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::CastMontageCancelledOrInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "CastMontageCancelledOrInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.CastMontageNotifyEndAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::CastMontageNotifyEndAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "CastMontageNotifyEndAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.ResetCommitDoOnce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::ResetCommitDoOnce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "ResetCommitDoOnce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.CastMontageBlendOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::CastMontageBlendOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "CastMontageBlendOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.ExecuteUbergraph_GA_Athena_ActivePower_SpawnProjectile_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_NotifyTag                                           (NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_PowerSpawnProjectile_ProjectileSpawned                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::ExecuteUbergraph_GA_Athena_ActivePower_SpawnProjectile_Parent(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_NotifyTag, class AFortProjectileBase* CallFunc_PowerSpawnProjectile_ProjectileSpawned, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "ExecuteUbergraph_GA_Athena_ActivePower_SpawnProjectile_Parent");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_ExecuteUbergraph_GA_Athena_ActivePower_SpawnProjectile_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NotifyTag = K2Node_Event_NotifyTag;
	Parms.CallFunc_PowerSpawnProjectile_ProjectileSpawned = CallFunc_PowerSpawnProjectile_ProjectileSpawned;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.OnProjectileSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         ProjectileSpawned                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_SpawnProjectile_Parent_C::OnProjectileSpawned__DelegateSignature(class AFortProjectileBase* ProjectileSpawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_SpawnProjectile_Parent_C", "OnProjectileSpawned__DelegateSignature");

	Params::UGA_Athena_ActivePower_SpawnProjectile_Parent_C_OnProjectileSpawned__DelegateSignature_Params Parms{};

	Parms.ProjectileSpawned = ProjectileSpawned;

	UObject::ProcessEvent(Func, &Parms);

}

}


