#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4A8 - 0x498)
// WidgetBlueprintGeneratedClass EulaWidget.EulaWidget_C
class UEulaWidget_C : public UFortEulaWidget
{
public:
	FMulticastInlineDelegateProperty_            OnEulaResponse;                                    // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UEulaWidget_C* GetDefaultObj();

	void OnEulaResponse__DelegateSignature(bool Accepted);
};

}


