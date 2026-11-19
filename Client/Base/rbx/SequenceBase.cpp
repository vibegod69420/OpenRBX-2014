#include "rbx/SequenceBase.h"

#include "decomp.h"

namespace RBX {
namespace Tasks {

void getWallTime(double* out);

// FUNCTION: ROBLOXSTUDIO 0x006c5910
double SequenceBase::getTime()
{
	double t;
	getWallTime(&t);
	return t;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Tasks
} // namespace RBX
