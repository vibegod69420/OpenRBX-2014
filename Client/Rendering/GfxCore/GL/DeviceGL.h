#pragma once

namespace RBX {
namespace Graphics {

class DeviceGL
{
public:
	int getField34() const;
	void* getField0CPtr() const;

private:
	char _pad[0x34];
	int field34;
};

} // namespace Graphics
} // namespace RBX
