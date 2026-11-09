#include "v8datamodel/lock_error.h"

#include "decomp.h"

namespace boost {

// FUNCTION: ROBLOXSTUDIO 0x0040ea80
void* lock_error::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0040f3e0
void* lock_error::scalarDeletingDestructorImp_f3e0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
