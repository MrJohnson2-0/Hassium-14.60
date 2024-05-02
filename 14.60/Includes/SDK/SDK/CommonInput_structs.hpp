#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonInputType : uint8
{
	MouseAndKeyboard               = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	Count                          = 3,
	ECommonInputType_MAX           = 4,
};

enum class ECommonGamepadType : uint8
{
	XboxOneController              = 0,
	PS4Controller                  = 1,
	SwitchController               = 2,
	GenericController              = 3,
	XboxSeriesXController          = 4,
	PS5Controller                  = 5,
	Count                          = 6,
	ECommonGamepadType_MAX         = 7,
};

enum class ECommonPlatformType : uint8
{
	PC                             = 0,
	Mac                            = 1,
	PS4                            = 2,
	XBox                           = 3,
	IOS                            = 4,
	Android                        = 5,
	Switch                         = 6,
	XSX                            = 7,
	PS5                            = 8,
	Count                          = 9,
	ECommonPlatformType_MAX        = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct CommonInput.CommonInputPlatformData
struct FCommonInputPlatformData
{
public:
	bool                                         bSupported;                                        // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECommonInputType                  DefaultInputType;                                  // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMouseAndKeyboard;                         // 0x2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsGamepad;                                  // 0x3(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECommonGamepadType                DefaultGamepadType;                                // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanChangeGamepadType;                             // 0x5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTouch;                                    // 0x6(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_111B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UCommonInputControllerData>> ControllerData;                                    // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputControllerData>> ControllerDataClasses;                             // 0x18(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
struct FCommonInputKeySetBrushConfiguration
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyBrush;                                          // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
struct FCommonInputKeyBrushConfiguration
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyBrush;                                          // 0x18(0x88)(Edit, NativeAccessSpecifierPublic)
};

}


