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

// FUNCTION: ROBLOXSTUDIO 0x0090fff0
int Seat::isOccupied() const
{
    return *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x118) == 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
