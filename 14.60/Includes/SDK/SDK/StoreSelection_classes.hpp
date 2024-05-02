#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x3D8 - 0x380)
// Class StoreSelection.FortStoreSelectionData
class UFortStoreSelectionData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UFortStoreSelectionScreen> StoreSelectionScreenClass;                         // 0x380(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RegularStoreSelectedText;                          // 0x3A8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NonRegularStoreSelectedText;                       // 0x3C0(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortStoreSelectionData* GetDefaultObj();

};

// 0x20 (0xBC0 - 0xBA0)
// Class StoreSelection.FortStoreSelectionOptionEntry
class UFortStoreSelectionOptionEntry : public UCommonButton
{
public:
	class UFortLazyImage*                        Image_Icon;                                        // 0xBA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0xBA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Price;                                        // 0xBB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Label;                                    // 0xBB8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortStoreSelectionOptionEntry* GetDefaultObj();

};

// 0x420 (0x878 - 0x458)
// Class StoreSelection.FortStoreSelectionScreen
class UFortStoreSelectionScreen : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_25F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroup*                    EntryBoxButtonGroup;                               // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRealMoneyOffer*                   StoreOffer;                                        // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                      StoreOfferLoadGuard;                               // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Header;                                       // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      DynamicEntryBox_Options;                           // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Continue;                                   // 0x488(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Cancel;                                     // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_InitiallySelectedHint;                    // 0x498(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TScriptInterface<class IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;                               // 0x4A0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FItemData>                     StoreOptions;                                      // 0x4B0(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortMtxOfferData>      SoftDisplayAsset;                                  // 0x4C0(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FItemData                             ItemData[0xC];                                     // 0x4E8(0x360)(Edit, NativeAccessSpecifierPrivate)
	class FText                                  OptionalLabels[0x2];                               // 0x848(0x30)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortStoreSelectionScreen* GetDefaultObj();

};

}


