#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// Function ImportFriends.ImportFriends_C.ScaleTextButton
struct UImportFriends_C_ScaleTextButton_Params
{
public:
	int32                                        CharThreshold;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7312[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScaleBox*                             ContainingScalebox;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7313[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function ImportFriends.ImportFriends_C.ScaleTextboxWithWrappingWorkaround
struct UImportFriends_C_ScaleTextboxWithWrappingWorkaround_Params
{
public:
	class UScaleBox*                             ContainingScalebox;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharLimitThreshold;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7314[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      TargetText;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WrapAtHorrizontal;                                 // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleCharThreshold;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7315[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x28(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ImportFriends.ImportFriends_C.PreConstruct
struct UImportFriends_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ImportFriends.ImportFriends_C.OnPanelTypeSet
struct UImportFriends_C_OnPanelTypeSet_Params
{
public:
	enum class ESocialImportPanelType            NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature
struct UImportFriends_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ImportFriends.ImportFriends_C.OnIncentivizedSet
struct UImportFriends_C_OnIncentivizedSet_Params
{
public:
	bool                                         bIncentivized;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends
struct UImportFriends_C_ExecuteUbergraph_ImportFriends_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7316[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	enum class ESocialImportPanelPlatform        Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        Temp_byte_Variable_8;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_10;                             // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_11;                             // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_12;                             // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_13;                             // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_14;                             // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_15;                             // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        Temp_byte_Variable_16;                             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7317[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x50(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESocialImportPanelType            K2Node_Event_NewType;                              // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        Temp_byte_Variable_17;                             // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7318[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelPlatform        CallFunc_GetSocialPlatform_OutPlatform;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSocialPlatform_ReturnValue;            // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7319[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIncentivized;                        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_731A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x90(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xA8(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_731B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0xC8(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_731C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_731D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button_1;           // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_731E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_3;                           // 0x118(0x18)(None)
};

}
}


