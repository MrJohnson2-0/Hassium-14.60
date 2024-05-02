#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisArrayLibrary
class USolarisArrayLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisArrayLibrary* GetDefaultObj();

	int32 Num(TArray<int32>& Array);
	void Move(TArray<int32>& Target, TArray<int32>& Source);
	bool IsValidIndex(TArray<int32>& Array, int32 Index);
	void Empty(TArray<int32>& Array);
	bool Contains(TArray<int32>& Array, int32& Search_item);
	TArray<int32> Concat(TArray<int32>& Lhs, TArray<int32>& Rhs);
	int32 Add(TArray<int32>& Array, int32& New_item);
};

// 0x28 (0x258 - 0x230)
// Class Solaris.SolarisGeneratedClass
class USolarisGeneratedClass : public UClass
{
public:
	uint32                                       SolClassFlags;                                     // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        CoroClasses;                                       // 0x238(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                        TraitClasses;                                      // 0x248(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USolarisGeneratedClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Bool
class USolarisMathLibrary_Bool : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Bool* GetDefaultObj();

	bool Logical_xor(bool Lhs, bool Rhs);
	bool Equal(bool Lhs, bool Rhs);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Int
class USolarisMathLibrary_Int : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Int* GetDefaultObj();

	int32 Subtract_equals(int32* Lhs, int32 Rhs);
	int32 Subtract(int32 Lhs, int32 Rhs);
	bool Not_equal(int32 Lhs, int32 Rhs);
	int32 Negate(int32 Value);
	int32 Multiply_equals(int32* Lhs, int32 Rhs);
	int32 Multiply(int32 Lhs, int32 Rhs);
	int32 Min(int32 Lhs, int32 Rhs);
	int32 Max(int32 Lhs, int32 Rhs);
	bool Less_equal(int32 Lhs, int32 Rhs);
	bool Less(int32 Lhs, int32 Rhs);
	bool Greater_equal(int32 Lhs, int32 Rhs);
	bool Greater(int32 Lhs, int32 Rhs);
	bool Equal(int32 Lhs, int32 Rhs);
	int32 Divide_equals(int32* Lhs, int32 Rhs);
	int32 Divide(int32 Lhs, int32 Rhs);
	int32 Add_equals(int32* Lhs, int32 Rhs);
	int32 Add(int32 Lhs, int32 Rhs);
	int32 Abs(int32 Value);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Float
class USolarisMathLibrary_Float : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Float* GetDefaultObj();

	float Subtract_equals(float* Lhs, float Rhs);
	float Subtract(float Lhs, float Rhs);
	bool Not_equal(float Lhs, float Rhs);
	float Negate(float Value);
	float Multiply_equals(float* Lhs, float Rhs);
	float Multiply(float Lhs, float Rhs);
	float Min(float Lhs, float Rhs);
	float Max(float Lhs, float Rhs);
	bool Less_equal(float Lhs, float Rhs);
	bool Less(float Lhs, float Rhs);
	bool Greater_equal(float Lhs, float Rhs);
	bool Greater(float Lhs, float Rhs);
	bool Equal(float Lhs, float Rhs);
	float Divide_equals(float* Lhs, float Rhs);
	float Divide(float Lhs, float Rhs);
	float Assign(float* Lhs, float Rhs);
	float Add_equals(float* Lhs, float Rhs);
	float Add(float Lhs, float Rhs);
	float Abs(float Value);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_String
class USolarisMathLibrary_String : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_String* GetDefaultObj();

	bool Not_equal(const class FString& Lhs, const class FString& Rhs);
	bool Equal(const class FString& Lhs, const class FString& Rhs);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Object
class USolarisMathLibrary_Object : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Object* GetDefaultObj();

	bool Not_equal(class UObject* Lhs, class UObject* Rhs);
	bool Equal(class UObject* Lhs, class UObject* Rhs);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Enum
class USolarisMathLibrary_Enum : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Enum* GetDefaultObj();

	bool Not_equal(uint8 Lhs, uint8 Rhs);
	bool Equal(uint8 Lhs, uint8 Rhs);
};

// 0x18 (0x40 - 0x28)
// Class Solaris.SolarisGameSettings
class USolarisGameSettings : public UObject
{
public:
	TArray<class FString>                        Blacklist;                                         // 0x28(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAllowedSize;                                    // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E6D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USolarisGameSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisUtilLibrary
class USolarisUtilLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisUtilLibrary* GetDefaultObj();

	int32 MakeUnsetOptional(class UObject* Property);
	bool MakeOptionalFromValue(class UObject* Property, int32 Value);
	bool IsOptionalSet(class UObject* Property, int32 Optional);
	bool IsNonNullObject(class UObject* Object);
	class UObject* InstantiateObject(class UClass* Type);
	bool HasTrait(class UObject* Object, class UClass* TraitClass);
	int32 GetOptionalValue(class UObject* Property, int32 Optional);
	class UClass* GetClass(class UObject* Object);
};

}


