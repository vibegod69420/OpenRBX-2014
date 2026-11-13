#pragma once

namespace RBX {
namespace Graphics {

// The two members bracket an 8-byte-stride array, which is why the count is a
// signed shift by 3 rather than a division.
class FastCluster
{
public:
	int getCount() const;

private:
	char _padA8[0xA8];
	char* begin;
	char* end;
};

} // namespace Graphics
} // namespace RBX
