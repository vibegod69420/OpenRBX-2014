#pragma once

namespace RBX {
namespace Graphics {

class DeviceContextGL
{
public:
	void setField14(int value);

private:
	char _pad[0x14];
	int field14;
};

} // namespace Graphics
} // namespace RBX
