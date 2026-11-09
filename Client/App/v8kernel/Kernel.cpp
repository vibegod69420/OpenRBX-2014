#include "v8kernel/Kernel.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b53510
int Kernel::getSubField24_34() const
{
	return sub_0024_34->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53530
int Kernel::getSubField24_04() const
{
	return sub_0024_04->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53540
int Kernel::getSubField24_64() const
{
	return sub_0024_64->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53550
int Kernel::getSubField24_24() const
{
	return sub_0024_24->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53570
int Kernel::getSubField24_44() const
{
	return sub_0024_44->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53580
int Kernel::getSubField24_54() const
{
	return sub_0024_54->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53590
int Kernel::getSubField24_14() const
{
	return sub_0024_14->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b535b0
int Kernel::getSubField24_74() const
{
	return sub_0024_74->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53520
int Kernel::getSubField24_A4() const
{
	return sub_0024_00a4->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53560
int Kernel::getSubField24_94() const
{
	return sub_0024_0094->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b535a0
int Kernel::getSubField24_84() const
{
	return sub_0024_0084->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b51510
void* Kernel::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
