#include "v8datamodel/Seat.h"

#include "decomp.h"

namespace RBX {

class PartInstance
{
public:
	int getClassIndex();
};

// FUNCTION: ROBLOXSTUDIO 0x00892dd0
int Seat::getClassIndex()
{
	return ((PartInstance*)this)->getClassIndex() + 0x10;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
