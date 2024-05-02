#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
// (None)

class UClass* UFortAbilityTask_ApplyRootMotionMantisForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAbilityTask_ApplyRootMotionMantisForce");

	return Clss;
}


// FortAbilityTask_ApplyRootMotionMantisForce MantisRuntime.Default__FortAbilityTask_ApplyRootMotionMantisForce
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAbilityTask_ApplyRootMotionMantisForce* UFortAbilityTask_ApplyRootMotionMantisForce::GetDefaultObj()
{
	static class UFortAbilityTask_ApplyRootMotionMantisForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAbilityTask_ApplyRootMotionMantisForce*>(UFortAbilityTask_ApplyRootMotionMantisForce::StaticClass()->DefaultObject);

	return Default;
}


// Function MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce.ApplyRootMotionMantisForce
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                TechniqueMontage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAbilityTask_ApplyRootMotionMantisForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAbilityTask_ApplyRootMotionMantisForce* UFortAbilityTask_ApplyRootMotionMantisForce::ApplyRootMotionMantisForce(class UGameplayAbility* OwningAbility, float Duration, class UAnimMontage* TechniqueMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAbilityTask_ApplyRootMotionMantisForce", "ApplyRootMotionMantisForce");

	Params::UFortAbilityTask_ApplyRootMotionMantisForce_ApplyRootMotionMantisForce_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Duration = Duration;
	Parms.TechniqueMontage = TechniqueMontage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MantisRuntime.FortAnimNotify_Mantis
// (None)

class UClass* UFortAnimNotify_Mantis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnimNotify_Mantis");

	return Clss;
}


// FortAnimNotify_Mantis MantisRuntime.Default__FortAnimNotify_Mantis
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnimNotify_Mantis* UFortAnimNotify_Mantis::GetDefaultObj()
{
	static class UFortAnimNotify_Mantis* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnimNotify_Mantis*>(UFortAnimNotify_Mantis::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortAnimNotifyState_Mantis
// (None)

class UClass* UFortAnimNotifyState_Mantis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnimNotifyState_Mantis");

	return Clss;
}


// FortAnimNotifyState_Mantis MantisRuntime.Default__FortAnimNotifyState_Mantis
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnimNotifyState_Mantis* UFortAnimNotifyState_Mantis::GetDefaultObj()
{
	static class UFortAnimNotifyState_Mantis* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnimNotifyState_Mantis*>(UFortAnimNotifyState_Mantis::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortGameplayAbility_Mantis
// (None)

class UClass* UFortGameplayAbility_Mantis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_Mantis");

	return Clss;
}


// FortGameplayAbility_Mantis MantisRuntime.Default__FortGameplayAbility_Mantis
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_Mantis* UFortGameplayAbility_Mantis::GetDefaultObj()
{
	static class UFortGameplayAbility_Mantis* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_Mantis*>(UFortGameplayAbility_Mantis::StaticClass()->DefaultObject);

	return Default;
}


// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished
// (Final, Native, Protected)
// Parameters:

void UFortGameplayAbility_Mantis::OnMontageFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "OnMontageFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled
// (Final, Native, Protected)
// Parameters:

void UFortGameplayAbility_Mantis::OnMontageCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "OnMontageCancelled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnMantisTechniqueHit");

	Params::UFortGameplayAbility_Mantis_BP_OnMantisTechniqueHit_Params Parms{};

	Parms.TargetDataHandle = TargetDataHandle;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
// (None)

class UClass* UFortItemLayerAnimInstance_UncleBrolly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemLayerAnimInstance_UncleBrolly");

	return Clss;
}


// FortItemLayerAnimInstance_UncleBrolly MantisRuntime.Default__FortItemLayerAnimInstance_UncleBrolly
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemLayerAnimInstance_UncleBrolly* UFortItemLayerAnimInstance_UncleBrolly::GetDefaultObj()
{
	static class UFortItemLayerAnimInstance_UncleBrolly* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemLayerAnimInstance_UncleBrolly*>(UFortItemLayerAnimInstance_UncleBrolly::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortMantisData
// (None)

class UClass* UFortMantisData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMantisData");

	return Clss;
}


// FortMantisData MantisRuntime.Default__FortMantisData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMantisData* UFortMantisData::GetDefaultObj()
{
	static class UFortMantisData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMantisData*>(UFortMantisData::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortMantisPawnComponent
// (None)

class UClass* UFortMantisPawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMantisPawnComponent");

	return Clss;
}


// FortMantisPawnComponent MantisRuntime.Default__FortMantisPawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMantisPawnComponent* UFortMantisPawnComponent::GetDefaultObj()
{
	static class UFortMantisPawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMantisPawnComponent*>(UFortMantisPawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
// (Final, Native, Protected)
// Parameters:
// class UCharacterMovementComponent* CharMoveComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "OnPostPhysicsRotation");

	Params::UFortMantisPawnComponent_OnPostPhysicsRotation_Params Parms{};

	Parms.CharMoveComp = CharMoveComp;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
// (Final, Native, Protected)
// Parameters:
// class UCharacterMovementComponent* CharMoveComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "OnCharacterMovementPreUpdate");

	Params::UFortMantisPawnComponent_OnCharacterMovementPreUpdate_Params Parms{};

	Parms.CharMoveComp = CharMoveComp;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MantisRuntime.FortMantisWeaponComponent
// (None)

class UClass* UFortMantisWeaponComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMantisWeaponComponent");

	return Clss;
}


// FortMantisWeaponComponent MantisRuntime.Default__FortMantisWeaponComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMantisWeaponComponent* UFortMantisWeaponComponent::GetDefaultObj()
{
	static class UFortMantisWeaponComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMantisWeaponComponent*>(UFortMantisWeaponComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.UncleBrollyWeaponAnimInstance
// (None)

class UClass* UUncleBrollyWeaponAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UncleBrollyWeaponAnimInstance");

	return Clss;
}


// UncleBrollyWeaponAnimInstance MantisRuntime.Default__UncleBrollyWeaponAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UUncleBrollyWeaponAnimInstance* UUncleBrollyWeaponAnimInstance::GetDefaultObj()
{
	static class UUncleBrollyWeaponAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UUncleBrollyWeaponAnimInstance*>(UUncleBrollyWeaponAnimInstance::StaticClass()->DefaultObject);

	return Default;
}

}


