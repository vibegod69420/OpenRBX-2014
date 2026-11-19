#include "ContextGL.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00605980
void ContextGL::assignIfNull(int* dst, const int* src)
{
	if (*dst == 0) {
		int v = *src;
		if (v != 0)
			*dst = v;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
