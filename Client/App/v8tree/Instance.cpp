#include "v8tree/Instance.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00427540
int Instance::getConst16797656() const
{
	return 16797656;
}

// FUNCTION: ROBLOXSTUDIO 0x00427550
int Instance::getConst16797664() const
{
	return 16797664;
}

// FUNCTION: ROBLOXSTUDIO 0x006b89b0
int Instance::getConst14956404() const
{
	return 14956404;
}

// FUNCTION: ROBLOXSTUDIO 0x006b7c50
void Instance::destroySubPtr0C()
{
	Instance* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00426d00
void* sub_825140();

Instance::Instance()
{
	_vtable_or_head = (int)sub_825140();
	*((int*)this + 1) = 0;
}

__declspec(dllimport) int* __cdecl sub_E10B04(int*);

// FUNCTION: ROBLOXSTUDIO 0x004f4330
void Instance::fetchContextId()
{
	int local;
	*(int*)((char*)this + 0x40C) = *sub_E10B04(&local);
}

class InstanceStaticSingleton
{
public:
	virtual ~InstanceStaticSingleton() {}
};

// FUNCTION: ROBLOXSTUDIO 0x006b8870
void* Instance::getStaticSingleton()
{
	static InstanceStaticSingleton instance;
	return &instance;
}

__declspec(dllimport) void __stdcall sub_E10114(void*);
extern int dword_12DE61C;
extern int dword_12DE620;

// FUNCTION: ROBLOXSTUDIO 0x006b7370
void* __cdecl Instance::sub_6B7370(void** in)
{
	void* p = *in;
	if (p)
	{
		sub_E10114(p);
		*in = 0;
	}

	((int*)this)[0] = dword_12DE61C;
	((int*)this)[1] = dword_12DE620;
	return this;
}

__declspec(dllimport) void __cdecl sub_E10508(void*);

// FUNCTION: ROBLOXSTUDIO 0x00426f50
void Instance::destroySlotBuffer()
{
	char* it = *(char**)this;
	if (it)
	{
		char* end = *(char**)((char*)this + 4);
		for (; it != end; it += 0x44)
		{
			void* obj = *(void**)(it + 4);
			if (obj)
			{
				void (__cdecl *fn)(void*) = *(void (__cdecl**)(void*))((char*)obj + 4);
				fn(it + 8);
			}
		}
		sub_E10508(*(void**)this);
		*(void**)this = 0;
		*(void**)((char*)this + 4) = 0;
		*(void**)((char*)this + 8) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
