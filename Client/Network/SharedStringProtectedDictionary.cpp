#include "Network/SharedStringProtectedDictionary.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c84740
void SharedStringProtectedDictionary::destroySubPtr0C()
{
	SharedStringProtectedDictionary* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

extern "C" long _InterlockedExchangeAdd(long volatile* Addend, long Value);
extern "C" unsigned char _interlockedbittestandset(long* Base, long Offset);
#pragma intrinsic(_InterlockedExchangeAdd, _interlockedbittestandset)

__declspec(dllimport) int __stdcall SetEvent(void* hEvent);

SharedStringProtectedDictionary* SharedStringDictionarySingleton();

struct SharedStringDictionaryLock
{
	void acquire();
	void* releaseEvent();
};

struct SharedStringDictionaryFreeList
{
	void* allocate();
};

// FUNCTION: ROBLOXSTUDIO 0x00c87230
void* SharedStringProtectedDictionary::fetch()
{
	SharedStringProtectedDictionary* dict = SharedStringDictionarySingleton();
	((SharedStringDictionaryLock*)dict)->acquire();

	void* entry = *(void**)((char*)dict + 8);
	if (entry)
	{
		*(void**)((char*)dict + 8) = *(void**)entry;
	}
	else
	{
		entry = ((SharedStringDictionaryFreeList*)((char*)dict + 8))->allocate();
	}

	long oldState = _InterlockedExchangeAdd((long volatile*)dict, 0x80000000);
	if ((oldState & 0x40000000) == 0 && oldState > (long)0x80000000)
	{
		if (_interlockedbittestandset((long*)dict, 30) == 0)
		{
			SetEvent(((SharedStringDictionaryLock*)dict)->releaseEvent());
		}
	}

	return entry;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
