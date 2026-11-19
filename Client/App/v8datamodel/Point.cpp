#include "v8datamodel/Point.h"

#include "decomp.h"

namespace RBX {

class PointUpdateTarget
{
public:
	void onUpdate(void* arg1, void* arg2);
};

// FUNCTION: ROBLOXSTUDIO 0x00c02b40
void Point::update()
{
	char* p = *(char**)((char*)this + 0x0c);
	p = *(char**)(p + 0x28);
	PointUpdateTarget* target = *(PointUpdateTarget**)(p + 0x30);
	if (target)
		target->onUpdate((char*)this + 0x28, (char*)this + 0x1c);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
