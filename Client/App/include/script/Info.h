#ifndef CLIENT_APP_INCLUDE_SCRIPT_INFO_H
#define CLIENT_APP_INCLUDE_SCRIPT_INFO_H

#include "decomp.h"

namespace RBX {
namespace ScriptService {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00ea8044
class Info
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; Info* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	static void destroyInstance(Info* p);
	// AUTO-GENERATED METHODS
};

} // namespace ScriptService
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_INFO_H
