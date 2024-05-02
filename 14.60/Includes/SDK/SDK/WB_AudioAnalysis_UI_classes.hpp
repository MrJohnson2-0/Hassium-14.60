#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
class UWB_AudioAnalysis_UI_C : public UFortAudioAnalysisDebugWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          GraphBox;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_AudioAnalysis_FloatGraph_C*> Widgets;                                           // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_AudioAnalysis_UI_C* GetDefaultObj();

	void AddMPCParameter(class FName ParamName, class UMaterialParameterCollection* Collection, int32 Vec4Index);
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int32 EntryPoint, class FName K2Node_Event_ParamName, class UMaterialParameterCollection* K2Node_Event_Collection, int32 K2Node_Event_Vec4Index, class UWB_AudioAnalysis_FloatGraph_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}


