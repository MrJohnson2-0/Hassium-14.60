#pragma once
namespace Memory
{
	uintptr_t GetBaseAddr()
	{
		__int64 BaseAddr = __int64(GetModuleHandleW(0));
		return BaseAddr;
	}


	uintptr_t MergeOffset(uintptr_t Address)
	{
		auto Offset = GetBaseAddr() + Address;
		return Offset;
	}

	template<class T>
	T* VirtualHook(uintptr_t Index, LPVOID Detour, void** OG = nullptr)
	{
		auto VFT = T::GetDefaultObject()->VFT;

		if (OG)
			*OG = VFT[Index];
		//Dw Size will always be 8, give it READANDWRITE AND EXECUTE PERMS
		//Make a DWORD const;
		DWORD DWORDT;
		VirtualProtect(&VFT[Index], 8, PAGE_EXECUTE_READWRITE, &DWORDT);
		VFT[Index] = Detour; //Redirecting The Index To A Function
		DWORD DWORD2;
		VirtualProtect(&VFT[Index], 8, DWORDT, &DWORD2);
	}

	void HookFunction(UFunction* Func, LPVOID Detour, void** OG = nullptr)
	{
		auto& Function = Func->ExecFunction;

		if (OG)
			*OG = Function;

		Function = reinterpret_cast<UFunction::FNativeFuncPtr>(Detour);
	}
}
