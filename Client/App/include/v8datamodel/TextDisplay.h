#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_TEXTDISPLAY_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_TEXTDISPLAY_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e806d4
class TextDisplay
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0090[0x90]; int field_0090; };
		struct { char _pad_flag_00b8[0xb8]; bool flag_00b8; };
		// AUTO-GENERATED FIELDS
	};

	int getField90() const;
	bool getFlagB8() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_TEXTDISPLAY_H
