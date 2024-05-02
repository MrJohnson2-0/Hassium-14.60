#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C
// (Actor)

class UClass* ACCPM_Parent_WatchCosmeticStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_Parent_WatchCosmeticStat_C");

	return Clss;
}


// CCPM_Parent_WatchCosmeticStat_C CCPM_Parent_WatchCosmeticStat.Default__CCPM_Parent_WatchCosmeticStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_Parent_WatchCosmeticStat_C* ACCPM_Parent_WatchCosmeticStat_C::GetDefaultObj()
{
	static class ACCPM_Parent_WatchCosmeticStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_Parent_WatchCosmeticStat_C*>(ACCPM_Parent_WatchCosmeticStat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.IsStagePlayerLeftAliveReuirementsMet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InStageNumberBeingTested                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InStageThreshold                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InStatValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentActiveStageNumber                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PassedRequirements                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::IsStagePlayerLeftAliveReuirementsMet(int32 InStageNumberBeingTested, int32 InStageThreshold, int32 InStatValue, int32 CurrentActiveStageNumber, bool* PassedRequirements, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "IsStagePlayerLeftAliveReuirementsMet");

	Params::ACCPM_Parent_WatchCosmeticStat_C_IsStagePlayerLeftAliveReuirementsMet_Params Parms{};

	Parms.InStageNumberBeingTested = InStageNumberBeingTested;
	Parms.InStageThreshold = InStageThreshold;
	Parms.InStatValue = InStatValue;
	Parms.CurrentActiveStageNumber = CurrentActiveStageNumber;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PassedRequirements != nullptr)
		*PassedRequirements = Parms.PassedRequirements;

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.IsStageStatReuirementsMet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InStageNumberBeingTested                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InStageThreshold                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InStatValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentActiveStageNumber                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PassedRequirements                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::IsStageStatReuirementsMet(int32 InStageNumberBeingTested, int32 InStageThreshold, int32 InStatValue, int32 CurrentActiveStageNumber, bool* PassedRequirements, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "IsStageStatReuirementsMet");

	Params::ACCPM_Parent_WatchCosmeticStat_C_IsStageStatReuirementsMet_Params Parms{};

	Parms.InStageNumberBeingTested = InStageNumberBeingTested;
	Parms.InStageThreshold = InStageThreshold;
	Parms.InStatValue = InStatValue;
	Parms.CurrentActiveStageNumber = CurrentActiveStageNumber;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PassedRequirements != nullptr)
		*PassedRequirements = Parms.PassedRequirements;

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.PlayersLeftCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value_to_Check                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Player_Left_Thresholds                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        DEBUG_Minus_Stat_Checked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStagePlayerLeftAliveReuirementsMet_PassedRequirements (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::PlayersLeftCheck(int32 Value_to_Check, TArray<int32>& Player_Left_Thresholds, class FName DEBUG_Minus_Stat_Checked, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsStagePlayerLeftAliveReuirementsMet_PassedRequirements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "PlayersLeftCheck");

	Params::ACCPM_Parent_WatchCosmeticStat_C_PlayersLeftCheck_Params Parms{};

	Parms.Value_to_Check = Value_to_Check;
	Parms.Player_Left_Thresholds = Player_Left_Thresholds;
	Parms.DEBUG_Minus_Stat_Checked = DEBUG_Minus_Stat_Checked;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_IsStagePlayerLeftAliveReuirementsMet_PassedRequirements = CallFunc_IsStagePlayerLeftAliveReuirementsMet_PassedRequirements;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.Array Is Valid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                Name_Array                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Vaild                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::Array_Is_Valid(TArray<class FName>& Name_Array, bool* Vaild, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "Array Is Valid");

	Params::ACCPM_Parent_WatchCosmeticStat_C_Array_Is_Valid_Params Parms{};

	Parms.Name_Array = Name_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Vaild != nullptr)
		*Vaild = Parms.Vaild;

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.Cosmetic Stat Check
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value_to_Check                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      StatThresholds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        DEBUG_Minus_Stat_Checked                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStageStatReuirementsMet_PassedRequirements            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::Cosmetic_Stat_Check(int32 Value_to_Check, TArray<int32>& StatThresholds, class FName DEBUG_Minus_Stat_Checked, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsStageStatReuirementsMet_PassedRequirements, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "Cosmetic Stat Check");

	Params::ACCPM_Parent_WatchCosmeticStat_C_Cosmetic_Stat_Check_Params Parms{};

	Parms.Value_to_Check = Value_to_Check;
	Parms.StatThresholds = StatThresholds;
	Parms.DEBUG_Minus_Stat_Checked = DEBUG_Minus_Stat_Checked;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_IsStageStatReuirementsMet_PassedRequirements = CallFunc_IsStageStatReuirementsMet_PassedRequirements;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48");

	Params::ACCPM_Parent_WatchCosmeticStat_C_OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48_Params Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.ActivatingCosmeticState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StageNumBeingActivated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::ActivatingCosmeticState(int32 StageNumBeingActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "ActivatingCosmeticState");

	Params::ACCPM_Parent_WatchCosmeticStat_C_ActivatingCosmeticState_Params Parms{};

	Parms.StageNumBeingActivated = StageNumBeingActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACCPM_Parent_WatchCosmeticStat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.TrackPlayersLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumPlayersLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::TrackPlayersLeft(int32 NumPlayersLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "TrackPlayersLeft");

	Params::ACCPM_Parent_WatchCosmeticStat_C_TrackPlayersLeft_Params Parms{};

	Parms.NumPlayersLeft = NumPlayersLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_Parent_WatchCosmeticStat_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.CosmeticStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stat_Value                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::CosmeticStateChanged(int32 Stat_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "CosmeticStateChanged");

	Params::ACCPM_Parent_WatchCosmeticStat_C_CosmeticStateChanged_Params Parms{};

	Parms.Stat_Value = Stat_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Stat_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StatName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StatValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StageNumBeingActivated                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumPlayersLeft                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_CosmeticAdaptiveStatWatcher*CallFunc_WatchCosmeticStat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayersLeft                CallFunc_GetPlayersLeft_ReturnValue                              (NoDestructor)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat(int32 EntryPoint, int32 K2Node_CustomEvent_Stat_Value, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, int32 K2Node_CustomEvent_StageNumBeingActivated, int32 K2Node_CustomEvent_NumPlayersLeft, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, const struct FPlayersLeft& CallFunc_GetPlayersLeft_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat");

	Params::ACCPM_Parent_WatchCosmeticStat_C_ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Stat_Value = K2Node_CustomEvent_Stat_Value;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CustomEvent_StatName = K2Node_CustomEvent_StatName;
	Parms.K2Node_CustomEvent_StatValue = K2Node_CustomEvent_StatValue;
	Parms.K2Node_CustomEvent_StageNumBeingActivated = K2Node_CustomEvent_StageNumBeingActivated;
	Parms.K2Node_CustomEvent_NumPlayersLeft = K2Node_CustomEvent_NumPlayersLeft;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue = CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WatchCosmeticStat_ReturnValue = CallFunc_WatchCosmeticStat_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayersLeft_ReturnValue = CallFunc_GetPlayersLeft_ReturnValue;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue_1 = CallFunc_GreaterEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


