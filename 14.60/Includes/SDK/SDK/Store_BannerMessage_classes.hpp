#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A0 - 0x290)
// WidgetBlueprintGeneratedClass Store_BannerMessage.Store_BannerMessage_C
class UStore_BannerMessage_C : public UFortStoreBanner
{
public:
	class UWidgetAnimation*                      Ani_Intro;                                         // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                AnimatingBorder;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStore_BannerMessage_C* GetDefaultObj();

	void Pulse(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


