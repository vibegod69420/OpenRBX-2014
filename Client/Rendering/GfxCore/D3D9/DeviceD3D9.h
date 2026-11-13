#pragma once

namespace RBX {
namespace Graphics {

class DeviceD3D9
{
public:
	int getField40() const;
	void* getField1CPtr() const;

private:
	char _pad[0x40];
	int field40;
};

} // namespace Graphics
} // namespace RBX
