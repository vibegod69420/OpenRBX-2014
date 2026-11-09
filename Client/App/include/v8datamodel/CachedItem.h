#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CACHEDITEM_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CACHEDITEM_H

#include "decomp.h"

namespace RBX {
namespace CacheableContentProvider {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e9b574
class CachedItem
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; CachedItem* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace CacheableContentProvider
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CACHEDITEM_H
