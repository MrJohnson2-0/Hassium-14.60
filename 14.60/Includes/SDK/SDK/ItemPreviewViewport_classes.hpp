#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass ItemPreviewViewport.ItemPreviewViewport_C
class UItemPreviewViewport_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UWorld>                 NewVar_0;                                          // 0x268(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                NewVar_1;                                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemPreviewViewport_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_ItemPreviewViewport(int32 EntryPoint);
};

}


