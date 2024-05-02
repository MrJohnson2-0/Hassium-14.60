#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3A0 - 0x398)
// WidgetBlueprintGeneratedClass SpatialFrontend.SpatialFrontend_C
class USpatialFrontend_C : public UAthenaSpatialFrontend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USpatialFrontend_C* GetDefaultObj();

	void OnEventLevelTransitionBegin(struct FGameplayTag& TargetCamera, class AFortEventLevelNavigationActor* TargetNavActor);
	void ExecuteUbergraph_SpatialFrontend(int32 EntryPoint, class UBPS12MainRoomPOITag_C* K2Node_DynamicCast_AsBPS12Main_Room_POITag, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& K2Node_Event_TargetCamera, class AFortEventLevelNavigationActor* K2Node_Event_TargetNavActor, const struct FFortEventLevelNavigationDisplayDetails& CallFunc_GetDisplayDetails_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


