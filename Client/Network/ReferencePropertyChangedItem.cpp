#include "Network/ReferencePropertyChangedItem.h"

#include "decomp.h"

namespace RBX {
namespace Network {

typedef union _LARGE_INTEGER {
    struct {
        unsigned long LowPart;
        long HighPart;
    };
    struct {
        unsigned long LowPart;
        long HighPart;
    } u;
    __int64 QuadPart;
} LARGE_INTEGER;

extern "C" __declspec(dllimport) int __stdcall QueryPerformanceCounter(LARGE_INTEGER* lpPerformanceCount);
extern "C" __declspec(dllimport) int __stdcall QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency);

extern "C" __declspec(dllimport) unsigned long __stdcall InitOnceA();
extern "C" __declspec(dllimport) void __stdcall InitOnceB(unsigned long, unsigned long*, unsigned long*);
extern "C" __declspec(dllimport) unsigned long __stdcall InitOnceC();

// FUNCTION: ROBLOXSTUDIO 0x00ccfe70
__int64 ReferencePropertyChangedItem::getCurrentMicroseconds()
{
    static unsigned long s_initBaseLow;
    static unsigned long s_initBaseHigh;
    static unsigned long s_initValue;
    static unsigned char s_initialized = 0;

    if (s_initialized == 0)
    {
        s_initialized = 1;
        unsigned long initResult = InitOnceA();
        InitOnceB(initResult, &s_initBaseLow, &s_initBaseHigh);
        s_initValue = InitOnceC();
    }

    LARGE_INTEGER freq;
    LARGE_INTEGER counter;

    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&counter);

    unsigned __int64 counterValue = (unsigned __int64)counter.QuadPart;
    unsigned __int64 freqValue = (unsigned __int64)freq.QuadPart;

    unsigned __int64 quotient = counterValue / freqValue;
    unsigned __int64 remainder = counterValue % freqValue;

    return (__int64)((remainder * 1000000ULL) / freqValue + quotient * 1000000ULL);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
