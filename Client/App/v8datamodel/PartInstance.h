#pragma once

namespace RBX {

class PartInstance
{
public:
	int getField70() const;

private:
	char _pad[0x70];
	int field70;
};

} // namespace RBX
