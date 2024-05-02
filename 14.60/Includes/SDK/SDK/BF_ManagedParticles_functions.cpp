#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BF_ManagedParticles.BF_ManagedParticles_C
// (None)

class UClass* UBF_ManagedParticles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BF_ManagedParticles_C");

	return Clss;
}


// BF_ManagedParticles_C BF_ManagedParticles.Default__BF_ManagedParticles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBF_ManagedParticles_C* UBF_ManagedParticles_C::GetDefaultObj()
{
	static class UBF_ManagedParticles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBF_ManagedParticles_C*>(UBF_ManagedParticles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BF_ManagedParticles.BF_ManagedParticles_C.Set Managed Particles Parameter (Bool)
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void UBF_ManagedParticles_C::Set_Managed_Particles_Parameter__Bool_(class FName Name, bool Value, class UObject* __WorldContext, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BF_ManagedParticles_C", "Set Managed Particles Parameter (Bool)");

	Params::UBF_ManagedParticles_C_Set_Managed_Particles_Parameter__Bool__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BF_ManagedParticles.BF_ManagedParticles_C.Deactivate Managed Niagara
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void UBF_ManagedParticles_C::Deactivate_Managed_Niagara(class UObject* __WorldContext, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BF_ManagedParticles_C", "Deactivate Managed Niagara");

	Params::UBF_ManagedParticles_C_Deactivate_Managed_Niagara_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BF_ManagedParticles.BF_ManagedParticles_C.Activate Managed Niagara
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Niagara                                                          (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void UBF_ManagedParticles_C::Activate_Managed_Niagara(bool Reset, class UObject* __WorldContext, const struct FGameplayTag& Niagara, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BF_ManagedParticles_C", "Activate Managed Niagara");

	Params::UBF_ManagedParticles_C_Activate_Managed_Niagara_Params Parms{};

	Parms.Reset = Reset;
	Parms.__WorldContext = __WorldContext;
	Parms.Niagara = Niagara;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BF_ManagedParticles.BF_ManagedParticles_C.getNiagaraParticles
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Gameplay_Tag_Container                                           (Parm, OutParm)
// struct FGameplayTag                NiagaraTag                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)

void UBF_ManagedParticles_C::GetNiagaraParticles(class UObject* __WorldContext, struct FGameplayTagContainer* Gameplay_Tag_Container, const struct FGameplayTag& NiagaraTag, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BF_ManagedParticles_C", "getNiagaraParticles");

	Params::UBF_ManagedParticles_C_GetNiagaraParticles_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.NiagaraTag = NiagaraTag;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Gameplay_Tag_Container != nullptr)
		*Gameplay_Tag_Container = std::move(Parms.Gameplay_Tag_Container);

}

}


