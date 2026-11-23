#include "Network/PhysicsPacketCache.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c5cfa0
extern "C" long _InterlockedCompareExchange(long volatile* Destination, long Exchange, long Comparand);
#pragma intrinsic(_InterlockedCompareExchange)

__declspec(dllimport) unsigned long __stdcall WaitForSingleObject(void* hHandle, unsigned long dwMilliseconds);

void PhysicsPacketCache::acquire()
{
	volatile long* state = (volatile long*)this;
	long old = *state;

	for (;;)
	{
		long val = old - 1;
		val ^= old;
		val &= 0x7FF;
		val ^= old;

		unsigned char isZero = (unsigned char)((val & 0x7FF) == 0);
		if (isZero)
		{
			val &= 0xFF7FFFFF;
			val |= 0x00400000;
		}

		long prev = _InterlockedCompareExchange(state, val, old);
		if (prev == old)
		{
			if (!isZero)
			{
				WaitForSingleObject(*(void**)((char*)this + 0x0C), (unsigned long)-1);
			}
			return;
		}
		old = prev;
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c5cd20
typedef long (__stdcall *ReleaseSemaphore_t)(void*, long, long*);
extern ReleaseSemaphore_t g_PhysicsPacketCache_ReleaseSemaphore;

void PhysicsPacketCache::release()
{
	volatile long* state = (volatile long*)this;
	long old = *state;

	for (;;)
	{
		unsigned long val = (unsigned long)old & 0xFFBFFFFFu;
		unsigned long field = val >> 24;
		if (field & 0x7Fu)
		{
			field = (field - 1u) & 0x7Fu;
			val = (val & 0x00FFFFFFu) | (field << 24);
		}
		val &= 0xFFC007FFu;

		long prev = _InterlockedCompareExchange(state, (long)val, old);
		if (prev == old)
			break;
		old = prev;
	}

	ReleaseSemaphore_t fn = g_PhysicsPacketCache_ReleaseSemaphore;
	long field24 = ((unsigned long)old >> 24) & 0x7Fu;
	if (field24 != 0)
	{
		fn(*(void**)((char*)this + 8), 1, 0);
		fn = g_PhysicsPacketCache_ReleaseSemaphore;
	}

	long remaining = ((unsigned long)old >> 11) & 0x7FFu;
	if (remaining != 0 || field24 != 0)
	{
		long count = (field24 != 0) ? 1 : 0;
		count += remaining;
		fn(*(void**)((char*)this + 4), count, 0);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c5cdb0
void PhysicsPacketCache::releaseAll()
{
	volatile long* state = (volatile long*)this;
	long old = *state;

	for (;;)
	{
		unsigned long val = (unsigned long)old & 0xFFBFFFFFu;
		val |= 0x00800000u;
		unsigned long inc = val + 1u;
		inc ^= val;
		inc &= 0x7FFu;
		val ^= inc;

		unsigned long field = val >> 24;
		if (field & 0x7Fu)
		{
			field = (field - 1u) & 0x7Fu;
			val = (val & 0x00FFFFFFu) | (field << 24);
		}
		val &= 0xFFC007FFu;

		long prev = _InterlockedCompareExchange(state, (long)val, old);
		if (prev == old)
			break;
		old = prev;
	}

	ReleaseSemaphore_t fn = g_PhysicsPacketCache_ReleaseSemaphore;
	long field24 = ((unsigned long)old >> 24) & 0x7Fu;
	if (field24 != 0)
	{
		fn(*(void**)((char*)this + 8), 1, 0);
		fn = g_PhysicsPacketCache_ReleaseSemaphore;
	}

	long remaining = ((unsigned long)old >> 11) & 0x7FFu;
	if (remaining != 0 || field24 != 0)
	{
		long count = (field24 != 0) ? 1 : 0;
		count += remaining;
		fn(*(void**)((char*)this + 4), count, 0);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
