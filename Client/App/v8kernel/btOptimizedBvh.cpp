#include "v8kernel/btOptimizedBvh.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005b2f00
int btOptimizedBvh::getConst84() const
{
	return 84;
}

static btOptimizedBvh* btOptimizedBvh_s_instance;

extern "C" __declspec(dllimport) void* __cdecl btOptimizedBvh_operatorNew(unsigned int);
extern "C" __declspec(dllimport) void __stdcall btOptimizedBvh_sub_5B2E71(void*);
extern "C" __declspec(dllimport) void __stdcall btOptimizedBvh_sub_5B2E80(void*);
extern "C" __declspec(dllimport) int __cdecl btOptimizedBvh_sub_5B2E86();

// FUNCTION: ROBLOXSTUDIO 0x005b2e60
btOptimizedBvh** btOptimizedBvh::createStaticInstance()
{
	btOptimizedBvh_s_instance = (btOptimizedBvh*)btOptimizedBvh_operatorNew(0x20);
	btOptimizedBvh_sub_5B2E71((void*)btOptimizedBvh_s_instance);
	btOptimizedBvh_sub_5B2E80((char*)btOptimizedBvh_s_instance + 0x18);
	*(int*)((char*)btOptimizedBvh_s_instance + 8) = btOptimizedBvh_sub_5B2E86();
	*(int*)((char*)btOptimizedBvh_s_instance + 0x10) = 0;
	*(int*)((char*)btOptimizedBvh_s_instance + 0x14) = 0;
	return (btOptimizedBvh**)&btOptimizedBvh_s_instance;
}

// AUTO-GENERATED IMPLEMENTATIONS


