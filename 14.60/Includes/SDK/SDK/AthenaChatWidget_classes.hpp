#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x390 - 0x340)
// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
class UAthenaChatWidget_C : public UAthenaActivatableChatWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                   CloseUserListAction;                               // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   OpenUserListAction;                                // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CurrentUserListAction;                             // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bEnteringChat;                                     // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_73F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEnteredChat;                                     // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAthenaChatWidget_C* GetDefaultObj();

	void FocusChat(bool bFocus);
	void ExecuteUbergraph_AthenaChatWidget(int32 EntryPoint, bool K2Node_Event_bFocus, class UAthenaChatWidgetModalWrapper_C* K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper, bool K2Node_DynamicCast_bSuccess);
	void OnEnteredChat__DelegateSignature(bool EnteredChat);
};

}


