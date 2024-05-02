#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOptionalLabel : uint8
{
	Label_DS                       = 0,
	Label_NM                       = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct StoreSelection.ItemData
struct FItemData
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_25F6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


