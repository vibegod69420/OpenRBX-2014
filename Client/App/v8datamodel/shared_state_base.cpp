#include "v8datamodel/shared_state_base.h"

#include "decomp.h"

namespace boost {
namespace detail {

// FUNCTION: ROBLOXSTUDIO 0x009538c0
void* shared_state_base::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace detail
} // namespace boost
