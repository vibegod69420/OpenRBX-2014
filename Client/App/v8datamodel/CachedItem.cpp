#include "v8datamodel/CachedItem.h"

#include "decomp.h"

namespace RBX {
namespace CacheableContentProvider {

// FUNCTION: ROBLOXSTUDIO 0x009ff6f0
void CachedItem::destroySubPtr0C()
{
	CachedItem* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace CacheableContentProvider
} // namespace RBX
