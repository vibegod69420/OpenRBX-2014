#include "v8datamodel/Workspace.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00900000
void Workspace::setFlag7C(bool value)
{
	flag_007c = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00900040
void Workspace::setGlobal_0040(int value)
{
	s_val_00900040 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00900070
void Workspace::setGlobal_0070(int value)
{
	s_val_00900070 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x009000f0
void Workspace::setGlobal_00f0(int value)
{
	s_val_009000f0 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x0096c930
void Workspace::setFlag228(bool value)
{
	flag_0228 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x009657f0
void* Workspace::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00965820
void* Workspace::scalarDeletingDestructor_slot0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00965850
void* Workspace::scalarDeletingDestructor_5850(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
