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

// 0x1 (0x1 - 0x0)
// Function AthenaChatWidget.AthenaChatWidget_C.FocusChat
struct UAthenaChatWidget_C_FocusChat_Params
{
public:
	bool                                         bFocus;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function AthenaChatWidget.AthenaChatWidget_C.ExecuteUbergraph_AthenaChatWidget
struct UAthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bFocus;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_73F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaChatWidgetModalWrapper_C*       K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaChatWidget.AthenaChatWidget_C.OnEnteredChat__DelegateSignature
struct UAthenaChatWidget_C_OnEnteredChat__DelegateSignature_Params
{
public:
	bool                                         EnteredChat;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


