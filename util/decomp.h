#pragma once
#include <stdint.h>

#if defined(_MSC_VER)
#define RBX_NOINLINE __declspec(noinline)
#define RBX_FORCEINLINE __forceinline
#else
#define RBX_NOINLINE __attribute__((noinline))
#define RBX_FORCEINLINE inline __attribute__((always_inline))
#endif

// Prevents MSVC /OPT:ICF from folding unimplemented stubs into the same address
extern "C" volatile uint32_t g_rbx_stub_sink;
#define UNK_STUB(addr) do { g_rbx_stub_sink = (uint32_t)(addr); } while (0)

#define STATIC_ASSERT_SIZE(type, size) static_assert(sizeof(type) == (size), "Size mismatch for " #type)
