#pragma once

namespace RBX {
namespace Graphics {

// The slot fills a three-int destination and takes three trailing int arguments
// that it ignores (visible only in the 0x10-byte stack cleanup).
class TextureGL
{
public:
	void zeroTriple(int* out, int, int, int) const;
};

} // namespace Graphics
} // namespace RBX
