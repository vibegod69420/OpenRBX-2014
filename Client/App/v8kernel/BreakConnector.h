#pragma once

namespace RBX {

// Slot 5 of NormalBreakConnector and PointToPointBreakConnector reads the byte
// at +0x28; the two classes share the folded body.
class NormalBreakConnector
{
public:
	bool getField28() const;

private:
	char _pad[0x28];
	bool field28;
};

} // namespace RBX
