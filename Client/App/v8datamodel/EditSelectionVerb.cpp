#include "v8datamodel/EditSelectionVerb.h"

#include "decomp.h"

namespace RBX {

extern "C" long __cdecl _InterlockedDecrement(long volatile* Addend);

// FUNCTION: ROBLOXSTUDIO 0x006b9800
int EditSelectionVerb::release()
{
    return _InterlockedDecrement(reinterpret_cast<long volatile*>(&_vtable_or_head));
}

extern "C" long __cdecl _InterlockedIncrement(long volatile* Addend);

// FUNCTION: ROBLOXSTUDIO 0x006b97d0
int EditSelectionVerb::addRef()
{
    return _InterlockedIncrement(reinterpret_cast<long volatile*>(&_vtable_or_head));
}

static EditSelectionVerb* g_activeEditSelectionVerb;

// FUNCTION: ROBLOXSTUDIO 0x006b9580
void __cdecl EditSelectionVerb::setActive()
{
	g_activeEditSelectionVerb = this;
}

// FUNCTION: ROBLOXSTUDIO 0x006b9720
void EditSelectionVerb::setVtableOrHead(int value)
{
    _vtable_or_head = value;
}

void __cdecl sub_006B99C0(EditSelectionVerb* self, int a2, int* a3);

// FUNCTION: ROBLOXSTUDIO 0x006b98c0
EditSelectionVerb* __cdecl EditSelectionVerb::sub_006B98C0(int a2, int a3)
{
	volatile int local;
	sub_006B99C0((local = 0, this), a2, &a3);
	return this;
}

struct AtomicRefCount
{
	long compareExchange(long exchange, long comparand);
};

// FUNCTION: ROBLOXSTUDIO 0x006b9b30
bool __cdecl EditSelectionVerb::sub_006B9B30()
{
	char* base;
	if (this)
		base = (char*)this - 5;
	else
		base = 0;

	long count = *(long*)((char*)base - 8);
	if (count != 0)
	{
		do
		{
			if (((AtomicRefCount*)((char*)base - 8))->compareExchange(count + 1, count) == count)
				return true;
			count = *(long*)((char*)base - 8);
		} while (count != 0);
	}
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x006b9730
void __cdecl EditSelectionVerb::sub_006B9730()
{
	g_activeEditSelectionVerb = this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
