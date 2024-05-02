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

// 0x11 (0x11 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress
struct AHeroesCamera_Blueprint_C_HandleMousePress_Params
{
public:
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
struct AHeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
struct AHeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
struct AHeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0
struct AHeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.OnActivated
struct AHeroesCamera_Blueprint_C_OnActivated_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.OnDeactivated
struct AHeroesCamera_Blueprint_C_OnDeactivated_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick
struct AHeroesCamera_Blueprint_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint
struct AHeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5255[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable;                              // 0x8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_1;                        // 0x20(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x38(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_1;                            // 0x50(0x18)(HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5256[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key_2;                        // 0x70(0x18)(HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_Event_PlayerController_1;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_Event_PlayerController;                     // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_3;                        // 0xA0(0x18)(HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5257[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaX;                // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaY;                // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5258[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0xD8(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5259[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x124(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_525A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


