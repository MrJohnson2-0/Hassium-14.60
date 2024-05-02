#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortComicClickableZone : uint8
{
	None                           = 0,
	Previous                       = 1,
	Next                           = 2,
	EFortComicClickableZone_MAX    = 3,
};

enum class EFortComicPanelUnit : uint8
{
	Pixel                          = 0,
	Percent                        = 1,
	EFortComicPanelUnit_MAX        = 2,
};

enum class EFortComicPanelTransitionType : uint8
{
	Pan                            = 0,
	CrossFade                      = 1,
	EFortComicPanelTransitionType_MAX = 2,
};

enum class EFortComicPanelMaskType : uint8
{
	Rectangle                      = 0,
	Quad                           = 1,
	EFortComicPanelMaskType_MAX    = 2,
};

enum class EFortComicViewMode : uint8
{
	Page                           = 0,
	Panel                          = 1,
	EFortComicViewMode_MAX         = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct ComicReader.FortComicPanelTransition
struct FFortComicPanelTransition
{
public:
	enum class EFortComicPanelTransitionType     Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_588[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ComicReader.FortComicPanel
struct FFortComicPanel
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortComicPanelTransition             ForwardTransition;                                 // 0x10(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortComicPanelMaskType           Mask;                                              // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_589[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MaskPoints[0x4];                                   // 0x1C(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58A[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ComicReader.FortComicPanelReference
struct FFortComicPanelReference
{
public:
	int32                                        PageIndex;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PanelIndex;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


