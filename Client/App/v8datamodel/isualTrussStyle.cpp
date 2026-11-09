#include "v8datamodel/isualTrussStyle.h"

#include "decomp.h"

namespace RBX {
namespace ExtrudedPartInstance {

// FUNCTION: ROBLOXSTUDIO 0x0080dfa0
void* isualTrussStyle::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace ExtrudedPartInstance
} // namespace RBX
