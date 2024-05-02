#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ComicReader.ComicBook
// (None)

class UClass* UComicBook::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComicBook");

	return Clss;
}


// ComicBook ComicReader.Default__ComicBook
// (Public, ClassDefaultObject, ArchetypeObject)

class UComicBook* UComicBook::GetDefaultObj()
{
	static class UComicBook* Default = nullptr;

	if (!Default)
		Default = static_cast<UComicBook*>(UComicBook::StaticClass()->DefaultObject);

	return Default;
}


// Function ComicReader.ComicBook.CopyToClipboardForCMS
// (Final, Native, Private)
// Parameters:

void UComicBook::CopyToClipboardForCMS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComicBook", "CopyToClipboardForCMS");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ComicReader.FortComicReader
// (None)

class UClass* UFortComicReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortComicReader");

	return Clss;
}


// FortComicReader ComicReader.Default__FortComicReader
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortComicReader* UFortComicReader::GetDefaultObj()
{
	static class UFortComicReader* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortComicReader*>(UFortComicReader::StaticClass()->DefaultObject);

	return Default;
}


// Function ComicReader.FortComicReader.ToggleViewMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortComicReader::ToggleViewMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "ToggleViewMode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ComicReader.FortComicReader.SetCurrentPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPageIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComicReader::SetCurrentPage(int32 InPageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "SetCurrentPage");

	Params::UFortComicReader_SetCurrentPage_Params Parms{};

	Parms.InPageIndex = InPageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ComicReader.FortComicReader.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortComicReader::Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "Previous");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ComicReader.FortComicReader.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortComicReader::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "Next");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ComicReader.FortComicReader.GetViewMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortComicViewMode      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortComicViewMode UFortComicReader::GetViewMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "GetViewMode");

	Params::UFortComicReader_GetViewMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ComicReader.FortComicReader.GetTotalPageNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortComicReader::GetTotalPageNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "GetTotalPageNumber");

	Params::UFortComicReader_GetTotalPageNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ComicReader.FortComicReader.GetNumPanelsOnPage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InPageNum                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortComicReader::GetNumPanelsOnPage(int32 InPageNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "GetNumPanelsOnPage");

	Params::UFortComicReader_GetNumPanelsOnPage_Params Parms{};

	Parms.InPageNum = InPageNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ComicReader.FortComicReader.GetCurrentPanelIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortComicReader::GetCurrentPanelIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "GetCurrentPanelIndex");

	Params::UFortComicReader_GetCurrentPanelIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ComicReader.FortComicReader.GetCurrentPageNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortComicReader::GetCurrentPageNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "GetCurrentPageNumber");

	Params::UFortComicReader_GetCurrentPageNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ComicReader.FortComicReader.GetCurrentPageIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortComicReader::GetCurrentPageIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicReader", "GetCurrentPageIndex");

	Params::UFortComicReader_GetCurrentPageIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ComicReader.FortComicScreen
// (None)

class UClass* UFortComicScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortComicScreen");

	return Clss;
}


// FortComicScreen ComicReader.Default__FortComicScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortComicScreen* UFortComicScreen::GetDefaultObj()
{
	static class UFortComicScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortComicScreen*>(UFortComicScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function ComicReader.FortComicScreen.UpdateShowContinueOnLastPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InShowContinue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComicScreen::UpdateShowContinueOnLastPage(bool InShowContinue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicScreen", "UpdateShowContinueOnLastPage");

	Params::UFortComicScreen_UpdateShowContinueOnLastPage_Params Parms{};

	Parms.InShowContinue = InShowContinue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComicReader.FortComicScreen.UpdateComicTitle
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      InComicTitle                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComicScreen::UpdateComicTitle(const class FString& InComicTitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicScreen", "UpdateComicTitle");

	Params::UFortComicScreen_UpdateComicTitle_Params Parms{};

	Parms.InComicTitle = InComicTitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComicReader.FortComicScreen.OnPreProcessedNavInput
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EUINavigation           NavInput                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComicScreen::OnPreProcessedNavInput(enum class EUINavigation NavInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicScreen", "OnPreProcessedNavInput");

	Params::UFortComicScreen_OnPreProcessedNavInput_Params Parms{};

	Parms.NavInput = NavInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComicReader.FortComicScreen.HandlePreprocessorNavInput
// (Final, Native, Private)
// Parameters:
// enum class EUINavigation           InNavDirection                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComicScreen::HandlePreprocessorNavInput(enum class EUINavigation InNavDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComicScreen", "HandlePreprocessorNavInput");

	Params::UFortComicScreen_HandlePreprocessorNavInput_Params Parms{};

	Parms.InNavDirection = InNavDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ComicReader.SaveData_ComicBook
// (None)

class UClass* USaveData_ComicBook::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveData_ComicBook");

	return Clss;
}


// SaveData_ComicBook ComicReader.Default__SaveData_ComicBook
// (Public, ClassDefaultObject, ArchetypeObject)

class USaveData_ComicBook* USaveData_ComicBook::GetDefaultObj()
{
	static class USaveData_ComicBook* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveData_ComicBook*>(USaveData_ComicBook::StaticClass()->DefaultObject);

	return Default;
}


// Class ComicReader.FortComicPage
// (None)

class UClass* UFortComicPage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortComicPage");

	return Clss;
}


// FortComicPage ComicReader.Default__FortComicPage
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortComicPage* UFortComicPage::GetDefaultObj()
{
	static class UFortComicPage* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortComicPage*>(UFortComicPage::StaticClass()->DefaultObject);

	return Default;
}

}


