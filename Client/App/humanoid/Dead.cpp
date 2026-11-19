#include "humanoid/Dead.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

struct DeadStorage
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	DeadStorage()
	{
		x = 0x58635fa9u;
		y = 0x58635fa9u;
		z = 0x58635fa9u;
	}
};

// FUNCTION: ROBLOXSTUDIO 0x00bbad80
DeadStorage* Dead::get()
{
	static DeadStorage storage;
	return &storage;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
