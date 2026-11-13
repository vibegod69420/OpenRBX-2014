#pragma once

namespace RBX {
namespace Graphics {

class DeviceContextD3D9
{
public:
	void setField10(int value);

private:
	char _pad[0x10];
	int field10;
};

} // namespace Graphics
} // namespace RBX
