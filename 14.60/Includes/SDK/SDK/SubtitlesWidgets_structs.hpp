#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESubtitleDisplayBackgroundOpacity : uint8
{
	Clear                          = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Solid                          = 4,
	ESubtitleDisplayBackgroundOpacity_MAX = 5,
};

enum class ESubtitleDisplayTextBorder : uint8
{
	None                           = 0,
	Outline                        = 1,
	DropShadow                     = 2,
	ESubtitleDisplayTextBorder_MAX = 3,
};

enum class ESubtitleDisplayTextColor : uint8
{
	White                          = 0,
	Yellow                         = 1,
	ESubtitleDisplayTextColor_MAX  = 2,
};

enum class ESubtitleDisplayTextSize : uint8
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	ExtraLarge                     = 4,
	ESubtitleDisplayTextSize_MAX   = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct SubtitlesWidgets.SubtitleFormat
struct FSubtitleFormat
{
public:
	enum class ESubtitleDisplayTextSize          SubtitleTextSize;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubtitleDisplayTextColor         SubtitleTextColor;                                 // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubtitleDisplayTextBorder        SubtitleTextBorder;                                // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity;                         // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


