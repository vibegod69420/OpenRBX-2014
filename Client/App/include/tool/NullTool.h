#ifndef CLIENT_APP_INCLUDE_TOOL_NULLTOOL_H
#define CLIENT_APP_INCLUDE_TOOL_NULLTOOL_H

#include "decomp.h"

namespace RBX {

#ifndef NULL
#define NULL 0
#endif
// AUTO-GENERATED HELPERS

class NullTool
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	bool isChecked();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_TOOL_NULLTOOL_H
