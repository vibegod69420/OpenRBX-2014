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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
