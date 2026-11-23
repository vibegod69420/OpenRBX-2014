#include "v8datamodel/KeyframeSequence.h"

#include "decomp.h"

namespace RBX {

class KeyframeSequenceLengthHelper
{
public:
	void compute();
};

// FUNCTION: ROBLOXSTUDIO 0x00920370
float KeyframeSequence::getLength()
{
	if (*(unsigned char*)((char*)this + 0x64) == 0)
		((KeyframeSequenceLengthHelper*)this)->compute();

	return *(float*)((char*)this + 0x68);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
