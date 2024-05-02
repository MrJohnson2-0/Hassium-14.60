#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC18 - 0xC10)
// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
class UAthenaVariantTileButton_C : public UFortVariantTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC10(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAthenaVariantTileButton_C* GetDefaultObj();

	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* K2Node_Event_ListItemObject);
};

}


