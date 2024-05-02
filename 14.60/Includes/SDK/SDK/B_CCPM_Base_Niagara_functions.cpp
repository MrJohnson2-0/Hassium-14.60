#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C
// (Actor)

class UClass* AB_CCPM_Base_Niagara_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CCPM_Base_Niagara_C");

	return Clss;
}


// B_CCPM_Base_Niagara_C B_CCPM_Base_Niagara.Default__B_CCPM_Base_Niagara_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CCPM_Base_Niagara_C* AB_CCPM_Base_Niagara_C::GetDefaultObj()
{
	static class AB_CCPM_Base_Niagara_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CCPM_Base_Niagara_C*>(AB_CCPM_Base_Niagara_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.getNiagaraSuperLevelParticles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)

struct FGameplayTagContainer AB_CCPM_Base_Niagara_C::GetNiagaraSuperLevelParticles(TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "getNiagaraSuperLevelParticles");

	Params::AB_CCPM_Base_Niagara_C_GetNiagaraSuperLevelParticles_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.debug FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Print_String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_C::Debug_FX(const class FString& Print_String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "debug FX");

	Params::AB_CCPM_Base_Niagara_C_Debug_FX_Params Parms{};

	Parms.Print_String = Print_String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.getIsFrontEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsInFrontEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInFrontend_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::GetIsFrontEnd(bool* IsInFrontEnd, bool CallFunc_IsInFrontend_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "getIsFrontEnd");

	Params::AB_CCPM_Base_Niagara_C_GetIsFrontEnd_Params Parms{};

	Parms.CallFunc_IsInFrontend_ReturnValue = CallFunc_IsInFrontend_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInFrontEnd != nullptr)
		*IsInFrontEnd = Parms.IsInFrontEnd;

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.isStageStatRequirementsMet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::IsStageStatRequirementsMet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "isStageStatRequirementsMet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Bool)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void AB_CCPM_Base_Niagara_C::Set_Niagara_System_User_Variable__Bool_(class FName Name, bool Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "set Niagara System User Variable (Bool)");

	Params::AB_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Bool__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Color)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void AB_CCPM_Base_Niagara_C::Set_Niagara_System_User_Variable__Color_(class FName Name, const struct FLinearColor& Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "set Niagara System User Variable (Color)");

	Params::AB_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Color__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Vector)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void AB_CCPM_Base_Niagara_C::Set_Niagara_System_User_Variable__Vector_(class FName Name, const struct FVector& Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "set Niagara System User Variable (Vector)");

	Params::AB_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Vector__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Int)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void AB_CCPM_Base_Niagara_C::Set_Niagara_System_User_Variable__Int_(class FName Name, int32 Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "set Niagara System User Variable (Int)");

	Params::AB_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Int__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.set Niagara System User Variable (Float)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void AB_CCPM_Base_Niagara_C::Set_Niagara_System_User_Variable__Float_(class FName Name, float Value, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "set Niagara System User Variable (Float)");

	Params::AB_CCPM_Base_Niagara_C_Set_Niagara_System_User_Variable__Float__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.getIsDriving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsDriving                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::GetIsDriving(bool* IsDriving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "getIsDriving");

	Params::AB_CCPM_Base_Niagara_C_GetIsDriving_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDriving != nullptr)
		*IsDriving = Parms.IsDriving;

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.getNiagaraParticles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       Gameplay_Tag_Container                                           (Parm, OutParm)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)

void AB_CCPM_Base_Niagara_C::GetNiagaraParticles(struct FGameplayTagContainer* Gameplay_Tag_Container, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "getNiagaraParticles");

	Params::AB_CCPM_Base_Niagara_C_GetNiagaraParticles_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Gameplay_Tag_Container != nullptr)
		*Gameplay_Tag_Container = std::move(Parms.Gameplay_Tag_Container);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnStatChanged_B170ACAB47DC1A9DBE8D138BF0A01420
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_C::OnStatChanged_B170ACAB47DC1A9DBE8D138BF0A01420(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnStatChanged_B170ACAB47DC1A9DBE8D138BF0A01420");

	Params::AB_CCPM_Base_Niagara_C_OnStatChanged_B170ACAB47DC1A9DBE8D138BF0A01420_Params Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnComponentsReady_697782874F9B58BD916BDBA30537E29E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::OnComponentsReady_697782874F9B58BD916BDBA30537E29E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnComponentsReady_697782874F9B58BD916BDBA30537E29E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "ReceiveEndPlay");

	Params::AB_CCPM_Base_Niagara_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.ResOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::ResOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "ResOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.ResIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::ResIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "ResIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnTargetingOrFirstPersonCameraChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::OnTargetingOrFirstPersonCameraChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnTargetingOrFirstPersonCameraChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Watch Stats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::Watch_Stats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Watch Stats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.On Stat Canged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Stat_Name                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Stat_Value                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_C::On_Stat_Canged(class FName Stat_Name, int32 Stat_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "On Stat Canged");

	Params::AB_CCPM_Base_Niagara_C_On_Stat_Canged_Params Parms{};

	Parms.Stat_Name = Stat_Name;
	Parms.Stat_Value = Stat_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Morning Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               At_Creation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::Morning_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Morning Phase");

	Params::AB_CCPM_Base_Niagara_C_Morning_Phase_Params Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Day Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               At_Creation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::Day_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Day Phase");

	Params::AB_CCPM_Base_Niagara_C_Day_Phase_Params Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Evening Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               At_Creation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::Evening_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Evening Phase");

	Params::AB_CCPM_Base_Niagara_C_Evening_Phase_Params Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Night Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               At_Creation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::Night_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Night Phase");

	Params::AB_CCPM_Base_Niagara_C_Night_Phase_Params Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnDayPhaseChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnDayPhaseChanged");

	Params::AB_CCPM_Base_Niagara_C_OnDayPhaseChanged_Params Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Reset Exit Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::Reset_Exit_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Reset Exit Vehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Reset Enter Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::Reset_Enter_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Reset Enter Vehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Vehicle Entry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::Vehicle_Entry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Vehicle Entry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnExitVehicle
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnExitVehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnEnterVehicle
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>VehicleEntered                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)

void AB_CCPM_Base_Niagara_C::OnEnterVehicle(TScriptInterface<class IFortVehicleInterface>& VehicleEntered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnEnterVehicle");

	Params::AB_CCPM_Base_Niagara_C_OnEnterVehicle_Params Parms{};

	Parms.VehicleEntered = VehicleEntered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Character Movement Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_C::Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Character Movement Updated");

	Params::AB_CCPM_Base_Niagara_C_Character_Movement_Updated_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = OldLocation;
	Parms.OldVelocity = OldVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnBeginSkydiving
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::OnBeginSkydiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnBeginSkydiving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.OnEndSkydiving
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::OnEndSkydiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "OnEndSkydiving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.isHiddenInProp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::IsHiddenInProp(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "isHiddenInProp");

	Params::AB_CCPM_Base_Niagara_C_IsHiddenInProp_Params Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Enter Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::Enter_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Enter Vehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Exit Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::Exit_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Exit Vehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.Manage Particles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_C::Manage_Particles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "Manage Particles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara.B_CCPM_Base_Niagara_C.ExecuteUbergraph_B_CCPM_Base_Niagara
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_StatName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StatValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_WaitManagedParticles*CallFunc_SpawnManagedParticlesWithCallback_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)
// bool                               CallFunc_IsInFrontend_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container_1            (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Stat_Name                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Stat_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CosmeticAdaptiveStatWatcher*CallFunc_WatchCosmeticStat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_At_Creation_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_At_Creation_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_At_Creation_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_At_Creation                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDayPhase           K2Node_Event_CurrentDayPhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_PreviousDayPhase                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAtCreation                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_getIsDriving_isDriving                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortVehicleInterface>K2Node_Event_VehicleEntered                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_getIsDriving_isDriving_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_DeltaSeconds                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OldLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OldVelocity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container_2            (None)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container_3            (None)
// bool                               K2Node_CustomEvent_isHidden                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container_4            (None)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_getIsFrontEnd_IsInFrontEnd                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_C::ExecuteUbergraph_B_CCPM_Base_Niagara(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, int32 Temp_int_Variable, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAsyncAction_WaitManagedParticles* CallFunc_SpawnManagedParticlesWithCallback_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container, bool CallFunc_IsInFrontend_ReturnValue, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class FName K2Node_CustomEvent_Stat_Name, int32 K2Node_CustomEvent_Stat_Value, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool K2Node_CustomEvent_At_Creation_3, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_At_Creation_2, bool K2Node_CustomEvent_At_Creation_1, bool K2Node_CustomEvent_At_Creation, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_getIsDriving_isDriving, TScriptInterface<class IFortVehicleInterface> K2Node_Event_VehicleEntered, bool CallFunc_getIsDriving_isDriving_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float K2Node_CustomEvent_DeltaSeconds, const struct FVector& K2Node_CustomEvent_OldLocation, const struct FVector& K2Node_CustomEvent_OldVelocity, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container_2, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container_3, bool K2Node_CustomEvent_isHidden, bool CallFunc_BooleanAND_ReturnValue_3, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container_4, bool Temp_bool_IsClosed_Variable, bool CallFunc_getIsFrontEnd_IsInFrontEnd, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_C", "ExecuteUbergraph_B_CCPM_Base_Niagara");

	Params::AB_CCPM_Base_Niagara_C_ExecuteUbergraph_B_CCPM_Base_Niagara_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_StatName = K2Node_CustomEvent_StatName;
	Parms.K2Node_CustomEvent_StatValue = K2Node_CustomEvent_StatValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SpawnManagedParticlesWithCallback_ReturnValue = CallFunc_SpawnManagedParticlesWithCallback_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;
	Parms.CallFunc_IsInFrontend_ReturnValue = CallFunc_IsInFrontend_ReturnValue;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container_1 = CallFunc_getNiagaraParticles_Gameplay_Tag_Container_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue = CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	Parms.K2Node_CustomEvent_Stat_Name = K2Node_CustomEvent_Stat_Name;
	Parms.K2Node_CustomEvent_Stat_Value = K2Node_CustomEvent_Stat_Value;
	Parms.CallFunc_WatchCosmeticStat_ReturnValue = CallFunc_WatchCosmeticStat_ReturnValue;
	Parms.K2Node_CustomEvent_At_Creation_3 = K2Node_CustomEvent_At_Creation_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_At_Creation_2 = K2Node_CustomEvent_At_Creation_2;
	Parms.K2Node_CustomEvent_At_Creation_1 = K2Node_CustomEvent_At_Creation_1;
	Parms.K2Node_CustomEvent_At_Creation = K2Node_CustomEvent_At_Creation;
	Parms.K2Node_Event_CurrentDayPhase = K2Node_Event_CurrentDayPhase;
	Parms.K2Node_Event_PreviousDayPhase = K2Node_Event_PreviousDayPhase;
	Parms.K2Node_Event_bAtCreation = K2Node_Event_bAtCreation;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_getIsDriving_isDriving = CallFunc_getIsDriving_isDriving;
	Parms.K2Node_Event_VehicleEntered = K2Node_Event_VehicleEntered;
	Parms.CallFunc_getIsDriving_isDriving_1 = CallFunc_getIsDriving_isDriving_1;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue_1 = CallFunc_GetAssociatedPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue_2 = CallFunc_GetAssociatedPlayerPawn_ReturnValue_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue_3 = CallFunc_GetAssociatedPlayerPawn_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena_1 = K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_DeltaSeconds = K2Node_CustomEvent_DeltaSeconds;
	Parms.K2Node_CustomEvent_OldLocation = K2Node_CustomEvent_OldLocation;
	Parms.K2Node_CustomEvent_OldVelocity = K2Node_CustomEvent_OldVelocity;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container_2 = CallFunc_getNiagaraParticles_Gameplay_Tag_Container_2;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container_3 = CallFunc_getNiagaraParticles_Gameplay_Tag_Container_3;
	Parms.K2Node_CustomEvent_isHidden = K2Node_CustomEvent_isHidden;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container_4 = CallFunc_getNiagaraParticles_Gameplay_Tag_Container_4;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_getIsFrontEnd_IsInFrontEnd = CallFunc_getIsFrontEnd_IsInFrontEnd;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


