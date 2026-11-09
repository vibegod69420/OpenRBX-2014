#include "v8datamodel/FileWatcherWin32.h"

#include "decomp.h"

namespace FW {

// FUNCTION: ROBLOXSTUDIO 0x004511e0
void* FileWatcherWin32::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace FW
