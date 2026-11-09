#pragma once

#if !defined(_MSC_VER) || _MSC_VER >= 1600
#include <stdint.h>
#else
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#endif

#if defined(_MSC_VER)
#define RBX_NOINLINE __declspec(noinline)
#define RBX_FORCEINLINE __forceinline
#else
#define RBX_NOINLINE __attribute__((noinline))
#define RBX_FORCEINLINE inline __attribute__((always_inline))
#endif

#define DECOMP_SIZE_ASSERT(T, sz) typedef char _decomp_size_assert_##T[(sizeof(T) == (sz)) ? 1 : -1]

// Prevents MSVC /OPT:ICF from folding unimplemented stubs into the same address
extern "C" volatile uint32_t g_rbx_stub_sink;
extern "C" void __cdecl rbx_free_mem(void* p);
extern "C" __declspec(dllimport) void __cdecl rbx_free_mem_imp(void* p);

#define UNK_STUB(addr) do { g_rbx_stub_sink = (uint32_t)(addr); } while (0)

struct RbxVDelBase
{
	virtual ~RbxVDelBase();
};

struct RbxPairInt
{
	int first;
	int second;
};
