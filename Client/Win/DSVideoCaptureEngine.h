#ifndef CLIENT_WIN_DSVIDEOCAPTUREENGINE_H
#define CLIENT_WIN_DSVIDEOCAPTUREENGINE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class DSVideoCaptureEngine
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_member_0044[0x44]; int member_0044; };
		// AUTO-GENERATED FIELDS
	};

	const int* getMemberPtr44() const;
	int getElapsedTime();
	int getState();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_WIN_DSVIDEOCAPTUREENGINE_H
