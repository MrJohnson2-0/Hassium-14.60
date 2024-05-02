#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x948 - 0x940)
// BlueprintGeneratedClass Frontend_EventLevel_Camera.Frontend_EventLevel_Camera_C
class AFrontend_EventLevel_Camera_C : public AFortEventLevelCamera
{
public:
	class UTextRenderComponent*                  TextRender;                                        // 0x940(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_EventLevel_Camera_C* GetDefaultObj();

	void UserConstructionScript(const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


