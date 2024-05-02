#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C
// (None)

class UClass* IBPi_CreativeMoveToolOverrides_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_CreativeMoveToolOverrides_C");

	return Clss;
}


// BPi_CreativeMoveToolOverrides_C BPi_CreativeMoveToolOverrides.Default__BPi_CreativeMoveToolOverrides_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPi_CreativeMoveToolOverrides_C* IBPi_CreativeMoveToolOverrides_C::GetDefaultObj()
{
	static class IBPi_CreativeMoveToolOverrides_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPi_CreativeMoveToolOverrides_C*>(IBPi_CreativeMoveToolOverrides_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorBounds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Override_Bounds                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Bounds                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_CreativeMoveToolOverrides_C::GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_CreativeMoveToolOverrides_C", "GetCreativeActorBounds");

	Params::IBPi_CreativeMoveToolOverrides_C_GetCreativeActorBounds_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Override_Bounds != nullptr)
		*Override_Bounds = Parms.Override_Bounds;

	if (Bounds != nullptr)
		*Bounds = std::move(Parms.Bounds);

}


// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorOrigin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Override                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Center                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_CreativeMoveToolOverrides_C::GetCreativeActorOrigin(bool* Override, struct FVector* Center)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_CreativeMoveToolOverrides_C", "GetCreativeActorOrigin");

	Params::IBPi_CreativeMoveToolOverrides_C_GetCreativeActorOrigin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Override != nullptr)
		*Override = Parms.Override;

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

}

}


