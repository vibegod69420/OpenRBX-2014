#include "v8datamodel/Intellesense.h"

#include "decomp.h"

namespace Studio {

// FUNCTION: ROBLOXSTUDIO 0x00567790
void* Intellesense::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Studio
