#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// Class ComicReader.ComicBook
class UComicBook : public UDataAsset
{
public:
	TArray<class UFortComicPage*>                Pages;                                             // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExportStartingWithPageIndex;                       // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        PagesToExport;                                     // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UComicBook* GetDefaultObj();

	void CopyToClipboardForCMS();
};

// 0x98 (0x1A0 - 0x108)
// Class ComicReader.FortComicReader
class UFortComicReader : public UWidget
{
public:
	uint8                                        Pad_582[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortComicPage*>                Pages;                                             // 0x130(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortComicPanelReference              CurrentPanel;                                      // 0x140(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EFortComicViewMode                ViewMode;                                          // 0x148(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_583[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnPanelChanged;                                 // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnNext;                                         // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnPrevious;                                     // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnViewModeChanged;                              // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnHoverZoneChanged;                             // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortComicReader* GetDefaultObj();

	void ToggleViewMode();
	void SetCurrentPage(int32 InPageIndex);
	void Previous();
	void Next();
	enum class EFortComicViewMode GetViewMode();
	int32 GetTotalPageNumber();
	int32 GetNumPanelsOnPage(int32 InPageNum);
	int32 GetCurrentPanelIndex();
	int32 GetCurrentPageNumber();
	int32 GetCurrentPageIndex();
};

// 0x20 (0x3D8 - 0x3B8)
// Class ComicReader.FortComicScreen
class UFortComicScreen : public UAthenaSpatialScreen
{
public:
	uint8                                        Pad_586[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortComicReader*                      ComicReader;                                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                LoadingSpinner;                                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortComicScreen* GetDefaultObj();

	void UpdateShowContinueOnLastPage(bool InShowContinue);
	void UpdateComicTitle(const class FString& InComicTitle);
	void OnPreProcessedNavInput(enum class EUINavigation NavInput);
	void HandlePreprocessorNavInput(enum class EUINavigation InNavDirection);
};

// 0x8 (0x48 - 0x40)
// Class ComicReader.SaveData_ComicBook
class USaveData_ComicBook : public USaveData
{
public:
	int32                                        LastPage;                                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_587[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USaveData_ComicBook* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class ComicReader.FortComicPage
class UFortComicPage : public UObject
{
public:
	struct FSlateBrush                           PageBrush;                                         // 0x28(0x88)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FFortComicPanel>               Panels;                                            // 0xB0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortComicPage* GetDefaultObj();

};

}


