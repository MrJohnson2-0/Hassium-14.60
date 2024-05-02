#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortCosmeticItemCard.FortCosmeticItemCard_C
// (None)

class UClass* UFortCosmeticItemCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCosmeticItemCard_C");

	return Clss;
}


// FortCosmeticItemCard_C FortCosmeticItemCard.Default__FortCosmeticItemCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortCosmeticItemCard_C* UFortCosmeticItemCard_C::GetDefaultObj()
{
	static class UFortCosmeticItemCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCosmeticItemCard_C*>(UFortCosmeticItemCard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortColorPalette           RarityColors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UFortCosmeticItemCard_C::HandleUpdateRarity(const struct FFortColorPalette& RarityColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "HandleUpdateRarity");

	Params::UFortCosmeticItemCard_C_HandleUpdateRarity_Params Parms{};

	Parms.RarityColors = RarityColors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsBorderAnimated                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsHero                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsReward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsShuffleItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "HandleUpdateVisuals");

	Params::UFortCosmeticItemCard_C_HandleUpdateVisuals_Params Parms{};

	Parms.bIsItem = bIsItem;
	Parms.bIsBorderAnimated = bIsBorderAnimated;
	Parms.IsHero = IsHero;
	Parms.IsReward = IsReward;
	Parms.IsShuffleItem = IsShuffleItem;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsBorderAnimated                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsHero                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bReward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsShuffleItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortCosmeticItemCard_C::UpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "UpdateVisuals");

	Params::UFortCosmeticItemCard_C_UpdateVisuals_Params Parms{};

	Parms.bIsItem = bIsItem;
	Parms.bIsBorderAnimated = bIsBorderAnimated;
	Parms.bIsHero = bIsHero;
	Parms.bReward = bReward;
	Parms.bIsShuffleItem = bIsShuffleItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateEnhanced
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnhanced                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortCosmeticItemCard_C::OnUpdateEnhanced(bool bEnhanced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateEnhanced");

	Params::UFortCosmeticItemCard_C_OnUpdateEnhanced_Params Parms{};

	Parms.bEnhanced = bEnhanced;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardMaterial
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::OnUpdateItemCardMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateItemCardMaterial");

	Params::UFortCosmeticItemCard_C_OnUpdateItemCardMaterial_Params Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::OnUpdateItemCardIcon(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateItemCardIcon");

	Params::UFortCosmeticItemCard_C_OnUpdateItemCardIcon_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateSeriesOrRarityColors
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortColorPalette           ColorPalette                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UFortCosmeticItemCard_C::OnUpdateSeriesOrRarityColors(struct FFortColorPalette& ColorPalette)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateSeriesOrRarityColors");

	Params::UFortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors_Params Parms{};

	Parms.ColorPalette = ColorPalette;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnSizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InCardWidth                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::OnSizeChanged(float InCardWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnSizeChanged");

	Params::UFortCosmeticItemCard_C_OnSizeChanged_Params Parms{};

	Parms.InCardWidth = InCardWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnHover
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCosmeticItemCard_C::OnHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUnhover
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCosmeticItemCard_C::OnUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.ExecuteUbergraph_FortCosmeticItemCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Event_Material                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnhanced                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_Icon                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortColorPalette           K2Node_Event_ColorPalette                                        (ConstParm, NoDestructor)
// float                              K2Node_Event_InCardWidth                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsItem                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsBorderAnimated                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsHero                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bReward                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsShuffleItem                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::ExecuteUbergraph_FortCosmeticItemCard(int32 EntryPoint, class UMaterialInterface* K2Node_Event_Material, bool K2Node_Event_bEnhanced, float CallFunc_Conv_BoolToFloat_ReturnValue, class UTexture2D* K2Node_Event_Icon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortColorPalette& K2Node_Event_ColorPalette, float K2Node_Event_InCardWidth, bool K2Node_Event_bIsItem, bool K2Node_Event_bIsBorderAnimated, bool K2Node_Event_bIsHero, bool K2Node_Event_bReward, bool K2Node_Event_bIsShuffleItem, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "ExecuteUbergraph_FortCosmeticItemCard");

	Params::UFortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Material = K2Node_Event_Material;
	Parms.K2Node_Event_bEnhanced = K2Node_Event_bEnhanced;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_Icon = K2Node_Event_Icon;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_ColorPalette = K2Node_Event_ColorPalette;
	Parms.K2Node_Event_InCardWidth = K2Node_Event_InCardWidth;
	Parms.K2Node_Event_bIsItem = K2Node_Event_bIsItem;
	Parms.K2Node_Event_bIsBorderAnimated = K2Node_Event_bIsBorderAnimated;
	Parms.K2Node_Event_bIsHero = K2Node_Event_bIsHero;
	Parms.K2Node_Event_bReward = K2Node_Event_bReward;
	Parms.K2Node_Event_bIsShuffleItem = K2Node_Event_bIsShuffleItem;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


