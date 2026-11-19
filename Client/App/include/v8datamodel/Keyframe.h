#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_KEYFRAME_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_KEYFRAME_H

#include "decomp.h"

namespace RBX {

#ifndef NULL
#define NULL 0
#endif
// AUTO-GENERATED HELPERS

class Keyframe
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void notifyKeyframeSequence();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_KEYFRAME_H
