#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortMantisBranchPath : uint8
{
	Default                        = 0,
	Path_1                         = 1,
	Path_2                         = 2,
	Path_3                         = 3,
	Path_4                         = 4,
	Path_5                         = 5,
	EFortMantisBranchPath_MAX      = 6,
};

enum class EFortMantisBranchRule : uint8
{
	Off                            = 0,
	Any                            = 1,
	Starter                        = 2,
	EFortMantisBranchRule_MAX      = 3,
};

enum class EFortMantisNotifyWindow : uint8
{
	Invalid                        = 0,
	Input                          = 1,
	Execution                      = 2,
	Damage                         = 3,
	EFortMantisNotifyWindow_MAX    = 4,
};

enum class EFortMantisNotifyEvent : uint8
{
	Invalid                        = 0,
	Branch                         = 1,
	EFortMantisNotifyEvent_MAX     = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xC0 - 0x98)
// ScriptStruct MantisRuntime.FortRootMotionSource_Mantis
struct FFortRootMotionSource_Mantis : public FRootMotionSource
{
public:
	float                                        CurrentTechniqueTime;                              // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          TechniqueMontage;                                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LatestRepMovementLocation;                         // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E12[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct MantisRuntime.FortMantisTargetData
struct FFortMantisTargetData : public FGameplayAbilityTargetData
{
public:
	int32                                        TechniqueDataIndex;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E13[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MantisRuntime.FortMantisTechniqueBranch
struct FFortMantisTechniqueBranch
{
public:
	class FName                                  FromTechnique;                                     // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToTechnique;                                       // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisBranchPath             BranchPath;                                        // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E14[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct MantisRuntime.FortMantisTechniqueData
struct FFortMantisTechniqueData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartsSequence;                                   // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndsSequence;                                     // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E19[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InputWindowDelay;                                  // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Montage;                                           // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRootMotion;                                    // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     ActivationTagQuery;                                // 0x20(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     OngoingTagQuery;                                   // 0x68(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ApplicationTag;                                    // 0xB0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MantisRuntime.FortMantisMontageData
struct FFortMantisMontageData
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


