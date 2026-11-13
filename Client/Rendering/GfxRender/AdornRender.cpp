#include "AdornRender.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00611750
void AdornRender::updateField28()
{
	field28 = (float)*(int*)((char*)field1C + 0x180);
}

// FUNCTION: ROBLOXSTUDIO 0x00613570
void* AdornRender::getField24Ptr() const
{
	return (void*)((char*)this + 0x24);
}

} // namespace Graphics
} // namespace RBX
