#include "Network/PersistentDataStore.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c4b290
void __cdecl PersistentDataStore::dispatch()
{
	(*(void(__cdecl**)(void*, void*))this)((char*)this + 4, *(void**)((char*)this + 0xC));
}

// FUNCTION: ROBLOXSTUDIO 0x00946870
class _PDSInternal
{
public:
	void sub_7A3000(void* out, void* a, void* b);
};

void PersistentDataStore::dispose()
{
	void* local;
	_PDSInternal* p = *(_PDSInternal**)((char*)this + 0x0C);
	if (p)
	{
		void* head = *(void**)p;
		p->sub_7A3000(&local, *(void**)head, head);
		::operator delete(*(void**)p);
		::operator delete(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x009498c0
void PersistentDataStore::destroyInstance(PersistentDataStore* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

struct _PDSCall94C470
{
	void sub_94c470(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094aff0
PersistentDataStore* __cdecl PersistentDataStore::sub_94aff0(void* arg)
{
	volatile int local = 0;
	((_PDSCall94C470*)this)->sub_94c470(arg, 1);
	return this;
}

struct _PDSCall94C750
{
	void sub_94c750(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b010
PersistentDataStore* __cdecl PersistentDataStore::sub_94b010(void* arg)
{
	volatile int local = 0;
	((_PDSCall94C750*)this)->sub_94c750(arg, 1);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
