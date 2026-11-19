#include "rbx/Sequence.h"

#include "decomp.h"

namespace RBX {
namespace Tasks {

struct SequenceDisposer
{
	void __thiscall destroy(void* p);
};

// FUNCTION: ROBLOXSTUDIO 0x00546090
void Sequence::dispose()
{
	SequenceDisposer* p = reinterpret_cast<SequenceDisposer**>(this)[3];
	if (p)
	{
		p->destroy(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Tasks
} // namespace RBX
