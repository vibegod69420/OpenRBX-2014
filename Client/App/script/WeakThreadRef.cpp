#include "script/WeakThreadRef.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

// FUNCTION: ROBLOXSTUDIO 0x008c19c0
void WeakThreadRef::removeRef()
{
	extern unsigned char gLogWeakThreadRef;
	extern void logWeakThreadRefRemove(int, const char*, const WeakThreadRef*, void*, int);

	unsigned char logFlag = gLogWeakThreadRef;
	if (logFlag)
	{
		void* node = *(void**)((char*)this + 0x18);
		logWeakThreadRefRemove((int)logFlag, "WeakThreadRef::removeRef() %p for node %p", this, node, 0);
	}

	void* ref = *(void**)((char*)this + 0x14);
	*(void**)((char*)this + 0x14) = 0;

	if (ref)
	{
		extern void freeWeakThreadRef(void*);
		freeWeakThreadRef(ref);
	}
}

class WeakThreadRefTarget;

struct WeakThreadRefAccessor
{
	WeakThreadRefTarget* slot; // offset 0
	void* fetchContext();
};

class WeakThreadRefTarget
{
public:
	void update(void* context);
};

// FUNCTION: ROBLOXSTUDIO 0x0043edf0
void WeakThreadRef::update()
{
	WeakThreadRefAccessor* self = reinterpret_cast<WeakThreadRefAccessor*>(this);
	void* context = self->fetchContext();
	self->slot->update(context);
}

class WeakThreadRefDispatch
{
public:
	virtual void dispatch();
};

// FUNCTION: ROBLOXSTUDIO 0x0043f020
void __cdecl WeakThreadRef::dispatch()
{
	if (*(int*)((char*)this + 0x10) != 0)
	{
		((WeakThreadRefDispatch*)((char*)this + 8))->dispatch();
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
