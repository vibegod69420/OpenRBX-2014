#include "v8datamodel/GenericJob.h"

#include "decomp.h"

namespace RBX {
namespace DataModel {

// FUNCTION: ROBLOXSTUDIO 0x0084a0e0
void* GenericJob::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0084a0b0
void* GenericJob::scalarDeletingDestructor_a0b0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0084a110
void* GenericJob::scalarDeletingDestructor_a110(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DataModel
} // namespace RBX
