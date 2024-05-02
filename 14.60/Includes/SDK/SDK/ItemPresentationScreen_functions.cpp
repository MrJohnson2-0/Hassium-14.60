#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemPresentationScreen.ItemPresentationScreen_C
// (None)

class UClass* UItemPresentationScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPresentationScreen_C");

	return Clss;
}


// ItemPresentationScreen_C ItemPresentationScreen.Default__ItemPresentationScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemPresentationScreen_C* UItemPresentationScreen_C::GetDefaultObj()
{
	static class UItemPresentationScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPresentationScreen_C*>(UItemPresentationScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemPresentationScreen.ItemPresentationScreen_C.HandleFadeAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UItemPresentationScreen_C::HandleFadeAnimFinished(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "HandleFadeAnimFinished");

	Params::UItemPresentationScreen_C_HandleFadeAnimFinished_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.HandlePaidItemIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::HandlePaidItemIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "HandlePaidItemIntro");

	Params::UItemPresentationScreen_C_HandlePaidItemIntro_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.StartFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCloseScreen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::StartFade(bool bCloseScreen, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "StartFade");

	Params::UItemPresentationScreen_C_StartFade_Params Parms{};

	Parms.bCloseScreen = bCloseScreen;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.PlayIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::PlayIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "PlayIntro");

	Params::UItemPresentationScreen_C_PlayIntro_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.HandleAnimationInitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::HandleAnimationInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "HandleAnimationInitialState");

	Params::UItemPresentationScreen_C_HandleAnimationInitialState_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateHeaderInformation
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortItemHeaderInformation  HeaderInformation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemPresentationScreen_C::OnUpdateHeaderInformation(struct FFortItemHeaderInformation& HeaderInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateHeaderInformation");

	Params::UItemPresentationScreen_C_OnUpdateHeaderInformation_Params Parms{};

	Parms.HeaderInformation = HeaderInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemInformation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   FortItem                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::OnUpdateItemInformation(class UFortItem* FortItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateItemInformation");

	Params::UItemPresentationScreen_C_OnUpdateItemInformation_Params Parms{};

	Parms.FortItem = FortItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateOwnedItemText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnUpdateOwnedItemText(bool bShowText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateOwnedItemText");

	Params::UItemPresentationScreen_C_OnUpdateOwnedItemText_Params Parms{};

	Parms.bShowText = bShowText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::OnUpdateItemEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateItemEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnInitialIconAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingListView                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnInitialIconAnimation(bool bUsingListView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnInitialIconAnimation");

	Params::UItemPresentationScreen_C_OnInitialIconAnimation_Params Parms{};

	Parms.bUsingListView = bUsingListView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayEquipButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanEquip                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnDisplayEquipButton(bool bCanEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnDisplayEquipButton");

	Params::UItemPresentationScreen_C_OnDisplayEquipButton_Params Parms{};

	Parms.bCanEquip = bCanEquip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnCloseScreen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::OnCloseScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnCloseScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateNextButtonText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowNext                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnUpdateNextButtonText(bool bShowNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateNextButtonText");

	Params::UItemPresentationScreen_C_OnUpdateNextButtonText_Params Parms{};

	Parms.bShowNext = bShowNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnFinishDisplayingHotItems
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowOtherRewards                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnFinishDisplayingHotItems(bool bShowOtherRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnFinishDisplayingHotItems");

	Params::UItemPresentationScreen_C_OnFinishDisplayingHotItems_Params Parms{};

	Parms.bShowOtherRewards = bShowOtherRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayItemsCollectedText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCloseScreen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnDisplayItemsCollectedText(bool bCloseScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnDisplayItemsCollectedText");

	Params::UItemPresentationScreen_C_OnDisplayItemsCollectedText_Params Parms{};

	Parms.bCloseScreen = bCloseScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.SwitchToPaidItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::SwitchToPaidItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "SwitchToPaidItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnCloseScreenWithoutAnimations
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::OnCloseScreenWithoutAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "OnCloseScreenWithoutAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.ExecuteUbergraph_ItemPresentationScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetAllEntries_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemPresentationGenericRewardHeader_C*K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemPresentationGenericRewardHeader_C*K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemInfoPresentationWidget_C*K2Node_DynamicCast_AsItem_Info_Presentation_Widget               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemHeaderInformation  K2Node_Event_HeaderInformation                                   (ConstParm)
// class UFortItem*                   K2Node_Event_FortItem                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowText                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bUsingListView                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInfoPresentationWidget_C*K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bCanEquip                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPresentationEntry_C*    K2Node_DynamicCast_AsItem_Presentation_Entry                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShowNext                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoloButton_C*               K2Node_DynamicCast_AsSolo_Button                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShowOtherRewards                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bCloseScreen                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoloButton_C*               K2Node_DynamicCast_AsSolo_Button_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UItemInfoPresentationWidget_C*K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassTracker_C*        K2Node_DynamicCast_AsBattle_Pass_Tracker                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassTracker_C*        K2Node_DynamicCast_AsBattle_Pass_Tracker_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassTracker_C*        K2Node_DynamicCast_AsBattle_Pass_Tracker_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassTracker_C*        K2Node_DynamicCast_AsBattle_Pass_Tracker_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPresentationEntry_C*    K2Node_DynamicCast_AsItem_Presentation_Entry_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::ExecuteUbergraph_ItemPresentationScreen(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header, bool K2Node_DynamicCast_bSuccess, class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget, bool K2Node_DynamicCast_bSuccess_2, const struct FFortItemHeaderInformation& K2Node_Event_HeaderInformation, class UFortItem* K2Node_Event_FortItem, bool K2Node_Event_bShowText, bool K2Node_Event_bUsingListView, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_Event_bCanEquip, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, float CallFunc_Multiply_IntFloat_ReturnValue, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_Event_bShowNext, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_Event_bShowOtherRewards, bool K2Node_Event_bCloseScreen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button_1, bool K2Node_DynamicCast_bSuccess_6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2, bool K2Node_DynamicCast_bSuccess_7, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker, bool K2Node_DynamicCast_bSuccess_8, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_1, bool K2Node_DynamicCast_bSuccess_9, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker, bool K2Node_DynamicCast_bSuccess_10, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1, bool K2Node_DynamicCast_bSuccess_11, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2, bool K2Node_DynamicCast_bSuccess_12, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_2, bool K2Node_DynamicCast_bSuccess_13, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_3, bool K2Node_DynamicCast_bSuccess_14, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3, bool K2Node_DynamicCast_bSuccess_15, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_1, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry_1, bool K2Node_DynamicCast_bSuccess_16, float CallFunc_Multiply_IntFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationScreen_C", "ExecuteUbergraph_ItemPresentationScreen");

	Params::UItemPresentationScreen_C_ExecuteUbergraph_ItemPresentationScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllEntries_ReturnValue = CallFunc_GetAllEntries_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header = K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1 = K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Info_Presentation_Widget = K2Node_DynamicCast_AsItem_Info_Presentation_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_HeaderInformation = K2Node_Event_HeaderInformation;
	Parms.K2Node_Event_FortItem = K2Node_Event_FortItem;
	Parms.K2Node_Event_bShowText = K2Node_Event_bShowText;
	Parms.K2Node_Event_bUsingListView = K2Node_Event_bUsingListView;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1 = K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_bCanEquip = K2Node_Event_bCanEquip;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Entry = K2Node_DynamicCast_AsItem_Presentation_Entry;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_bShowNext = K2Node_Event_bShowNext;
	Parms.K2Node_DynamicCast_AsSolo_Button = K2Node_DynamicCast_AsSolo_Button;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_Event_bShowOtherRewards = K2Node_Event_bShowOtherRewards;
	Parms.K2Node_Event_bCloseScreen = K2Node_Event_bCloseScreen;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSolo_Button_1 = K2Node_DynamicCast_AsSolo_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2 = K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Tracker = K2Node_DynamicCast_AsBattle_Pass_Tracker;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Tracker_1 = K2Node_DynamicCast_AsBattle_Pass_Tracker_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Tracker_2 = K2Node_DynamicCast_AsBattle_Pass_Tracker_2;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Tracker_3 = K2Node_DynamicCast_AsBattle_Pass_Tracker_3;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Entry_1 = K2Node_DynamicCast_AsItem_Presentation_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


