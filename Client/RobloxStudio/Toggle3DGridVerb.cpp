#include "Toggle3DGridVerb.h"

extern "C" int targetGridEnabled(void*);

// FUNCTION: ROBLOXSTUDIO 0x005241c0
bool Toggle3DGridVerb::isDisabled() const
{
	return targetGridEnabled(field0C) == 0;
}
