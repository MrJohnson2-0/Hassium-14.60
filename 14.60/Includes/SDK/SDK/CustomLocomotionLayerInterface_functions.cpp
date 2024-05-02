#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C
// (None)

class UClass* ICustomLocomotionLayerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomLocomotionLayerInterface_C");

	return Clss;
}


// CustomLocomotionLayerInterface_C CustomLocomotionLayerInterface.Default__CustomLocomotionLayerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICustomLocomotionLayerInterface_C* ICustomLocomotionLayerInterface_C::GetDefaultObj()
{
	static class ICustomLocomotionLayerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICustomLocomotionLayerInterface_C*>(ICustomLocomotionLayerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseFullBodyAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionFullBodyAdditive                                 (Parm, OutParm, NoDestructor)

void ICustomLocomotionLayerInterface_C::CustomLocomotionFullBodyAdditive(const struct FPoseLink& InPoseFullBodyAdditive, struct FPoseLink* CustomLocomotionFullBodyAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomLocomotionLayerInterface_C", "CustomLocomotionFullBodyAdditive");

	Params::ICustomLocomotionLayerInterface_C_CustomLocomotionFullBodyAdditive_Params Parms{};

	Parms.InPoseFullBodyAdditive = InPoseFullBodyAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionFullBodyAdditive != nullptr)
		*CustomLocomotionFullBodyAdditive = std::move(Parms.CustomLocomotionFullBodyAdditive);

}


// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionPreIKLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePreIK                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionPreIKLayer                                       (Parm, OutParm, NoDestructor)

void ICustomLocomotionLayerInterface_C::CustomLocomotionPreIKLayer(const struct FPoseLink& InPosePreIK, struct FPoseLink* CustomLocomotionPreIKLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomLocomotionLayerInterface_C", "CustomLocomotionPreIKLayer");

	Params::ICustomLocomotionLayerInterface_C_CustomLocomotionPreIKLayer_Params Parms{};

	Parms.InPosePreIK = InPosePreIK;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionPreIKLayer != nullptr)
		*CustomLocomotionPreIKLayer = std::move(Parms.CustomLocomotionPreIKLayer);

}


// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughCustomFullBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionFullBodyLayer                                    (Parm, OutParm, NoDestructor)

void ICustomLocomotionLayerInterface_C::CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomLocomotionLayerInterface_C", "CustomLocomotionFullBodyLayer");

	Params::ICustomLocomotionLayerInterface_C_CustomLocomotionFullBodyLayer_Params Parms{};

	Parms.PassThroughCustomFullBody = PassThroughCustomFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionFullBodyLayer != nullptr)
		*CustomLocomotionFullBodyLayer = std::move(Parms.CustomLocomotionFullBodyLayer);

}

}


