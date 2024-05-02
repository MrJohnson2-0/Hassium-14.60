#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C
// (None)

class UClass* UBP_TimeSynthTrackComponent_DataTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TimeSynthTrackComponent_DataTracker_C");

	return Clss;
}


// BP_TimeSynthTrackComponent_DataTracker_C BP_TimeSynthTrackComponent_DataTracker.Default__BP_TimeSynthTrackComponent_DataTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TimeSynthTrackComponent_DataTracker_C* UBP_TimeSynthTrackComponent_DataTracker_C::GetDefaultObj()
{
	static class UBP_TimeSynthTrackComponent_DataTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TimeSynthTrackComponent_DataTracker_C*>(UBP_TimeSynthTrackComponent_DataTracker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.QueueTrackStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_Outro                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::QueueTrackStop(bool Play_Outro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "QueueTrackStop");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_QueueTrackStop_Params Parms{};

	Parms.Play_Outro = Play_Outro;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_Enabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RowToBool_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::GetIsEnabled(bool* Enabled, bool CallFunc_GetIsEnabled_Enabled, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GetIsEnabled");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_GetIsEnabled_Params Parms{};

	Parms.CallFunc_GetIsEnabled_Enabled = CallFunc_GetIsEnabled_Enabled;
	Parms.CallFunc_RowToBool_ReturnValue = CallFunc_RowToBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetRemainingEventCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Cooldown                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::GetRemainingEventCooldown(float* Cooldown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GetRemainingEventCooldown");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_GetRemainingEventCooldown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Cooldown != nullptr)
		*Cooldown = Parms.Cooldown;

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnAnyEventValueChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*Data_Tracker_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Has_Event_Values                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnAnyEventValueChanged(class UFortGameplayDataTrackerComponent* Data_Tracker_Component, bool Has_Event_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnAnyEventValueChanged");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_OnAnyEventValueChanged_Params Parms{};

	Parms.Data_Tracker_Component = Data_Tracker_Component;
	Parms.Has_Event_Values = Has_Event_Values;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerComponentUnRegistered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*Data_Tracker_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerComponentUnRegistered(class UFortGameplayDataTrackerComponent* Data_Tracker_Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerComponentUnRegistered");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_OnDataTrackerComponentUnRegistered_Params Parms{};

	Parms.Data_Tracker_Component = Data_Tracker_Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerComponentRegistered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*Data_Tracker_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerComponentRegistered(class UFortGameplayDataTrackerComponent* Data_Tracker_Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerComponentRegistered");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_OnDataTrackerComponentRegistered_Params Parms{};

	Parms.Data_Tracker_Component = Data_Tracker_Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetDataTrackerComponentManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortGameplayDataTrackerComponent*>CallFunc_GetRegisteredDataTrackerComponents_OutDataTrackerComponents(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortGameplayDataTrackerComponent*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponentManager*CallFunc_GetCurrent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::GetDataTrackerComponentManager(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TArray<class UFortGameplayDataTrackerComponent*>& CallFunc_GetRegisteredDataTrackerComponents_OutDataTrackerComponents, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortGameplayDataTrackerComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GetDataTrackerComponentManager");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_GetDataTrackerComponentManager_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRegisteredDataTrackerComponents_OutDataTrackerComponents = CallFunc_GetRegisteredDataTrackerComponents_OutDataTrackerComponents;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetCurrent_ReturnValue = CallFunc_GetCurrent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.AssignDataTrackerComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*DataTrackerComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::AssignDataTrackerComponent(class UFortGameplayDataTrackerComponent* DataTrackerComponent, bool CallFunc_IsDedicatedServer_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "AssignDataTrackerComponent");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_AssignDataTrackerComponent_Params Parms{};

	Parms.DataTrackerComponent = DataTrackerComponent;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetDataTrackerComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortGameplayDataTrackerComponent*DataTrackerComponent                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::GetDataTrackerComponent(class UFortGameplayDataTrackerComponent** DataTrackerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GetDataTrackerComponent");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_GetDataTrackerComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DataTrackerComponent != nullptr)
		*DataTrackerComponent = Parms.DataTrackerComponent;

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.StopDataTracker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::StopDataTracker(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "StopDataTracker");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_StopDataTracker_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlaystate_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_TimeSynthController_Base_C*CallFunc_GetTimeSynthController_TimeSynthController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeSynth_TrackMixState    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerEnd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckPlaystate_Result, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, const struct FTimeSynth_TrackMixState& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerEnd");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_OnDataTrackerEnd_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CheckPlaystate_Result = CallFunc_CheckPlaystate_Result;
	Parms.CallFunc_GetTimeSynthController_TimeSynthController = CallFunc_GetTimeSynthController_TimeSynthController;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TimeSynthController_Base_C*CallFunc_GetTimeSynthController_TimeSynthController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlaystate_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RequestTrackChange_CanChangeTrack                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRemainingEventCooldown_Cooldown                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerUpdate(class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, bool CallFunc_CheckPlaystate_Result, bool CallFunc_RequestTrackChange_CanChangeTrack, float CallFunc_GetRemainingEventCooldown_Cooldown, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerUpdate");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_OnDataTrackerUpdate_Params Parms{};

	Parms.CallFunc_GetTimeSynthController_TimeSynthController = CallFunc_GetTimeSynthController_TimeSynthController;
	Parms.CallFunc_CheckPlaystate_Result = CallFunc_CheckPlaystate_Result;
	Parms.CallFunc_RequestTrackChange_CanChangeTrack = CallFunc_RequestTrackChange_CanChangeTrack;
	Parms.CallFunc_GetRemainingEventCooldown_Cooldown = CallFunc_GetRemainingEventCooldown_Cooldown;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TimeSynthController_Base_C*CallFunc_GetTimeSynthController_TimeSynthController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestTrackChange_CanChangeTrack                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerStart(class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, bool CallFunc_RequestTrackChange_CanChangeTrack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerStart");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_OnDataTrackerStart_Params Parms{};

	Parms.CallFunc_GetTimeSynthController_TimeSynthController = CallFunc_GetTimeSynthController_TimeSynthController;
	Parms.CallFunc_RequestTrackChange_CanChangeTrack = CallFunc_RequestTrackChange_CanChangeTrack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnReady_FFC0E068479278E143D010AF8EB81D0D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               Playlist                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnReady_FFC0E068479278E143D010AF8EB81D0D(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnReady_FFC0E068479278E143D010AF8EB81D0D");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_OnReady_FFC0E068479278E143D010AF8EB81D0D_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_TimeSynthTrackComponent_DataTracker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GamePhaseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::GamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GamePhaseChanged");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_GamePhaseChanged_Params Parms{};

	Parms.GamePhase = GamePhase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_CustomEvent_GameState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               K2Node_CustomEvent_Playlist                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (None)
// class UFortPlaylist*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CurrentPlaylistReady*CallFunc_PlaylistDataReadyAsync_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_Enabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScalableFloat              CallFunc_Array_Get_Item                                          (None)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhase        K2Node_CustomEvent_GamePhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker(int32 EntryPoint, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_Enabled, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FScalableFloat& CallFunc_Array_Get_Item, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker");

	Params::UBP_TimeSynthTrackComponent_DataTracker_C_ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GameState = K2Node_CustomEvent_GameState;
	Parms.K2Node_CustomEvent_Playlist = K2Node_CustomEvent_Playlist;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_PlaylistDataReadyAsync_ReturnValue = CallFunc_PlaylistDataReadyAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetIsEnabled_Enabled = CallFunc_GetIsEnabled_Enabled;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_GamePhase = K2Node_CustomEvent_GamePhase;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


