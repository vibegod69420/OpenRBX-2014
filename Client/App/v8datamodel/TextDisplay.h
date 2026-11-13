#pragma once

namespace RBX {

class TextDisplay
{
public:
	int getField90() const;

private:
	char _pad[0x90];
	int field90;
};

} // namespace RBX
