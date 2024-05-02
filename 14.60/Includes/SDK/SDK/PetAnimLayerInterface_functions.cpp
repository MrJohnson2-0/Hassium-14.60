#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass PetAnimLayerInterface.PetAnimLayerInterface_C
// (None)

class UClass* IPetAnimLayerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetAnimLayerInterface_C");

	return Clss;
}


// PetAnimLayerInterface_C PetAnimLayerInterface.Default__PetAnimLayerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPetAnimLayerInterface_C* IPetAnimLayerInterface_C::GetDefaultObj()
{
	static class IPetAnimLayerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPetAnimLayerInterface_C*>(IPetAnimLayerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PetAnimLayerInterface.PetAnimLayerInterface_C.PetSkeletalControlLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   Pose                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              LookAtOverrideInput                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LookAtTargetLocationInput                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LegIKAlphaOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HandIKAlphaOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   PetSkeletalControlLayer                                          (Parm, OutParm, NoDestructor)

void IPetAnimLayerInterface_C::PetSkeletalControlLayer(const struct FPoseLink& Pose, float LookAtOverrideInput, const struct FVector& LookAtTargetLocationInput, float LegIKAlphaOverride, float HandIKAlphaOverride, struct FPoseLink* PetSkeletalControlLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetAnimLayerInterface_C", "PetSkeletalControlLayer");

	Params::IPetAnimLayerInterface_C_PetSkeletalControlLayer_Params Parms{};

	Parms.Pose = Pose;
	Parms.LookAtOverrideInput = LookAtOverrideInput;
	Parms.LookAtTargetLocationInput = LookAtTargetLocationInput;
	Parms.LegIKAlphaOverride = LegIKAlphaOverride;
	Parms.HandIKAlphaOverride = HandIKAlphaOverride;

	UObject::ProcessEvent(Func, &Parms);

	if (PetSkeletalControlLayer != nullptr)
		*PetSkeletalControlLayer = std::move(Parms.PetSkeletalControlLayer);

}


// Function PetAnimLayerInterface.PetAnimLayerInterface_C.PetFullOverrideLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PetFullOverrideLayer                                             (Parm, OutParm, NoDestructor)

void IPetAnimLayerInterface_C::PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* PetFullOverrideLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PetAnimLayerInterface_C", "PetFullOverrideLayer");

	Params::IPetAnimLayerInterface_C_PetFullOverrideLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (PetFullOverrideLayer != nullptr)
		*PetFullOverrideLayer = std::move(Parms.PetFullOverrideLayer);

}

}


