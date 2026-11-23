#include "v8datamodel/GetSetImpl.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0040d810
void __cdecl GetSetImpl::get(int* out) const
{
	if (out)
		*out = _vtable_or_head;
}

// FUNCTION: ROBLOXSTUDIO 0x007b3d20
void __cdecl GetSetImpl::set(void* arg) const
{
	typedef void (__cdecl *SetFunc)(void*, void*);
	(*(SetFunc*)this)(*((void**)this + 1), arg);
}

// FUNCTION: ROBLOXSTUDIO 0x0057df60
void __cdecl GetSetImpl::get(void* arg) const
{
	typedef void (__cdecl *GetFunc)(void*);
	(*(GetFunc*)this)(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x0040d1d0
void __cdecl GetSetImpl::initStringArray(unsigned int count)
{
	if (count != 0)
	{
		char* p = reinterpret_cast<char*>(this);
		do
		{
			if (p)
			{
				*(unsigned int*)(p + 0x14) = 15;
				*(unsigned int*)(p + 0x10) = 0;
				*p = 0;
			}
			p += 0x18;
			--count;
		}
		while (count != 0);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
