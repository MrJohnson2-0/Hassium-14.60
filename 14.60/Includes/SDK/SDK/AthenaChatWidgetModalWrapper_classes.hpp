#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// WidgetBlueprintGeneratedClass AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C
class UAthenaChatWidgetModalWrapper_C : public UAthenaChatModalWrapper
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAthenaChatWidgetModalWrapper_C* GetDefaultObj();

	void FocusChat(class UChatContainer_C* K2Node_DynamicCast_AsChat_Container, bool K2Node_DynamicCast_bSuccess);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void ExecuteUbergraph_AthenaChatWidgetModalWrapper(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UChatContainer_C* K2Node_DynamicCast_AsChat_Container, bool K2Node_DynamicCast_bSuccess);
};

}


