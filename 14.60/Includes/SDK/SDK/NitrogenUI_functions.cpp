#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NitrogenUI.NitrogenWidgetBase
// (None)

class UClass* UNitrogenWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenWidgetBase");

	return Clss;
}


// NitrogenWidgetBase NitrogenUI.Default__NitrogenWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenWidgetBase* UNitrogenWidgetBase::GetDefaultObj()
{
	static class UNitrogenWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenWidgetBase*>(UNitrogenWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenWidgetBase.OnExitVehicle
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenWidgetBase::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenWidgetBase", "OnExitVehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NitrogenUI.NitrogenWidgetBase.OnEnterVehicleDriver
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenWidgetBase::OnEnterVehicleDriver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenWidgetBase", "OnEnterVehicleDriver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NitrogenUI.NitrogenWidgetBase.HandleNitrogenGamePhaseChanged
// (Native, Protected)
// Parameters:
// enum class ENitrogenGamePhase      NewGamePhase                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenWidgetBase::HandleNitrogenGamePhaseChanged(enum class ENitrogenGamePhase NewGamePhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenWidgetBase", "HandleNitrogenGamePhaseChanged");

	Params::UNitrogenWidgetBase_HandleNitrogenGamePhaseChanged_Params Parms{};

	Parms.NewGamePhase = NewGamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenWidgetBase.BP_BindToMutator
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortAthenaMutator_Nitrogen* Mutator                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenWidgetBase::BP_BindToMutator(class AFortAthenaMutator_Nitrogen* Mutator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenWidgetBase", "BP_BindToMutator");

	Params::UNitrogenWidgetBase_BP_BindToMutator_Params Parms{};

	Parms.Mutator = Mutator;

	UObject::ProcessEvent(Func, &Parms);

}


// Class NitrogenUI.NitrogenFareBonusWidget
// (None)

class UClass* UNitrogenFareBonusWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenFareBonusWidget");

	return Clss;
}


// NitrogenFareBonusWidget NitrogenUI.Default__NitrogenFareBonusWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenFareBonusWidget* UNitrogenFareBonusWidget::GetDefaultObj()
{
	static class UNitrogenFareBonusWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenFareBonusWidget*>(UNitrogenFareBonusWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenFareBonusWidget.ShowBonus
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenFareBonusWidget::ShowBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "ShowBonus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenFareBonusWidget.OnEndFare
// (Final, Native, Protected)
// Parameters:
// bool                               bFareCompleted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareBonusWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "OnEndFare");

	Params::UNitrogenFareBonusWidget_OnEndFare_Params Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenFareBonusWidget.OnBeginFare
// (Final, Native, Protected)
// Parameters:

void UNitrogenFareBonusWidget::OnBeginFare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "OnBeginFare");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenFareBonusWidget.OnActiveBonusUpdated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FNitrogenBonusStat          BonusStat                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ShouldAwardBonus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareBonusWidget::OnActiveBonusUpdated(struct FNitrogenBonusStat* BonusStat, float Value, bool ShouldAwardBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "OnActiveBonusUpdated");

	Params::UNitrogenFareBonusWidget_OnActiveBonusUpdated_Params Parms{};

	Parms.Value = Value;
	Parms.ShouldAwardBonus = ShouldAwardBonus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BonusStat != nullptr)
		*BonusStat = std::move(Parms.BonusStat);

}


// Function NitrogenUI.NitrogenFareBonusWidget.HideBonus
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenFareBonusWidget::HideBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareBonusWidget", "HideBonus");



	UObject::ProcessEvent(Func, nullptr);

}


// Class NitrogenUI.NitrogenFareInteractionWidget
// (None)

class UClass* UNitrogenFareInteractionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenFareInteractionWidget");

	return Clss;
}


// NitrogenFareInteractionWidget NitrogenUI.Default__NitrogenFareInteractionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenFareInteractionWidget* UNitrogenFareInteractionWidget::GetDefaultObj()
{
	static class UNitrogenFareInteractionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenFareInteractionWidget*>(UNitrogenFareInteractionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenFareInteractionWidget.UpdateTimerDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanceled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareInteractionWidget::UpdateTimerDisplay(bool bCanceled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareInteractionWidget", "UpdateTimerDisplay");

	Params::UNitrogenFareInteractionWidget_UpdateTimerDisplay_Params Parms{};

	Parms.bCanceled = bCanceled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenFareInteractionWidget.OnEndInteraction
// (Final, Native, Private)
// Parameters:

void UNitrogenFareInteractionWidget::OnEndInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareInteractionWidget", "OnEndInteraction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenFareInteractionWidget.OnBeginInteraction
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FNitrogenFareInteractionDataFareInteractionData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UNitrogenFareInteractionWidget::OnBeginInteraction(struct FNitrogenFareInteractionData& FareInteractionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareInteractionWidget", "OnBeginInteraction");

	Params::UNitrogenFareInteractionWidget_OnBeginInteraction_Params Parms{};

	Parms.FareInteractionData = FareInteractionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenUI.NitrogenFareMeterWidget
// (None)

class UClass* UNitrogenFareMeterWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenFareMeterWidget");

	return Clss;
}


// NitrogenFareMeterWidget NitrogenUI.Default__NitrogenFareMeterWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenFareMeterWidget* UNitrogenFareMeterWidget::GetDefaultObj()
{
	static class UNitrogenFareMeterWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenFareMeterWidget*>(UNitrogenFareMeterWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareTimedDeliveryObjectiveState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENitrogenFareObjectiveDisplayStateDisplayState                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayAnimation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::SetCurrentFareTimedDeliveryObjectiveState(enum class ENitrogenFareObjectiveDisplayState DisplayState, bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "SetCurrentFareTimedDeliveryObjectiveState");

	Params::UNitrogenFareMeterWidget_SetCurrentFareTimedDeliveryObjectiveState_Params Parms{};

	Parms.DisplayState = DisplayState;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBonusObjectiveState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENitrogenFareObjectiveDisplayStateDisplayState                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayAnimation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::SetCurrentFareBonusObjectiveState(enum class ENitrogenFareObjectiveDisplayState DisplayState, bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "SetCurrentFareBonusObjectiveState");

	Params::UNitrogenFareMeterWidget_SetCurrentFareBonusObjectiveState_Params Parms{};

	Parms.DisplayState = DisplayState;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBaseRewardValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::SetCurrentFareBaseRewardValue(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "SetCurrentFareBaseRewardValue");

	Params::UNitrogenFareMeterWidget_SetCurrentFareBaseRewardValue_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenFareMeterWidget.OnFareBonusFinshed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               BonusCompleted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::OnFareBonusFinshed(bool BonusCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnFareBonusFinshed");

	Params::UNitrogenFareMeterWidget_OnFareBonusFinshed_Params Parms{};

	Parms.BonusCompleted = BonusCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenFareMeterWidget.OnEndFare
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bFareCompleted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnEndFare");

	Params::UNitrogenFareMeterWidget_OnEndFare_Params Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenFareMeterWidget.OnBeginInteraction
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FNitrogenFareInteractionDataFareInteractionData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::OnBeginInteraction(struct FNitrogenFareInteractionData& FareInteractionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnBeginInteraction");

	Params::UNitrogenFareMeterWidget_OnBeginInteraction_Params Parms{};

	Parms.FareInteractionData = FareInteractionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenFareMeterWidget.OnBeginFare
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenFareMeterWidget::OnBeginFare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnBeginFare");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenFareMeterWidget.OnActiveBonusUpdated
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FNitrogenBonusStat          BonusStat                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldAwardBonus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::OnActiveBonusUpdated(struct FNitrogenBonusStat* BonusStat, float Value, bool bShouldAwardBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "OnActiveBonusUpdated");

	Params::UNitrogenFareMeterWidget_OnActiveBonusUpdated_Params Parms{};

	Parms.Value = Value;
	Parms.bShouldAwardBonus = bShouldAwardBonus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BonusStat != nullptr)
		*BonusStat = std::move(Parms.BonusStat);

}


// Function NitrogenUI.NitrogenFareMeterWidget.FastDeliveryTimeUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RemainingTimeRatio                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::FastDeliveryTimeUpdate(float RemainingTimeRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "FastDeliveryTimeUpdate");

	Params::UNitrogenFareMeterWidget_FastDeliveryTimeUpdate_Params Parms{};

	Parms.RemainingTimeRatio = RemainingTimeRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenFareMeterWidget.BonusProgressUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              BonusProgressRatio                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenFareMeterWidget::BonusProgressUpdate(float BonusProgressRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenFareMeterWidget", "BonusProgressUpdate");

	Params::UNitrogenFareMeterWidget_BonusProgressUpdate_Params Parms{};

	Parms.BonusProgressRatio = BonusProgressRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Class NitrogenUI.NitrogenLeaderboardWidget
// (None)

class UClass* UNitrogenLeaderboardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenLeaderboardWidget");

	return Clss;
}


// NitrogenLeaderboardWidget NitrogenUI.Default__NitrogenLeaderboardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenLeaderboardWidget* UNitrogenLeaderboardWidget::GetDefaultObj()
{
	static class UNitrogenLeaderboardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenLeaderboardWidget*>(UNitrogenLeaderboardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenLeaderboardWidget.UpdateLeaderboardUI
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FNitrogenLeaderboardData>LeaderboardInfo                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GoalScore                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenLeaderboardWidget::UpdateLeaderboardUI(TArray<struct FNitrogenLeaderboardData>& LeaderboardInfo, int32 GoalScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenLeaderboardWidget", "UpdateLeaderboardUI");

	Params::UNitrogenLeaderboardWidget_UpdateLeaderboardUI_Params Parms{};

	Parms.LeaderboardInfo = LeaderboardInfo;
	Parms.GoalScore = GoalScore;

	UObject::ProcessEvent(Func, &Parms);

}


// Class NitrogenUI.NitrogenMatchNearEndWidget
// (None)

class UClass* UNitrogenMatchNearEndWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenMatchNearEndWidget");

	return Clss;
}


// NitrogenMatchNearEndWidget NitrogenUI.Default__NitrogenMatchNearEndWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenMatchNearEndWidget* UNitrogenMatchNearEndWidget::GetDefaultObj()
{
	static class UNitrogenMatchNearEndWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenMatchNearEndWidget*>(UNitrogenMatchNearEndWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenMatchNearEndWidget.OnMatchNearEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenMatchNearEndWidget::OnMatchNearEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenMatchNearEndWidget", "OnMatchNearEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NitrogenUI.NitrogenMatchNearEndWidget.HandleTopScoreUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenMatchNearEndWidget::HandleTopScoreUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenMatchNearEndWidget", "HandleTopScoreUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Class NitrogenUI.NitrogenObjectiveWidget
// (None)

class UClass* UNitrogenObjectiveWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenObjectiveWidget");

	return Clss;
}


// NitrogenObjectiveWidget NitrogenUI.Default__NitrogenObjectiveWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenObjectiveWidget* UNitrogenObjectiveWidget::GetDefaultObj()
{
	static class UNitrogenObjectiveWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenObjectiveWidget*>(UNitrogenObjectiveWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenObjectiveWidget.UpdateWidgetState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENitrogenObjectiveWidgetStateNewObjectiveWidgetState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenObjectiveWidget::UpdateWidgetState(enum class ENitrogenObjectiveWidgetState NewObjectiveWidgetState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "UpdateWidgetState");

	Params::UNitrogenObjectiveWidget_UpdateWidgetState_Params Parms{};

	Parms.NewObjectiveWidgetState = NewObjectiveWidgetState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenObjectiveWidget.SetShouldBeHidden
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bInShouldBeHidden                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenObjectiveWidget::SetShouldBeHidden(bool bInShouldBeHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "SetShouldBeHidden");

	Params::UNitrogenObjectiveWidget_SetShouldBeHidden_Params Parms{};

	Parms.bInShouldBeHidden = bInShouldBeHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenObjectiveWidget.OnEndFare
// (Final, Native, Private)
// Parameters:
// bool                               bFareCompleted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenObjectiveWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "OnEndFare");

	Params::UNitrogenObjectiveWidget_OnEndFare_Params Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenObjectiveWidget.OnBeginFare
// (Final, Native, Private)
// Parameters:

void UNitrogenObjectiveWidget::OnBeginFare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "OnBeginFare");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleExited
// (Final, Native, Private)
// Parameters:

void UNitrogenObjectiveWidget::HandleVehicleExited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "HandleVehicleExited");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleEntered
// (Final, Native, Private)
// Parameters:
// class AFortAthenaVehicle*          NewVehicle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenObjectiveWidget::HandleVehicleEntered(class AFortAthenaVehicle* NewVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenObjectiveWidget", "HandleVehicleEntered");

	Params::UNitrogenObjectiveWidget_HandleVehicleEntered_Params Parms{};

	Parms.NewVehicle = NewVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenUI.NitrogenPlacementWidget
// (None)

class UClass* UNitrogenPlacementWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenPlacementWidget");

	return Clss;
}


// NitrogenPlacementWidget NitrogenUI.Default__NitrogenPlacementWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenPlacementWidget* UNitrogenPlacementWidget::GetDefaultObj()
{
	static class UNitrogenPlacementWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenPlacementWidget*>(UNitrogenPlacementWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoringUpdate
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              CurrentPlayerTeamScore                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentPlayerTeamPlacement                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GoalScore                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      SortedTeamScores                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnPlayerScoringUpdate(int32 CurrentPlayerTeamScore, int32 CurrentPlayerTeamPlacement, int32 GoalScore, TArray<uint8>& SortedTeamScores)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnPlayerScoringUpdate");

	Params::UNitrogenPlacementWidget_OnPlayerScoringUpdate_Params Parms{};

	Parms.CurrentPlayerTeamScore = CurrentPlayerTeamScore;
	Parms.CurrentPlayerTeamPlacement = CurrentPlayerTeamPlacement;
	Parms.GoalScore = GoalScore;
	Parms.SortedTeamScores = SortedTeamScores;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewScore                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnPlayerScoreChanged(int32 NewScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnPlayerScoreChanged");

	Params::UNitrogenPlacementWidget_OnPlayerScoreChanged_Params Parms{};

	Parms.NewScore = NewScore;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerPlacementChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewPlacement                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OldPlacement                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnPlayerPlacementChanged(int32 NewPlacement, int32 OldPlacement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnPlayerPlacementChanged");

	Params::UNitrogenPlacementWidget_OnPlayerPlacementChanged_Params Parms{};

	Parms.NewPlacement = NewPlacement;
	Parms.OldPlacement = OldPlacement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerFareComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              StarsGained                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnPlayerFareComplete(int32 StarsGained)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnPlayerFareComplete");

	Params::UNitrogenPlacementWidget_OnPlayerFareComplete_Params Parms{};

	Parms.StarsGained = StarsGained;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenPlacementWidget.OnEndFare
// (Final, Native, Private)
// Parameters:
// bool                               bFareCompleted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlacementWidget", "OnEndFare");

	Params::UNitrogenPlacementWidget_OnEndFare_Params Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenPlacementWidget.HandleScoreChanged
// (Final, Native, Private)
// Parameters:
// int32                              Score                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenPlacementWidget::HandleScoreChanged(int32 Score)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenPlacementWidget", "HandleScoreChanged");

	Params::UNitrogenPlacementWidget_HandleScoreChanged_Params Parms{};

	Parms.Score = Score;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NitrogenUI.NitrogenScoreEventWidget
// (None)

class UClass* UNitrogenScoreEventWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenScoreEventWidget");

	return Clss;
}


// NitrogenScoreEventWidget NitrogenUI.Default__NitrogenScoreEventWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenScoreEventWidget* UNitrogenScoreEventWidget::GetDefaultObj()
{
	static class UNitrogenScoreEventWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenScoreEventWidget*>(UNitrogenScoreEventWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenScoreEventWidget.DisplayScoreEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENitrogenScoreReason    ScoreReason                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenScoreEventWidget::DisplayScoreEvent(enum class ENitrogenScoreReason ScoreReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenScoreEventWidget", "DisplayScoreEvent");

	Params::UNitrogenScoreEventWidget_DisplayScoreEvent_Params Parms{};

	Parms.ScoreReason = ScoreReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenScoreEventWidget.DisplayLeadChangedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInLead                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenScoreEventWidget::DisplayLeadChangedEvent(bool bInLead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenScoreEventWidget", "DisplayLeadChangedEvent");

	Params::UNitrogenScoreEventWidget_DisplayLeadChangedEvent_Params Parms{};

	Parms.bInLead = bInLead;

	UObject::ProcessEvent(Func, &Parms);

}


// Class NitrogenUI.NitrogenSpeedyBonusTimerWidget
// (None)

class UClass* UNitrogenSpeedyBonusTimerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitrogenSpeedyBonusTimerWidget");

	return Clss;
}


// NitrogenSpeedyBonusTimerWidget NitrogenUI.Default__NitrogenSpeedyBonusTimerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNitrogenSpeedyBonusTimerWidget* UNitrogenSpeedyBonusTimerWidget::GetDefaultObj()
{
	static class UNitrogenSpeedyBonusTimerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitrogenSpeedyBonusTimerWidget*>(UNitrogenSpeedyBonusTimerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryTimeUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TimePrecentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TotalObjectiveTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenSpeedyBonusTimerWidget::OnSpeedyDeliveryTimeUpdate(float TimePrecentage, float TotalObjectiveTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenSpeedyBonusTimerWidget", "OnSpeedyDeliveryTimeUpdate");

	Params::UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryTimeUpdate_Params Parms{};

	Parms.TimePrecentage = TimePrecentage;
	Parms.TotalObjectiveTime = TotalObjectiveTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryFailed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayAnimation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenSpeedyBonusTimerWidget::OnSpeedyDeliveryFailed(bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenSpeedyBonusTimerWidget", "OnSpeedyDeliveryFailed");

	Params::UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryFailed_Params Parms{};

	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenSpeedyBonusTimerWidget::OnSpeedyDeliveryCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenSpeedyBonusTimerWidget", "OnSpeedyDeliveryCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnEndFare
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bFareCompleted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNitrogenSpeedyBonusTimerWidget::OnEndFare(bool bFareCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenSpeedyBonusTimerWidget", "OnEndFare");

	Params::UNitrogenSpeedyBonusTimerWidget_OnEndFare_Params Parms{};

	Parms.bFareCompleted = bFareCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnBeginFare
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UNitrogenSpeedyBonusTimerWidget::OnBeginFare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitrogenSpeedyBonusTimerWidget", "OnBeginFare");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


