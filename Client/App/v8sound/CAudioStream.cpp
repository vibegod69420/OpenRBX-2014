#include "CAudioStream.h"

namespace RBX {
namespace DS {

// FUNCTION: ROBLOXSTUDIO 0x006b1400
int CAudioStream::getField30() const
{
	return field30;
}

// 0x00427aa0 returns E_NOTIMPL for the three-argument stream method.
// FUNCTION: ROBLOXSTUDIO 0x00427aa0
int CAudioStream::notImplemented3(int, int, int) const
{
	return (int)0x80004001u;
}

// FUNCTION: ROBLOXSTUDIO 0x00427ab0
int CAudioStream::unimplemented1(int) const
{
	return (int)0x8000ffffu;
}

} // namespace DS
} // namespace RBX
