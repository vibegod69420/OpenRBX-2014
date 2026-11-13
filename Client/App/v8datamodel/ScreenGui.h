#pragma once

namespace RBX {

class ScreenGui
{
public:
	bool getField8D() const;

private:
	char _pad[0x8d];
	bool field8D;
};

} // namespace RBX
