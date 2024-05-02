#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C
// (None)

class UClass* UGenericPetLayer_Radish_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericPetLayer_Radish_AnimBP_C");

	return Clss;
}


// GenericPetLayer_Radish_AnimBP_C GenericPetLayer_Radish_AnimBP.Default__GenericPetLayer_Radish_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenericPetLayer_Radish_AnimBP_C* UGenericPetLayer_Radish_AnimBP_C::GetDefaultObj()
{
	static class UGenericPetLayer_Radish_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericPetLayer_Radish_AnimBP_C*>(UGenericPetLayer_Radish_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C.PetFullOverrideLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PetFullOverrideLayer                                             (Parm, OutParm, NoDestructor)

void UGenericPetLayer_Radish_AnimBP_C::PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* PetFullOverrideLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPetLayer_Radish_AnimBP_C", "PetFullOverrideLayer");

	Params::UGenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (PetFullOverrideLayer != nullptr)
		*PetFullOverrideLayer = std::move(Parms.PetFullOverrideLayer);

}


// Function GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C.PetSkeletalControlLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Pose                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              LookAtOverrideInput                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LookAtTargetLocationInput                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LegIKAlphaOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HandIKAlphaOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   PetSkeletalControlLayer                                          (Parm, OutParm, NoDestructor)

void UGenericPetLayer_Radish_AnimBP_C::PetSkeletalControlLayer(const struct FPoseLink& Pose, float LookAtOverrideInput, const struct FVector& LookAtTargetLocationInput, float LegIKAlphaOverride, float HandIKAlphaOverride, struct FPoseLink* PetSkeletalControlLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPetLayer_Radish_AnimBP_C", "PetSkeletalControlLayer");

	Params::UGenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer_Params Parms{};

	Parms.Pose = Pose;
	Parms.LookAtOverrideInput = LookAtOverrideInput;
	Parms.LookAtTargetLocationInput = LookAtTargetLocationInput;
	Parms.LegIKAlphaOverride = LegIKAlphaOverride;
	Parms.HandIKAlphaOverride = HandIKAlphaOverride;

	UObject::ProcessEvent(Func, &Parms);

	if (PetSkeletalControlLayer != nullptr)
		*PetSkeletalControlLayer = std::move(Parms.PetSkeletalControlLayer);

}


// Function GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGenericPetLayer_Radish_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPetLayer_Radish_AnimBP_C", "AnimGraph");

	Params::UGenericPetLayer_Radish_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C.ExecuteUbergraph_GenericPetLayer_Radish_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericPetLayer_Radish_AnimBP_C::ExecuteUbergraph_GenericPetLayer_Radish_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericPetLayer_Radish_AnimBP_C", "ExecuteUbergraph_GenericPetLayer_Radish_AnimBP");

	Params::UGenericPetLayer_Radish_AnimBP_C_ExecuteUbergraph_GenericPetLayer_Radish_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


