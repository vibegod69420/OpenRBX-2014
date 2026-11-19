#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_SOUNDID_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_SOUNDID_H

#include "decomp.h"

namespace RBX {
namespace Soundscape {

// AUTO-GENERATED HELPERS

class SoundId
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_00b8[0xb8]; int field_00b8; };
		// AUTO-GENERATED FIELDS
	};

	void sub_991D40();
	int getFieldB8() const;
	// AUTO-GENERATED METHODS
};

} // namespace Soundscape
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SOUNDID_H
