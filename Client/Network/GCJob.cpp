#include "Network/GCJob.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00ce4570
int __cdecl GCJob::isHigherPriority(GCJob* b)
{
	return *((int*)this + 4) > *((int*)b + 4);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
