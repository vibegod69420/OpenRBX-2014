#pragma once

namespace RBX {
namespace Graphics {

// Slot 6 recomputes a float member from an int inside the object referenced at
// +0x1c; only the members the body touches are laid out.
class AdornRender
{
public:
	void updateField28();
	void* getField24Ptr() const;

private:
	char _pad1C[0x1C];
	void* field1C;
	char _pad20[0x28 - 0x20];
	float field28;
};

} // namespace Graphics
} // namespace RBX
