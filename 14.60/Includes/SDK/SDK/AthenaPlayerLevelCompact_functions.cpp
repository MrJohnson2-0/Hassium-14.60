#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C
// (None)

class UClass* UAthenaPlayerLevelCompact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPlayerLevelCompact_C");

	return Clss;
}


// AthenaPlayerLevelCompact_C AthenaPlayerLevelCompact.Default__AthenaPlayerLevelCompact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaPlayerLevelCompact_C* UAthenaPlayerLevelCompact_C::GetDefaultObj()
{
	static class UAthenaPlayerLevelCompact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPlayerLevelCompact_C*>(UAthenaPlayerLevelCompact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.OnUpdateRewardIcon
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortItem*                   RewardItem                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   RewardTexture                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               bHasAdditionalStylesToDisplay                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RewardLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRequiresBattlePass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevelCompact_C::OnUpdateRewardIcon(class UFortItem* RewardItem, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "OnUpdateRewardIcon");

	Params::UAthenaPlayerLevelCompact_C_OnUpdateRewardIcon_Params Parms{};

	Parms.RewardItem = RewardItem;
	Parms.RewardTexture = RewardTexture;
	Parms.bHasAdditionalStylesToDisplay = bHasAdditionalStylesToDisplay;
	Parms.RewardLevel = RewardLevel;
	Parms.bRequiresBattlePass = bRequiresBattlePass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.OnUpdateXpBar
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMaxLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevelCompact_C::OnUpdateXpBar(float Progress, bool bIsMaxLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "OnUpdateXpBar");

	Params::UAthenaPlayerLevelCompact_C_OnUpdateXpBar_Params Parms{};

	Parms.Progress = Progress;
	Parms.bIsMaxLevel = bIsMaxLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.ExecuteUbergraph_AthenaPlayerLevelCompact
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsMaxLevel                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Event_RewardItem                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_RewardTexture                                       (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_bHasAdditionalStylesToDisplay                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_RewardLevel                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bRequiresBattlePass                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevelCompact_C::ExecuteUbergraph_AthenaPlayerLevelCompact(int32 EntryPoint, float K2Node_Event_Progress, bool K2Node_Event_bIsMaxLevel, class UFortItem* K2Node_Event_RewardItem, TSoftObjectPtr<class UTexture2D> K2Node_Event_RewardTexture, bool K2Node_Event_bHasAdditionalStylesToDisplay, int32 K2Node_Event_RewardLevel, bool K2Node_Event_bRequiresBattlePass, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "ExecuteUbergraph_AthenaPlayerLevelCompact");

	Params::UAthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Progress = K2Node_Event_Progress;
	Parms.K2Node_Event_bIsMaxLevel = K2Node_Event_bIsMaxLevel;
	Parms.K2Node_Event_RewardItem = K2Node_Event_RewardItem;
	Parms.K2Node_Event_RewardTexture = K2Node_Event_RewardTexture;
	Parms.K2Node_Event_bHasAdditionalStylesToDisplay = K2Node_Event_bHasAdditionalStylesToDisplay;
	Parms.K2Node_Event_RewardLevel = K2Node_Event_RewardLevel;
	Parms.K2Node_Event_bRequiresBattlePass = K2Node_Event_bRequiresBattlePass;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.LevelChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevelCompact_C::LevelChanged__DelegateSignature(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayerLevelCompact_C", "LevelChanged__DelegateSignature");

	Params::UAthenaPlayerLevelCompact_C_LevelChanged__DelegateSignature_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}

}


