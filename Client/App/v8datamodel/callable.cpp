#include "v8datamodel/callable.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0044aa90
extern void callable_defaultVFunc4();
extern bool (__thiscall *callable_checkVFunc4)(void*, void*);

bool callable::isDefaultVFunc4() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == (void*)&callable_defaultVFunc4)
		return true;
	return callable_checkVFunc4((void*)&callable_defaultVFunc4, vfunc);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
