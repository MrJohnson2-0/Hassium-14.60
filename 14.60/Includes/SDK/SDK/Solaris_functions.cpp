#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Solaris.SolarisArrayLibrary
// (None)

class UClass* USolarisArrayLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisArrayLibrary");

	return Clss;
}


// SolarisArrayLibrary Solaris.Default__SolarisArrayLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisArrayLibrary* USolarisArrayLibrary::GetDefaultObj()
{
	static class USolarisArrayLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisArrayLibrary*>(USolarisArrayLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisArrayLibrary.Num
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisArrayLibrary::Num(TArray<int32>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "Num");

	Params::USolarisArrayLibrary_Num_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisArrayLibrary.Move
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Target                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Source                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisArrayLibrary::Move(TArray<int32>& Target, TArray<int32>& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "Move");

	Params::USolarisArrayLibrary_Move_Params Parms{};

	Parms.Target = Target;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Solaris.SolarisArrayLibrary.IsValidIndex
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisArrayLibrary::IsValidIndex(TArray<int32>& Array, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "IsValidIndex");

	Params::USolarisArrayLibrary_IsValidIndex_Params Parms{};

	Parms.Array = Array;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisArrayLibrary.Empty
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarisArrayLibrary::Empty(TArray<int32>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "Empty");

	Params::USolarisArrayLibrary_Empty_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Solaris.SolarisArrayLibrary.Contains
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Search_item                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisArrayLibrary::Contains(TArray<int32>& Array, int32& Search_item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "Contains");

	Params::USolarisArrayLibrary_Contains_Params Parms{};

	Parms.Array = Array;
	Parms.Search_item = Search_item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisArrayLibrary.Concat
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Lhs                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Rhs                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<int32> USolarisArrayLibrary::Concat(TArray<int32>& Lhs, TArray<int32>& Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "Concat");

	Params::USolarisArrayLibrary_Concat_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisArrayLibrary.Add
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              New_item                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisArrayLibrary::Add(TArray<int32>& Array, int32& New_item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "Add");

	Params::USolarisArrayLibrary_Add_Params Parms{};

	Parms.Array = Array;
	Parms.New_item = New_item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisGeneratedClass
// (Field, Struct, Class)

class UClass* USolarisGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisGeneratedClass");

	return Clss;
}


// SolarisGeneratedClass Solaris.Default__SolarisGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisGeneratedClass* USolarisGeneratedClass::GetDefaultObj()
{
	static class USolarisGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisGeneratedClass*>(USolarisGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class Solaris.SolarisMathLibrary_Bool
// (None)

class UClass* USolarisMathLibrary_Bool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_Bool");

	return Clss;
}


// SolarisMathLibrary_Bool Solaris.Default__SolarisMathLibrary_Bool
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_Bool* USolarisMathLibrary_Bool::GetDefaultObj()
{
	static class USolarisMathLibrary_Bool* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_Bool*>(USolarisMathLibrary_Bool::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_Bool.logical_xor
// (Final, Native, Static, Public)
// Parameters:
// bool                               Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Bool::Logical_xor(bool Lhs, bool Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Bool", "logical_xor");

	Params::USolarisMathLibrary_Bool_Logical_xor_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Bool.equal
// (Final, Native, Static, Public)
// Parameters:
// bool                               Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Bool::Equal(bool Lhs, bool Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Bool", "equal");

	Params::USolarisMathLibrary_Bool_Equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisMathLibrary_Int
// (None)

class UClass* USolarisMathLibrary_Int::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_Int");

	return Clss;
}


// SolarisMathLibrary_Int Solaris.Default__SolarisMathLibrary_Int
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_Int* USolarisMathLibrary_Int::GetDefaultObj()
{
	static class USolarisMathLibrary_Int* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_Int*>(USolarisMathLibrary_Int::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_Int.subtract_equals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Subtract_equals(int32* Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "subtract_equals");

	Params::USolarisMathLibrary_Int_Subtract_equals_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.Subtract
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Subtract(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "Subtract");

	Params::USolarisMathLibrary_Int_Subtract_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.not_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Not_equal(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "not_equal");

	Params::USolarisMathLibrary_Int_Not_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.negate
// (Final, Native, Static, Public)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Negate(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "negate");

	Params::USolarisMathLibrary_Int_Negate_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.multiply_equals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Multiply_equals(int32* Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "multiply_equals");

	Params::USolarisMathLibrary_Int_Multiply_equals_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.Multiply
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Multiply(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "Multiply");

	Params::USolarisMathLibrary_Int_Multiply_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.min
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Min(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "min");

	Params::USolarisMathLibrary_Int_Min_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.max
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Max(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "max");

	Params::USolarisMathLibrary_Int_Max_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.less_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Less_equal(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "less_equal");

	Params::USolarisMathLibrary_Int_Less_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.less
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Less(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "less");

	Params::USolarisMathLibrary_Int_Less_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Greater_equal(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "greater_equal");

	Params::USolarisMathLibrary_Int_Greater_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.greater
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Greater(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "greater");

	Params::USolarisMathLibrary_Int_Greater_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Equal(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "equal");

	Params::USolarisMathLibrary_Int_Equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.divide_equals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Divide_equals(int32* Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "divide_equals");

	Params::USolarisMathLibrary_Int_Divide_equals_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.Divide
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Divide(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "Divide");

	Params::USolarisMathLibrary_Int_Divide_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.add_equals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Add_equals(int32* Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "add_equals");

	Params::USolarisMathLibrary_Int_Add_equals_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.Add
// (Final, Native, Static, Public)
// Parameters:
// int32                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Add(int32 Lhs, int32 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "Add");

	Params::USolarisMathLibrary_Int_Add_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.abs
// (Final, Native, Static, Public)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Abs(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "abs");

	Params::USolarisMathLibrary_Int_Abs_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisMathLibrary_Float
// (None)

class UClass* USolarisMathLibrary_Float::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_Float");

	return Clss;
}


// SolarisMathLibrary_Float Solaris.Default__SolarisMathLibrary_Float
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_Float* USolarisMathLibrary_Float::GetDefaultObj()
{
	static class USolarisMathLibrary_Float* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_Float*>(USolarisMathLibrary_Float::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_Float.subtract_equals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// float                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Subtract_equals(float* Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "subtract_equals");

	Params::USolarisMathLibrary_Float_Subtract_equals_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Subtract
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Subtract(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "Subtract");

	Params::USolarisMathLibrary_Float_Subtract_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.not_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Float::Not_equal(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "not_equal");

	Params::USolarisMathLibrary_Float_Not_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.negate
// (Final, Native, Static, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Negate(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "negate");

	Params::USolarisMathLibrary_Float_Negate_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.multiply_equals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// float                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Multiply_equals(float* Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "multiply_equals");

	Params::USolarisMathLibrary_Float_Multiply_equals_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Multiply
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Multiply(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "Multiply");

	Params::USolarisMathLibrary_Float_Multiply_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.min
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Min(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "min");

	Params::USolarisMathLibrary_Float_Min_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.max
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Max(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "max");

	Params::USolarisMathLibrary_Float_Max_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.less_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Float::Less_equal(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "less_equal");

	Params::USolarisMathLibrary_Float_Less_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.less
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Float::Less(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "less");

	Params::USolarisMathLibrary_Float_Less_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Float::Greater_equal(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "greater_equal");

	Params::USolarisMathLibrary_Float_Greater_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.greater
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Float::Greater(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "greater");

	Params::USolarisMathLibrary_Float_Greater_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.equal
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Float::Equal(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "equal");

	Params::USolarisMathLibrary_Float_Equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.divide_equals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// float                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Divide_equals(float* Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "divide_equals");

	Params::USolarisMathLibrary_Float_Divide_equals_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Divide
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Divide(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "Divide");

	Params::USolarisMathLibrary_Float_Divide_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.assign
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// float                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Assign(float* Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "assign");

	Params::USolarisMathLibrary_Float_Assign_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.add_equals
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// float                              Lhs                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Add_equals(float* Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "add_equals");

	Params::USolarisMathLibrary_Float_Add_equals_Params Parms{};

	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Lhs != nullptr)
		*Lhs = Parms.Lhs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.Add
// (Final, Native, Static, Public)
// Parameters:
// float                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Add(float Lhs, float Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "Add");

	Params::USolarisMathLibrary_Float_Add_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Float.abs
// (Final, Native, Static, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Float::Abs(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Float", "abs");

	Params::USolarisMathLibrary_Float_Abs_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisMathLibrary_String
// (None)

class UClass* USolarisMathLibrary_String::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_String");

	return Clss;
}


// SolarisMathLibrary_String Solaris.Default__SolarisMathLibrary_String
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_String* USolarisMathLibrary_String::GetDefaultObj()
{
	static class USolarisMathLibrary_String* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_String*>(USolarisMathLibrary_String::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_String.not_equal
// (Final, Native, Static, Public)
// Parameters:
// class FString                      Lhs                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Rhs                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_String::Not_equal(const class FString& Lhs, const class FString& Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_String", "not_equal");

	Params::USolarisMathLibrary_String_Not_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_String.equal
// (Final, Native, Static, Public)
// Parameters:
// class FString                      Lhs                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Rhs                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_String::Equal(const class FString& Lhs, const class FString& Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_String", "equal");

	Params::USolarisMathLibrary_String_Equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisMathLibrary_Object
// (None)

class UClass* USolarisMathLibrary_Object::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_Object");

	return Clss;
}


// SolarisMathLibrary_Object Solaris.Default__SolarisMathLibrary_Object
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_Object* USolarisMathLibrary_Object::GetDefaultObj()
{
	static class USolarisMathLibrary_Object* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_Object*>(USolarisMathLibrary_Object::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_Object.not_equal
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Object::Not_equal(class UObject* Lhs, class UObject* Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Object", "not_equal");

	Params::USolarisMathLibrary_Object_Not_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Object.equal
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Object::Equal(class UObject* Lhs, class UObject* Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Object", "equal");

	Params::USolarisMathLibrary_Object_Equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisMathLibrary_Enum
// (None)

class UClass* USolarisMathLibrary_Enum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_Enum");

	return Clss;
}


// SolarisMathLibrary_Enum Solaris.Default__SolarisMathLibrary_Enum
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_Enum* USolarisMathLibrary_Enum::GetDefaultObj()
{
	static class USolarisMathLibrary_Enum* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_Enum*>(USolarisMathLibrary_Enum::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_Enum.not_equal
// (Final, Native, Static, Public)
// Parameters:
// uint8                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Enum::Not_equal(uint8 Lhs, uint8 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Enum", "not_equal");

	Params::USolarisMathLibrary_Enum_Not_equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Enum.equal
// (Final, Native, Static, Public)
// Parameters:
// uint8                              Lhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Rhs                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Enum::Equal(uint8 Lhs, uint8 Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Enum", "equal");

	Params::USolarisMathLibrary_Enum_Equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisGameSettings
// (None)

class UClass* USolarisGameSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisGameSettings");

	return Clss;
}


// SolarisGameSettings Solaris.Default__SolarisGameSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisGameSettings* USolarisGameSettings::GetDefaultObj()
{
	static class USolarisGameSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisGameSettings*>(USolarisGameSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Solaris.SolarisUtilLibrary
// (None)

class UClass* USolarisUtilLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisUtilLibrary");

	return Clss;
}


// SolarisUtilLibrary Solaris.Default__SolarisUtilLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisUtilLibrary* USolarisUtilLibrary::GetDefaultObj()
{
	static class USolarisUtilLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisUtilLibrary*>(USolarisUtilLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisUtilLibrary.MakeUnsetOptional
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisUtilLibrary::MakeUnsetOptional(class UObject* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisUtilLibrary", "MakeUnsetOptional");

	Params::USolarisUtilLibrary_MakeUnsetOptional_Params Parms{};

	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.MakeOptionalFromValue
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::MakeOptionalFromValue(class UObject* Property, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisUtilLibrary", "MakeOptionalFromValue");

	Params::USolarisUtilLibrary_MakeOptionalFromValue_Params Parms{};

	Parms.Property = Property;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.IsOptionalSet
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Optional                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::IsOptionalSet(class UObject* Property, int32 Optional)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisUtilLibrary", "IsOptionalSet");

	Params::USolarisUtilLibrary_IsOptionalSet_Params Parms{};

	Parms.Property = Property;
	Parms.Optional = Optional;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.IsNonNullObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::IsNonNullObject(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisUtilLibrary", "IsNonNullObject");

	Params::USolarisUtilLibrary_IsNonNullObject_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.InstantiateObject
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                      Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* USolarisUtilLibrary::InstantiateObject(class UClass* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisUtilLibrary", "InstantiateObject");

	Params::USolarisUtilLibrary_InstantiateObject_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.HasTrait
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      TraitClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisUtilLibrary::HasTrait(class UObject* Object, class UClass* TraitClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisUtilLibrary", "HasTrait");

	Params::USolarisUtilLibrary_HasTrait_Params Parms{};

	Parms.Object = Object;
	Parms.TraitClass = TraitClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.GetOptionalValue
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Optional                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisUtilLibrary::GetOptionalValue(class UObject* Property, int32 Optional)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisUtilLibrary", "GetOptionalValue");

	Params::USolarisUtilLibrary_GetOptionalValue_Params Parms{};

	Parms.Property = Property;
	Parms.Optional = Optional;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisUtilLibrary.GetClass
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* USolarisUtilLibrary::GetClass(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisUtilLibrary", "GetClass");

	Params::USolarisUtilLibrary_GetClass_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


