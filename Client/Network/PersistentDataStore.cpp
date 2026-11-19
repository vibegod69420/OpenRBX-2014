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

struct _PDSCall94CB10
{
	void sub_94cb10(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b030
PersistentDataStore* __cdecl PersistentDataStore::sub_94b030(void* arg)
{
	volatile int local = 0;
	((_PDSCall94CB10*)this)->sub_94cb10(arg, 1);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0094b050
// Forward declaration of the helper called at 0x94cde0 (relocation masked by verifier)
void __cdecl _helper_94cde0(void* a, int b);

PersistentDataStore* __cdecl PersistentDataStore::sub_94b050(void* arg, int flag)
{
	volatile int local = 0;
	_helper_94cde0(arg, flag);
	return this;
}

struct _PDSCall94D0C0
{
	void sub_94d0c0(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b070
PersistentDataStore* __cdecl PersistentDataStore::sub_94b070(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94D0C0*)arg)->sub_94d0c0(flag, 1);
	return (PersistentDataStore*)arg;
}

struct _PDSCall94D390
{
	void sub_94d390(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b090
PersistentDataStore* __cdecl PersistentDataStore::sub_94b090(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94D390*)arg)->sub_94d390(flag, 1);
	return (PersistentDataStore*)arg;
}

struct _PDSCall94D670
{
	void sub_94d670(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b0b0
PersistentDataStore* __cdecl PersistentDataStore::sub_94b0b0(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94D670*)arg)->sub_94d670(flag, 1);
	return (PersistentDataStore*)arg;
}

struct _PDSCall94D950
{
	void sub_94d950(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b0d0
PersistentDataStore* __cdecl PersistentDataStore::sub_94b0d0(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94D950*)arg)->sub_94d950(flag, 1);
	return (PersistentDataStore*)arg;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
