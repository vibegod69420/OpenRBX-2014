#include "v8datamodel/BoundFuncDesc.h"

#include "decomp.h"

namespace RBX {

namespace {

struct BoundFuncDescCall
{
	virtual void invoke(int arg) = 0;
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00492f80
void __cdecl BoundFuncDesc::invoke(int arg)
{
	if (*(int*)((char*)this + 0x10))
	{
		((BoundFuncDescCall*)((char*)this + 8))->invoke(arg);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
