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

struct _PDSCall94DC30
{
	void sub_94dc30(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b0f0
PersistentDataStore* __cdecl PersistentDataStore::sub_94b0f0(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94DC30*)arg)->sub_94dc30(flag, 1);
	return (PersistentDataStore*)arg;
}

struct _PDSCall94DF10
{
	void sub_94df10(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b110
PersistentDataStore* __cdecl PersistentDataStore::sub_94b110(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94DF10*)arg)->sub_94df10(flag, 1);
	return (PersistentDataStore*)arg;
}

struct _PDSCall94E1F0
{
	void sub_94e1f0(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b130
PersistentDataStore* __cdecl PersistentDataStore::sub_94b130(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94E1F0*)arg)->sub_94e1f0(flag, 1);
	return (PersistentDataStore*)arg;
}

struct _PDSCall94E4D0
{
	void sub_94e4d0(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b150
PersistentDataStore* __cdecl PersistentDataStore::sub_94b150(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94E4D0*)arg)->sub_94e4d0(flag, 1);
	return (PersistentDataStore*)arg;
}

struct _PDSCall94E7B0
{
	void sub_94e7b0(int arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0094b170
PersistentDataStore* __cdecl PersistentDataStore::sub_94b170(void* arg, int flag)
{
	volatile int local = 0;
	((_PDSCall94E7B0*)arg)->sub_94e7b0(flag, 1);
	return (PersistentDataStore*)arg;
}

// FUNCTION: ROBLOXSTUDIO 0x0094b190
struct _PDSCall94EA90
{
	void sub_94ea90(void* arg, int flag);
};

PersistentDataStore* __cdecl PersistentDataStore::sub_94b190(void* arg)
{
	volatile int local = 0;
	((_PDSCall94EA90*)this)->sub_94ea90(arg, 1);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
