#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C
// (Actor)

class UClass* ACreative_Device_Prop_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Creative_Device_Prop_Parent_C");

	return Clss;
}


// Creative_Device_Prop_Parent_C Creative_Device_Prop_Parent.Default__Creative_Device_Prop_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACreative_Device_Prop_Parent_C* ACreative_Device_Prop_Parent_C::GetDefaultObj()
{
	static class ACreative_Device_Prop_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACreative_Device_Prop_Parent_C*>(ACreative_Device_Prop_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponentsWithCollisionOverrides
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class USceneComponent*, enum class ECollisionEnabled>VisibilityComponents                                             (Parm, OutParm, ContainsInstancedReference)
// TMap<class USceneComponent*, enum class ECollisionEnabled>K2Node_MakeMap_Map                                               (ContainsInstancedReference)

void ACreative_Device_Prop_Parent_C::GetVisibilityComponentsWithCollisionOverrides(TMap<class USceneComponent*, enum class ECollisionEnabled>* VisibilityComponents, TMap<class USceneComponent*, enum class ECollisionEnabled> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "GetVisibilityComponentsWithCollisionOverrides");

	Params::ACreative_Device_Prop_Parent_C_GetVisibilityComponentsWithCollisionOverrides_Params Parms{};

	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

	if (VisibilityComponents != nullptr)
		*VisibilityComponents = Parms.VisibilityComponents;

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*>     VisibilityComponents                                             (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USceneComponent*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void ACreative_Device_Prop_Parent_C::GetVisibilityComponents(TArray<class USceneComponent*>* VisibilityComponents, TArray<class USceneComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "GetVisibilityComponents");

	Params::ACreative_Device_Prop_Parent_C_GetVisibilityComponents_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (VisibilityComponents != nullptr)
		*VisibilityComponents = std::move(Parms.VisibilityComponents);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Update Visibility In Game
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVisibleInGameState     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVisibleInGameState     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Visible_In_Game_Visible                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVisibleInGameState     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACreative_Device_Prop_Parent_C::Update_Visibility_In_Game(bool Temp_bool_Variable, enum class EVisibleInGameState Temp_byte_Variable, enum class EVisibleInGameState Temp_byte_Variable_1, bool CallFunc_Is_Visible_In_Game_Visible, enum class EVisibleInGameState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "Update Visibility In Game");

	Params::ACreative_Device_Prop_Parent_C_Update_Visibility_In_Game_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Is_Visible_In_Game_Visible = CallFunc_Is_Visible_In_Game_Visible;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Is Visible In Game
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACreative_Device_Prop_Parent_C::Is_Visible_In_Game(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "Is Visible In Game");

	Params::ACreative_Device_Prop_Parent_C_Is_Visible_In_Game_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.IsInPlayMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bIsInPlayMode                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInPlayMode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACreative_Device_Prop_Parent_C::IsInPlayMode(bool* bIsInPlayMode, bool CallFunc_IsInPlayMode_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "IsInPlayMode");

	Params::ACreative_Device_Prop_Parent_C_IsInPlayMode_Params Parms{};

	Parms.CallFunc_IsInPlayMode_ReturnValue = CallFunc_IsInPlayMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInPlayMode != nullptr)
		*bIsInPlayMode = Parms.bIsInPlayMode;

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintModifyIncomingDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       InTags                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandleEffectContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPlayMode_bIsInPlayMode                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

float ACreative_Device_Prop_Parent_C::BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser, bool CallFunc_IsInPlayMode_bIsInPlayMode, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BlueprintModifyIncomingDamage");

	Params::ACreative_Device_Prop_Parent_C_BlueprintModifyIncomingDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.InTags = InTags;
	Parms.EffectContext = EffectContext;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.CallFunc_IsInPlayMode_bIsInPlayMode = CallFunc_IsInPlayMode_bIsInPlayMode;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device Failed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::Activate_Device_Failed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "Activate Device Failed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Attempt Activate Device
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Instigating_Controller                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Additional_Requirements                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEnabled_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACreative_Device_Prop_Parent_C::Attempt_Activate_Device(class AController* Instigating_Controller, bool Additional_Requirements, bool CallFunc_IsEnabled_Enabled, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "Attempt Activate Device");

	Params::ACreative_Device_Prop_Parent_C_Attempt_Activate_Device_Params Parms{};

	Parms.Instigating_Controller = Instigating_Controller;
	Parms.Additional_Requirements = Additional_Requirements;
	Parms.CallFunc_IsEnabled_Enabled = CallFunc_IsEnabled_Enabled;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Initialize Device
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInPlayMode_bIsInPlayMode                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACreative_Device_Prop_Parent_C::Initialize_Device(bool CallFunc_IsInPlayMode_bIsInPlayMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "Initialize Device");

	Params::ACreative_Device_Prop_Parent_C_Initialize_Device_Params Parms{};

	Parms.CallFunc_IsInPlayMode_bIsInPlayMode = CallFunc_IsInPlayMode_bIsInPlayMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ACreative_Device_Prop_Parent_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BlueprintOnLocalInteract");

	Params::ACreative_Device_Prop_Parent_C_BlueprintOnLocalInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETInteractionType       InteractionType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               bInteractSuccess                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInPlayMode_bIsInPlayMode                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ACreative_Device_Prop_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, bool bInteractSuccess, bool CallFunc_IsInPlayMode_bIsInPlayMode, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BlueprintCanInteract");

	Params::ACreative_Device_Prop_Parent_C_BlueprintCanInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;
	Parms.bInteractSuccess = bInteractSuccess;
	Parms.CallFunc_IsInPlayMode_bIsInPlayMode = CallFunc_IsInPlayMode_bIsInPlayMode;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume = CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue = CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::Activate_Device()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "Activate Device");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate on Phase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortMinigameState      State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPlayMode_bIsInPlayMode                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivatedOnPhase_Enabled                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACreative_Device_Prop_Parent_C::Activate_on_Phase(enum class EFortMinigameState State, bool CallFunc_IsInPlayMode_bIsInPlayMode, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsActivatedOnPhase_Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "Activate on Phase");

	Params::ACreative_Device_Prop_Parent_C_Activate_on_Phase_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_IsInPlayMode_bIsInPlayMode = CallFunc_IsInPlayMode_bIsInPlayMode;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsActivatedOnPhase_Enabled = CallFunc_IsActivatedOnPhase_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.PlayModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInPlayMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACreative_Device_Prop_Parent_C::PlayModeChanged(class AFortMinigame* Minigame, bool bIsInPlayMode, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "PlayModeChanged");

	Params::ACreative_Device_Prop_Parent_C_PlayModeChanged_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.bIsInPlayMode = bIsInPlayMode;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACreative_Device_Prop_Parent_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature");

	Params::ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature_Params Parms{};

	Parms.Minigame = Minigame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACreative_Device_Prop_Parent_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature");

	Params::ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature_Params Parms{};

	Parms.Minigame = Minigame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Mingame State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMinigameState      MinigameState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACreative_Device_Prop_Parent_C::On_Mingame_State_Changed(class AFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "On Mingame State Changed");

	Params::ACreative_Device_Prop_Parent_C_On_Mingame_State_Changed_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "OnWorldReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::OnMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "OnMinigameStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::OnMinigameEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "OnMinigameEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ExecuteUbergraph_Creative_Device_Prop_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               K2Node_ComponentBoundEvent_Minigame                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               K2Node_ComponentBoundEvent_Minigame_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortMinigame*               K2Node_CustomEvent_Minigame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMinigameState      K2Node_CustomEvent_MinigameState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetVisibilityComponents_VisibilityComponents            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TMap<class USceneComponent*, enum class ECollisionEnabled>CallFunc_GetVisibilityComponentsWithCollisionOverrides_VisibilityComponents(ContainsInstancedReference)

void ACreative_Device_Prop_Parent_C::ExecuteUbergraph_Creative_Device_Prop_Parent(int32 EntryPoint, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame, bool CallFunc_IsValid_ReturnValue, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortMinigame* K2Node_CustomEvent_Minigame, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class USceneComponent*>& CallFunc_GetVisibilityComponents_VisibilityComponents, TMap<class USceneComponent*, enum class ECollisionEnabled> CallFunc_GetVisibilityComponentsWithCollisionOverrides_VisibilityComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "ExecuteUbergraph_Creative_Device_Prop_Parent");

	Params::ACreative_Device_Prop_Parent_C_ExecuteUbergraph_Creative_Device_Prop_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Minigame = K2Node_ComponentBoundEvent_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Minigame_1 = K2Node_ComponentBoundEvent_Minigame_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Minigame = K2Node_CustomEvent_Minigame;
	Parms.K2Node_CustomEvent_MinigameState = K2Node_CustomEvent_MinigameState;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetVisibilityComponents_VisibilityComponents = CallFunc_GetVisibilityComponents_VisibilityComponents;
	Parms.CallFunc_GetVisibilityComponentsWithCollisionOverrides_VisibilityComponents = CallFunc_GetVisibilityComponentsWithCollisionOverrides_VisibilityComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Play Mode Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_Play_Mode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACreative_Device_Prop_Parent_C::On_Play_Mode_Changed__DelegateSignature(bool New_Play_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "On Play Mode Changed__DelegateSignature");

	Params::ACreative_Device_Prop_Parent_C_On_Play_Mode_Changed__DelegateSignature_Params Parms{};

	Parms.New_Play_Mode = New_Play_Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Initialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::On_Device_Initialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "On Device Initialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Activated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACreative_Device_Prop_Parent_C::On_Device_Activated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Prop_Parent_C", "On Device Activated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


