#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C
// (None)

class UClass* UGA_LowTower_HeldObject_Chaplin_Primary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_LowTower_HeldObject_Chaplin_Primary_C");

	return Clss;
}


// GA_LowTower_HeldObject_Chaplin_Primary_C GA_LowTower_HeldObject_Chaplin_Primary.Default__GA_LowTower_HeldObject_Chaplin_Primary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_LowTower_HeldObject_Chaplin_Primary_C* UGA_LowTower_HeldObject_Chaplin_Primary_C::GetDefaultObj()
{
	static class UGA_LowTower_HeldObject_Chaplin_Primary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_LowTower_HeldObject_Chaplin_Primary_C*>(UGA_LowTower_HeldObject_Chaplin_Primary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.PlayForcedFeedBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSmallProjectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::PlayForcedFeedBack(bool bSmallProjectile, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn, bool CallFunc_IsValid_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "PlayForcedFeedBack");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_PlayForcedFeedBack_Params Parms{};

	Parms.bSmallProjectile = bSmallProjectile;
	Parms.CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn = CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ConvertChargeTimeIntoLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ConvertToScalingLevel_Out                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ConvertChargeTimeIntoLevel(int32* Out, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_ConvertToScalingLevel_Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ConvertChargeTimeIntoLevel");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_ConvertChargeTimeIntoLevel_Params Parms{};

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_ConvertToScalingLevel_Out = CallFunc_ConvertToScalingLevel_Out;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ConvertToScalingLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutLevel                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ConvertToScalingLevel(int32 Scale, int32* Out, int32 OutLevel, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ConvertToScalingLevel");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_ConvertToScalingLevel_Params Parms{};

	Parms.Scale = Scale;
	Parms.OutLevel = OutLevel;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.SpawnSmallProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             (None)
// struct FVector                     CallFunc_GetProjectileSpawnLocationAndDirection_Location         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetProjectileSpawnLocationAndDirection_Direction        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::SpawnSmallProjectile(bool CallFunc_IsServer_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FVector& CallFunc_GetProjectileSpawnLocationAndDirection_Location, const struct FRotator& CallFunc_GetProjectileSpawnLocationAndDirection_Direction, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "SpawnSmallProjectile");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_SpawnSmallProjectile_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_GetProjectileSpawnLocationAndDirection_Location = CallFunc_GetProjectileSpawnLocationAndDirection_Location;
	Parms.CallFunc_GetProjectileSpawnLocationAndDirection_Direction = CallFunc_GetProjectileSpawnLocationAndDirection_Direction;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.GetFortAvatarPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*             AsFort_Player_Pawn                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::GetFortAvatarPawn(class AFortPlayerPawn** AsFort_Player_Pawn, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "GetFortAvatarPawn");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_GetFortAvatarPawn_Params Parms{};

	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Pawn != nullptr)
		*AsFort_Player_Pawn = Parms.AsFort_Player_Pawn;

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.GetProjectileSpawnLocationAndDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              SpawnDownDistanceOffset                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SpawnRightDistanceOffset                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::GetProjectileSpawnLocationAndDirection(struct FVector* Location, struct FRotator* Direction, float SpawnDownDistanceOffset, float SpawnRightDistanceOffset, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "GetProjectileSpawnLocationAndDirection");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_GetProjectileSpawnLocationAndDirection_Params Parms{};

	Parms.SpawnDownDistanceOffset = SpawnDownDistanceOffset;
	Parms.SpawnRightDistanceOffset = SpawnRightDistanceOffset;
	Parms.CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn = CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.OnNotifyEnd_2B932747410EE89AB1DCE1915BC44EDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::OnNotifyEnd_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "OnNotifyEnd_2B932747410EE89AB1DCE1915BC44EDB");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_OnNotifyEnd_2B932747410EE89AB1DCE1915BC44EDB_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.OnNotifyBegin_2B932747410EE89AB1DCE1915BC44EDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::OnNotifyBegin_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "OnNotifyBegin_2B932747410EE89AB1DCE1915BC44EDB");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_OnNotifyBegin_2B932747410EE89AB1DCE1915BC44EDB_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.OnCancelled_2B932747410EE89AB1DCE1915BC44EDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::OnCancelled_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "OnCancelled_2B932747410EE89AB1DCE1915BC44EDB");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_OnCancelled_2B932747410EE89AB1DCE1915BC44EDB_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.OnInterrupted_2B932747410EE89AB1DCE1915BC44EDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::OnInterrupted_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "OnInterrupted_2B932747410EE89AB1DCE1915BC44EDB");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_OnInterrupted_2B932747410EE89AB1DCE1915BC44EDB_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.OnBlendOut_2B932747410EE89AB1DCE1915BC44EDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::OnBlendOut_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "OnBlendOut_2B932747410EE89AB1DCE1915BC44EDB");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_OnBlendOut_2B932747410EE89AB1DCE1915BC44EDB_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.OnCompleted_2B932747410EE89AB1DCE1915BC44EDB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::OnCompleted_2B932747410EE89AB1DCE1915BC44EDB(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "OnCompleted_2B932747410EE89AB1DCE1915BC44EDB");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_OnCompleted_2B932747410EE89AB1DCE1915BC44EDB_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "K2_OnEndAbility");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::OnAbilityInputReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "OnAbilityInputReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.BindAutoShootOnMaxCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::BindAutoShootOnMaxCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "BindAutoShootOnMaxCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.AutoShootOnMaxCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::AutoShootOnMaxCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "AutoShootOnMaxCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ForceShoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ForceShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ForceShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ClientFX_BeginCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ClientFX_BeginCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ClientFX_BeginCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ClientFX_EndCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ClientFX_EndCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ClientFX_EndCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ClientPlaySmallProjectileMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ClientPlaySmallProjectileMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ClientPlaySmallProjectileMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.BindBeginCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::BindBeginCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "BindBeginCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.BeginCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::BeginCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "BeginCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.AbilityCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::AbilityCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "AbilityCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.PreAbilityEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::PreAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "PreAbilityEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ServerWaitTossAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ServerWaitTossAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ServerWaitTossAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.InvalidateTimers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::InvalidateTimers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "InvalidateTimers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.WaitForAnimationTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::WaitForAnimationTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "WaitForAnimationTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ClientPlayLargeProjectileMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ClientPlayLargeProjectileMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ClientPlayLargeProjectileMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.SetChargeTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LowTower_HeldObject_Chaplin_Primary_C::SetChargeTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "SetChargeTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.SetChargingTimerValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChargingTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ActivationTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::SetChargingTimerValues(float ChargingTime, float ActivationTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "SetChargingTimerValues");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_SetChargingTimerValues_Params Parms{};

	Parms.ChargingTime = ChargingTime;
	Parms.ActivationTime = ActivationTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LowTower_HeldObject_Chaplin_Primary.GA_LowTower_HeldObject_Chaplin_Primary_C.ExecuteUbergraph_GA_LowTower_HeldObject_Chaplin_Primary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHeldObjectComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_1                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag                                     (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_5                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           (None)
// class AFortPlayerPawn*             CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_2                                   (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_LowTower_Held_Chaplin_Parent_C*K2Node_DynamicCast_AsBGA_Low_Tower_Held_Chaplin_Parent           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_3                                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ConvertChargeTimeIntoLevel_Out                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             (None)
// float                              CallFunc_GetValueAtLevel_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// class UFortAbilityTask_PlayMontageWaitNotify*CallFunc_PlayMontageAndWaitNotify_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue_1                         (None)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_4                                   (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_ChargingTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ActivationTime                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetProjectileSpawnLocationAndDirection_Location         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetProjectileSpawnLocationAndDirection_Direction        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LowTower_HeldObject_Chaplin_Primary_C::ExecuteUbergraph_GA_LowTower_HeldObject_Chaplin_Primary(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHeldObjectComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_1, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_5, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool K2Node_Event_bWasCancelled, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_2, float CallFunc_GetValueAtLevel_ReturnValue_3, class ABGA_LowTower_Held_Chaplin_Parent_C* K2Node_DynamicCast_AsBGA_Low_Tower_Held_Chaplin_Parent, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_GetValueAtLevel_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetValueAtLevel_ReturnValue_5, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_6, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_7, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_3, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_8, float CallFunc_GetValueAtLevel_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetValueAtLevel_ReturnValue_10, int32 CallFunc_ConvertChargeTimeIntoLevel_Out, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_11, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AFortPlayerPawn* CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_2, bool CallFunc_IsValid_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue_1, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_4, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, float K2Node_CustomEvent_ChargingTime, float K2Node_CustomEvent_ActivationTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_Greater_FloatFloat_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FVector& CallFunc_GetProjectileSpawnLocationAndDirection_Location, const struct FRotator& CallFunc_GetProjectileSpawnLocationAndDirection_Direction, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LowTower_HeldObject_Chaplin_Primary_C", "ExecuteUbergraph_GA_LowTower_HeldObject_Chaplin_Primary");

	Params::UGA_LowTower_HeldObject_Chaplin_Primary_C_ExecuteUbergraph_GA_LowTower_HeldObject_Chaplin_Primary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyTag_1 = K2Node_CustomEvent_NotifyTag_1;
	Parms.K2Node_CustomEvent_NotifyTag = K2Node_CustomEvent_NotifyTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn = CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyTag_5 = K2Node_CustomEvent_NotifyTag_5;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_1 = CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue = CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyTag_2 = K2Node_CustomEvent_NotifyTag_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBGA_Low_Tower_Held_Chaplin_Parent = K2Node_DynamicCast_AsBGA_Low_Tower_Held_Chaplin_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_5 = CallFunc_GetValueAtLevel_ReturnValue_5;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_6 = CallFunc_GetValueAtLevel_ReturnValue_6;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_7 = CallFunc_GetValueAtLevel_ReturnValue_7;
	Parms.K2Node_CustomEvent_NotifyTag_3 = K2Node_CustomEvent_NotifyTag_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_8 = CallFunc_GetValueAtLevel_ReturnValue_8;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_9 = CallFunc_GetValueAtLevel_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_10 = CallFunc_GetValueAtLevel_ReturnValue_10;
	Parms.CallFunc_ConvertChargeTimeIntoLevel_Out = CallFunc_ConvertChargeTimeIntoLevel_Out;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_11 = CallFunc_GetValueAtLevel_ReturnValue_11;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_PlayMontageAndWaitNotify_ReturnValue = CallFunc_PlayMontageAndWaitNotify_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_2 = CallFunc_GetFortAvatarPawn_AsFort_Player_Pawn_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_MakeEffectContext_ReturnValue_1 = CallFunc_MakeEffectContext_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyTag_4 = K2Node_CustomEvent_NotifyTag_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_ChargingTime = K2Node_CustomEvent_ChargingTime;
	Parms.K2Node_CustomEvent_ActivationTime = K2Node_CustomEvent_ActivationTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_GetProjectileSpawnLocationAndDirection_Location = CallFunc_GetProjectileSpawnLocationAndDirection_Location;
	Parms.CallFunc_GetProjectileSpawnLocationAndDirection_Direction = CallFunc_GetProjectileSpawnLocationAndDirection_Direction;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


