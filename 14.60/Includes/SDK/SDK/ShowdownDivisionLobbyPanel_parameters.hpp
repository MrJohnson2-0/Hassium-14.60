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

// 0x190 (0x190 - 0x0)
// Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.RefreshDivisionData
struct UShowdownDivisionLobbyPanel_C_RefreshDivisionData_Params
{
public:
	int32                                        TotalHypeForNextDivision;                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalHype;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalNumberDivisions;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DivsionRank;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAmountEarnedWithinDivision_ReturnValue; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_GetTotalDivisionPoints_ReturnValue;       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x60(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA0(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB8(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xD0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0xE8(0x18)(None)
	int32                                        CallFunc_GetNumericalDisplayAmountForNextDivision_ReturnValue; // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetTotalNumberOfDivisions_ReturnValue;    // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDivisionRank_ReturnValue;              // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x118(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x158(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_GetRequiredAmountToAdvanceDivision_ReturnValue; // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x170(0x18)(None)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.InputTypeChanged
struct UShowdownDivisionLobbyPanel_C_InputTypeChanged_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x241 (0x241 - 0x0)
// Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.Refresh
struct UShowdownDivisionLobbyPanel_C_Refresh_Params
{
public:
	enum class EFortShowdownEventState           Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x80(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLeagueDisplayName_ReturnValue;         // 0xB0(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xC8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0xE0(0x18)(None)
	bool                                         CallFunc_IsDivisionEvent_ReturnValue;              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortShowdownEventState           CallFunc_GetEventTimeState_ReturnValue;            // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoCalloutMFARequirement_ReturnValue;      // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoCalloutMFARequirement_ReturnValue_1;    // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetTournamentMatchCap_ReturnValue;        // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue; // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTournamentMatchCap_ReturnValue_1;      // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x118(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x158(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x168(0x18)(None)
	int32                                        CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue_1; // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTournamentMatchCap_ReturnValue_2;      // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x18F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_2;                             // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x198(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x1B0(0x18)(None)
	class FText                                  K2Node_Select_Default_2;                           // 0x1C8(0x18)(None)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x1EC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetStartTime_ReturnValue;                 // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_PauseAnimation_ReturnValue_1;             // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_3;                           // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEventId_ReturnValue;                   // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.EventSwitchUI
struct UShowdownDivisionLobbyPanel_C_EventSwitchUI_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x139 (0x139 - 0x0)
// Function ShowdownDivisionLobbyPanel.ShowdownDivisionLobbyPanel_C.ExecuteUbergraph_ShowdownDivisionLobbyPanel
struct UShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_1;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetStartTime_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetStartTime_ReturnValue_1;               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue_1;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue_1;             // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue_2;             // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_1;                           // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7BA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue_3;             // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7BA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDivisionDetailsScreen_C*              CallFunc_Create_ReturnValue;                       // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7BA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetTournamentId_ReturnValue;              // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEventId_ReturnValue;                   // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7BA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_2;                           // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


