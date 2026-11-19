#include "GeometryD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x005e56e0
void GeometryD3D9::release()
{
	void** self = (void**)this;
	void* data = self[0];
	if (data)
	{
		::operator delete(data);
		self[0] = 0;
		self[1] = 0;
		self[2] = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
