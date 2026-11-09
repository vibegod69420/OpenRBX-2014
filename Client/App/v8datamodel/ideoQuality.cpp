#include "v8datamodel/ideoQuality.h"

#include "decomp.h"

namespace RBX {
namespace GameSettings {

// FUNCTION: ROBLOXSTUDIO 0x0080df40
void* ideoQuality::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace GameSettings
} // namespace RBX
