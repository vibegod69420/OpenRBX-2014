#pragma once

namespace RBX {

// Slot 44 fills a four-int destination and ignores its trailing int argument.
class GuiObject
{
public:
	void zeroQuad(int* out, int) const;
};

} // namespace RBX
