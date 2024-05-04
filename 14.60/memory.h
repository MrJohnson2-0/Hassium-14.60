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
}
