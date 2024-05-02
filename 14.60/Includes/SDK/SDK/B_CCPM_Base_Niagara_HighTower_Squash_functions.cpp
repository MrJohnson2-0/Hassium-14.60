#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C
// (Actor)

class UClass* AB_CCPM_Base_Niagara_HighTower_Squash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CCPM_Base_Niagara_HighTower_Squash_C");

	return Clss;
}


// B_CCPM_Base_Niagara_HighTower_Squash_C B_CCPM_Base_Niagara_HighTower_Squash.Default__B_CCPM_Base_Niagara_HighTower_Squash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CCPM_Base_Niagara_HighTower_Squash_C* AB_CCPM_Base_Niagara_HighTower_Squash_C::GetDefaultObj()
{
	static class AB_CCPM_Base_Niagara_HighTower_Squash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CCPM_Base_Niagara_HighTower_Squash_C*>(AB_CCPM_Base_Niagara_HighTower_Squash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.getIsFrontEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsInFrontEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_getIsFrontEnd_IsInFrontEnd                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::GetIsFrontEnd(bool* IsInFrontEnd, bool CallFunc_getIsFrontEnd_IsInFrontEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "getIsFrontEnd");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_GetIsFrontEnd_Params Parms{};

	Parms.CallFunc_getIsFrontEnd_IsInFrontEnd = CallFunc_getIsFrontEnd_IsInFrontEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInFrontEnd != nullptr)
		*IsInFrontEnd = Parms.IsInFrontEnd;

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.getNiagaraParticles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       Gameplay_Tag_Container                                           (Parm, OutParm)
// struct FGameplayTagContainer       CallFunc_getNiagaraParticles_Gameplay_Tag_Container              (None)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::GetNiagaraParticles(struct FGameplayTagContainer* Gameplay_Tag_Container, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "getNiagaraParticles");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_GetNiagaraParticles_Params Parms{};

	Parms.CallFunc_getNiagaraParticles_Gameplay_Tag_Container = CallFunc_getNiagaraParticles_Gameplay_Tag_Container;

	UObject::ProcessEvent(Func, &Parms);

	if (Gameplay_Tag_Container != nullptr)
		*Gameplay_Tag_Container = std::move(Parms.Gameplay_Tag_Container);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Bool)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Set_Niagara_System_User_Variable__Bool_(class FName Name, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "set Niagara System User Variable (Bool)");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Bool__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Vector)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Set_Niagara_System_User_Variable__Vector_(class FName Name, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "set Niagara System User Variable (Vector)");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Vector__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Int)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Set_Niagara_System_User_Variable__Int_(class FName Name, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "set Niagara System User Variable (Int)");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Int__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Float)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Set_Niagara_System_User_Variable__Float_(class FName Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "set Niagara System User Variable (Float)");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Float__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Color)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Set_Niagara_System_User_Variable__Color_(class FName Name, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "set Niagara System User Variable (Color)");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Color__Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.getIsDriving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsDriving                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_getIsDriving_isDriving                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::GetIsDriving(bool* IsDriving, bool CallFunc_getIsDriving_isDriving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "getIsDriving");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_GetIsDriving_Params Parms{};

	Parms.CallFunc_getIsDriving_isDriving = CallFunc_getIsDriving_isDriving;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDriving != nullptr)
		*IsDriving = Parms.IsDriving;

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Morning Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               At_Creation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Morning_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "Morning Phase");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Morning_Phase_Params Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Day Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               At_Creation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Day_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "Day Phase");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Day_Phase_Params Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Evening Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               At_Creation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Evening_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "Evening Phase");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Evening_Phase_Params Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Night Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               At_Creation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Night_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "Night Phase");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Night_Phase_Params Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.OnHitPawn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "OnHitPawn");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_OnHitPawn_Params Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Exit Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Exit_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "Exit Vehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.OnTargetingOrFirstPersonCameraChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_HighTower_Squash_C::OnTargetingOrFirstPersonCameraChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "OnTargetingOrFirstPersonCameraChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Enter Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Enter_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "Enter Vehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.ResOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_HighTower_Squash_C::ResOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "ResOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.ResIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_HighTower_Squash_C::ResIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "ResIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.OnEndSkydiving
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_HighTower_Squash_C::OnEndSkydiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "OnEndSkydiving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.OnBeginSkydiving
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_HighTower_Squash_C::OnBeginSkydiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "OnBeginSkydiving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Character Movement Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "Character Movement Updated");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_Character_Movement_Updated_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = OldLocation;
	Parms.OldVelocity = OldVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AB_CCPM_Base_Niagara_HighTower_Squash_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.On Stat Canged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Stat_Name                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Stat_Value                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::On_Stat_Canged(class FName Stat_Name, int32 Stat_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "On Stat Canged");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_On_Stat_Canged_Params Parms{};

	Parms.Stat_Name = Stat_Name;
	Parms.Stat_Value = Stat_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.ExecuteUbergraph_B_CCPM_Base_Niagara_HighTower_Squash
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_GetIdleVFXComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_At_Creation_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_At_Creation_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_At_Creation_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_At_Creation                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_SelfActor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_OldLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_OldVelocity                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Stat_Name                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Stat_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_GetIdleVFXComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_HighTower_Squash_C::ExecuteUbergraph_B_CCPM_Base_Niagara_HighTower_Squash(int32 EntryPoint, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue, bool K2Node_Event_At_Creation_3, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_At_Creation_2, bool K2Node_Event_At_Creation_1, bool K2Node_Event_At_Creation, class AActor* K2Node_Event_SelfActor, class AActor* K2Node_Event_OtherActor, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_Event_OldLocation, const struct FVector& K2Node_Event_OldVelocity, class FName K2Node_Event_Stat_Name, int32 K2Node_Event_Stat_Value, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_HighTower_Squash_C", "ExecuteUbergraph_B_CCPM_Base_Niagara_HighTower_Squash");

	Params::AB_CCPM_Base_Niagara_HighTower_Squash_C_ExecuteUbergraph_B_CCPM_Base_Niagara_HighTower_Squash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIdleVFXComponent_ReturnValue = CallFunc_GetIdleVFXComponent_ReturnValue;
	Parms.K2Node_Event_At_Creation_3 = K2Node_Event_At_Creation_3;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System = K2Node_DynamicCast_AsNiagara_Particle_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_At_Creation_2 = K2Node_Event_At_Creation_2;
	Parms.K2Node_Event_At_Creation_1 = K2Node_Event_At_Creation_1;
	Parms.K2Node_Event_At_Creation = K2Node_Event_At_Creation;
	Parms.K2Node_Event_SelfActor = K2Node_Event_SelfActor;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_OldLocation = K2Node_Event_OldLocation;
	Parms.K2Node_Event_OldVelocity = K2Node_Event_OldVelocity;
	Parms.K2Node_Event_Stat_Name = K2Node_Event_Stat_Name;
	Parms.K2Node_Event_Stat_Value = K2Node_Event_Stat_Value;
	Parms.CallFunc_GetIdleVFXComponent_ReturnValue_1 = CallFunc_GetIdleVFXComponent_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


