#ifndef CLIENT_APP_INCLUDE_HUMANOID_RUNNINGBASE_H
#define CLIENT_APP_INCLUDE_HUMANOID_RUNNINGBASE_H

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// AUTO-GENERATED HELPERS

class RunningBase
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	float getSpeed();
	void fireStateEvents();
	// AUTO-GENERATED METHODS
};

} // namespace HUMAN
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_HUMANOID_RUNNINGBASE_H
