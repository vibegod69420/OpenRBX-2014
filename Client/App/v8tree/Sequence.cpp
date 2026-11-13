// FLAGS: /nologo /c /O2 /Ob2 /Oi /Ot /Oy /GS /EHsc /GR /Gy /fp:precise /arch:SSE /Zc:wchar_t /Zc:forScope

#include "Sequence.h"

extern "C" void targetSequence();

namespace RBX {
namespace Tasks {

// FUNCTION: ROBLOXSTUDIO 0x0053fc60
void Sequence::invoke(int) const
{
	targetSequence();
}

} // namespace Tasks
} // namespace RBX
