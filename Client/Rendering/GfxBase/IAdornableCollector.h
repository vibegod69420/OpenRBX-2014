#ifndef CLIENT_RENDERING_GFXBASE_IADORNABLECOLLECTOR_H
#define CLIENT_RENDERING_GFXBASE_IADORNABLECOLLECTOR_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class IAdornableCollector
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; IAdornableCollector* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void __cdecl dispatch(void* arg1, void* arg2);
	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_RENDERING_GFXBASE_IADORNABLECOLLECTOR_H
