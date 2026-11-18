#include "v8world/BlockCorners.h"

#include "decomp.h"

namespace RBX {
namespace POLY {

void blockCornersDisposeHelper(void* token, void* arg);
void blockCornersFree(void* ptr);

// FUNCTION: ROBLOXSTUDIO 0x00b9b6c0
void BlockCorners::dispose()
{
	void* token = *(void**)((char*)this + 0x0C);
	if (token)
	{
		blockCornersDisposeHelper(token, *(void**)((char*)token + 0x0C));
		blockCornersFree(token);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace POLY
} // namespace RBX
