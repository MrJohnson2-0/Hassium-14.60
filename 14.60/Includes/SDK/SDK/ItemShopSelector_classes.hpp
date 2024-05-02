#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x518 - 0x510)
// WidgetBlueprintGeneratedClass ItemShopSelector.ItemShopSelector_C
class UItemShopSelector_C : public UAthenaItemShopSelector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UItemShopSelector_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_ItemShopSelector(int32 EntryPoint);
};

}


