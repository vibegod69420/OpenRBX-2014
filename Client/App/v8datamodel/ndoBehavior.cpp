#include "v8datamodel/ndoBehavior.h"

#include "decomp.h"

namespace RBX {
namespace ChangeHistoryService {

// FUNCTION: ROBLOXSTUDIO 0x00408870
void* ndoBehavior::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace ChangeHistoryService
} // namespace RBX
