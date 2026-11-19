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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
