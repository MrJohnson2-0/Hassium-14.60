#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ArgonUI.ArgonWidgetBase
// (None)

class UClass* UArgonWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArgonWidgetBase");

	return Clss;
}


// ArgonWidgetBase ArgonUI.Default__ArgonWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UArgonWidgetBase* UArgonWidgetBase::GetDefaultObj()
{
	static class UArgonWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UArgonWidgetBase*>(UArgonWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonUI.ArgonWidgetBase.UnbindFromMutator_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UArgonWidgetBase::UnbindFromMutator_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonWidgetBase", "UnbindFromMutator_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArgonUI.ArgonWidgetBase.SetPlayerPortrait
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AFortPlayerStateAthena*      Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortLazyImage*              PortraitImage                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UArgonWidgetBase::SetPlayerPortrait(class AFortPlayerStateAthena* Player, class UFortLazyImage* PortraitImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonWidgetBase", "SetPlayerPortrait");

	Params::UArgonWidgetBase_SetPlayerPortrait_Params Parms{};

	Parms.Player = Player;
	Parms.PortraitImage = PortraitImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArgonUI.ArgonWidgetBase.GetTeamPlayerStates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              Team                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AFortPlayerStateAthena*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class AFortPlayerStateAthena*> UArgonWidgetBase::GetTeamPlayerStates(uint8 Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonWidgetBase", "GetTeamPlayerStates");

	Params::UArgonWidgetBase_GetTeamPlayerStates_Params Parms{};

	Parms.Team = Team;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ArgonUI.ArgonWidgetBase.BindToMutator_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UArgonWidgetBase::BindToMutator_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonWidgetBase", "BindToMutator_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ArgonUI.ArgonHUDAlertWidget
// (None)

class UClass* UArgonHUDAlertWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArgonHUDAlertWidget");

	return Clss;
}


// ArgonHUDAlertWidget ArgonUI.Default__ArgonHUDAlertWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UArgonHUDAlertWidget* UArgonHUDAlertWidget::GetDefaultObj()
{
	static class UArgonHUDAlertWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UArgonHUDAlertWidget*>(UArgonHUDAlertWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonUI.ArgonHUDAlertWidget.OnPlayerFinished
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FArgonFinishedPlayerInfo    FinishedPlayerInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UArgonHUDAlertWidget::OnPlayerFinished(struct FArgonFinishedPlayerInfo& FinishedPlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonHUDAlertWidget", "OnPlayerFinished");

	Params::UArgonHUDAlertWidget_OnPlayerFinished_Params Parms{};

	Parms.FinishedPlayerInfo = FinishedPlayerInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArgonUI.ArgonHUDAlertWidget.ForceHidePlayerFinishedMessage
// (Event, Protected, BlueprintEvent)
// Parameters:

void UArgonHUDAlertWidget::ForceHidePlayerFinishedMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonHUDAlertWidget", "ForceHidePlayerFinishedMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArgonUI.ArgonHUDAlertWidget.DisplayPlayerFinishedMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FArgonFinishedPlayerInfo    FinishedInfo                                                     (Parm, NativeAccessSpecifierPublic)

void UArgonHUDAlertWidget::DisplayPlayerFinishedMessage(const struct FArgonFinishedPlayerInfo& FinishedInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonHUDAlertWidget", "DisplayPlayerFinishedMessage");

	Params::UArgonHUDAlertWidget_DisplayPlayerFinishedMessage_Params Parms{};

	Parms.FinishedInfo = FinishedInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ArgonUI.ArgonLeaderboardWidget
// (None)

class UClass* UArgonLeaderboardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArgonLeaderboardWidget");

	return Clss;
}


// ArgonLeaderboardWidget ArgonUI.Default__ArgonLeaderboardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UArgonLeaderboardWidget* UArgonLeaderboardWidget::GetDefaultObj()
{
	static class UArgonLeaderboardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UArgonLeaderboardWidget*>(UArgonLeaderboardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ArgonUI.ArgonLeaderboardWidget.UpdateLeaderboardUI
// (Event, Protected, BlueprintEvent)
// Parameters:

void UArgonLeaderboardWidget::UpdateLeaderboardUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonLeaderboardWidget", "UpdateLeaderboardUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArgonUI.ArgonLeaderboardWidget.OnRacingPlayersByPlaceChanged
// (Final, Native, Private)
// Parameters:

void UArgonLeaderboardWidget::OnRacingPlayersByPlaceChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonLeaderboardWidget", "OnRacingPlayersByPlaceChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArgonUI.ArgonLeaderboardWidget.OnAnyTeamTicketCountChanged
// (Final, Native, Private)
// Parameters:

void UArgonLeaderboardWidget::OnAnyTeamTicketCountChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArgonLeaderboardWidget", "OnAnyTeamTicketCountChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


