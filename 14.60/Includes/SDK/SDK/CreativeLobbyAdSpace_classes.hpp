#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x294 - 0x270)
// WidgetBlueprintGeneratedClass CreativeLobbyAdSpace.CreativeLobbyAdSpace_C
class UCreativeLobbyAdSpace_C : public UFortCreativeAdsView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreativeLobbyAd_C*                    Ad1;                                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeLobbyAd_C*                    Ad2;                                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CreativeAdContent;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        NumCreativeAds;                                    // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreativeLobbyAdSpace_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_CreativeLobbyAdSpace(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue);
};

}


