#include "v8datamodel/sp_counted_impl_pd.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0067e450
int sp_counted_impl_pd::getField148() const
{
	return field_0148;
}

// FUNCTION: ROBLOXSTUDIO 0x007c5940
void* sp_counted_impl_pd::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
