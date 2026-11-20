#include "Network/ErrorCompPhysicsSender.h"

#include "decomp.h"

namespace RBX {
namespace Network {

struct ErrorCompGlobalSub
{
	void get(void* out, int flag);
};

struct ErrorCompGlobal
{
	long lockState;
	long reserved;
	ErrorCompGlobalSub sub;

	void lock();
	void* release();
};

ErrorCompGlobal* ErrorComp_GetGlobal();

extern "C" long _InterlockedExchangeAdd(long volatile* Addend, long Value);
extern "C" unsigned char _interlockedbittestandset(long volatile* Base, long Bit);
#pragma intrinsic(_InterlockedExchangeAdd, _interlockedbittestandset)

typedef void (__stdcall* ErrorCompNotifyFunc)(void*);
extern ErrorCompNotifyFunc g_ErrorCompNotify;

struct ErrorCompPhysicsSenderHelper
{
	void* create(int a, int b);
};

// FUNCTION: ROBLOXSTUDIO 0x00cd9aa0
ErrorCompPhysicsSender::ErrorCompPhysicsSender()
{
	int local[2];

	ErrorCompGlobal* global = ErrorComp_GetGlobal();
	global->lock();
	global->sub.get(local, 0);

	long old = _InterlockedExchangeAdd(&global->lockState, (long)0x80000000);
	if ((old & 0x40000000) == 0 && old > (long)0x80000000)
	{
		if (_interlockedbittestandset(&global->lockState, 30) == 0)
		{
			void* handle = global->release();
			g_ErrorCompNotify(handle);
		}
	}

	((void**)this)[0] = 0;
	((void**)this)[1] = 0;
	((void**)this)[0] = ((ErrorCompPhysicsSenderHelper*)this)->create(0, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
