#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass F_MED_Hightower_Squash_FaceAcc_CtrlRig.F_MED_Hightower_Squash_FaceAcc_CtrlRig_C
// (None)

class UClass* UF_MED_Hightower_Squash_FaceAcc_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_MED_Hightower_Squash_FaceAcc_CtrlRig_C");

	return Clss;
}


// F_MED_Hightower_Squash_FaceAcc_CtrlRig_C F_MED_Hightower_Squash_FaceAcc_CtrlRig.Default__F_MED_Hightower_Squash_FaceAcc_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_MED_Hightower_Squash_FaceAcc_CtrlRig_C* UF_MED_Hightower_Squash_FaceAcc_CtrlRig_C::GetDefaultObj()
{
	static class UF_MED_Hightower_Squash_FaceAcc_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_MED_Hightower_Squash_FaceAcc_CtrlRig_C*>(UF_MED_Hightower_Squash_FaceAcc_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


