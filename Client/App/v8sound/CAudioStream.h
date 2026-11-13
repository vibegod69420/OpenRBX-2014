#pragma once

namespace RBX {
namespace DS {

// Slot 4 of the stream interface returns the int at +0x30; CSourceStream shares
// the folded body.
class CAudioStream
{
public:
	int getField30() const;

private:
	char _pad[0x30];
	int field30;
};

} // namespace DS
} // namespace RBX
