#ifndef CLIENT_RENDERING_GFXBASE_IADORNABLECOLLECTOR_H
#define CLIENT_RENDERING_GFXBASE_IADORNABLECOLLECTOR_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e77b00
class IAdornableCollector
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; IAdornableCollector* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_RENDERING_GFXBASE_IADORNABLECOLLECTOR_H
