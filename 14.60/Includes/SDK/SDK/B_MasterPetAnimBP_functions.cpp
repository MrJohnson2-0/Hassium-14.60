#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass B_MasterPetAnimBP.B_MasterPetAnimBP_C
// (None)

class UClass* UB_MasterPetAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_MasterPetAnimBP_C");

	return Clss;
}


// B_MasterPetAnimBP_C B_MasterPetAnimBP.Default__B_MasterPetAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_MasterPetAnimBP_C* UB_MasterPetAnimBP_C::GetDefaultObj()
{
	static class UB_MasterPetAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_MasterPetAnimBP_C*>(UB_MasterPetAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.PetSkeletalControlLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Pose                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              LookAtOverrideInput                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LookAtTargetLocationInput                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LegIKAlphaOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HandIKAlphaOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   PetSkeletalControlLayer                                          (Parm, OutParm, NoDestructor)

void UB_MasterPetAnimBP_C::PetSkeletalControlLayer(const struct FPoseLink& Pose, float LookAtOverrideInput, const struct FVector& LookAtTargetLocationInput, float LegIKAlphaOverride, float HandIKAlphaOverride, struct FPoseLink* PetSkeletalControlLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "PetSkeletalControlLayer");

	Params::UB_MasterPetAnimBP_C_PetSkeletalControlLayer_Params Parms{};

	Parms.Pose = Pose;
	Parms.LookAtOverrideInput = LookAtOverrideInput;
	Parms.LookAtTargetLocationInput = LookAtTargetLocationInput;
	Parms.LegIKAlphaOverride = LegIKAlphaOverride;
	Parms.HandIKAlphaOverride = HandIKAlphaOverride;

	UObject::ProcessEvent(Func, &Parms);

	if (PetSkeletalControlLayer != nullptr)
		*PetSkeletalControlLayer = std::move(Parms.PetSkeletalControlLayer);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.PetFullOverrideLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PetFullOverrideLayer                                             (Parm, OutParm, NoDestructor)

void UB_MasterPetAnimBP_C::PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* PetFullOverrideLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "PetFullOverrideLayer");

	Params::UB_MasterPetAnimBP_C_PetFullOverrideLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (PetFullOverrideLayer != nullptr)
		*PetFullOverrideLayer = std::move(Parms.PetFullOverrideLayer);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UB_MasterPetAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimGraph");

	Params::UB_MasterPetAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_RollRandomIdle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_RollRandomIdle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_RollRandomIdle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_RollRandomIdle2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_RollRandomIdle2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_RollRandomIdle2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_StartJump_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_StartJump_Entered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_StartJump_Entered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_StartJump_Entered_Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_StartJump_Entered_Test()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_StartJump_Entered_Test");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_CrouchIdle1_FullyBlended
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_CrouchIdle1_FullyBlended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_CrouchIdle1_FullyBlended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_CrouchIdle2_FullyBlended
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_CrouchIdle2_FullyBlended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_CrouchIdle2_FullyBlended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_Entered_Crouching
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_Entered_Crouching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_Entered_Crouching");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_Entered_DownSightsToCrouch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_Entered_DownSightsToCrouch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_Entered_DownSightsToCrouch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.LobbySkyDive_IsDiving
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::LobbySkyDive_IsDiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "LobbySkyDive_IsDiving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.LobbySkyDive_IsGliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::LobbySkyDive_IsGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "LobbySkyDive_IsGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.ExecuteUbergraph_B_MasterPetAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_MasterPetAnimBP_C::ExecuteUbergraph_B_MasterPetAnimBP(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "ExecuteUbergraph_B_MasterPetAnimBP");

	Params::UB_MasterPetAnimBP_C_ExecuteUbergraph_B_MasterPetAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


