#include "v8datamodel/CAudioStream.h"

#include "decomp.h"

namespace RBX {
namespace DS {

extern void __stdcall sub_CF6970(int, int, int, int);

// FUNCTION: ROBLOXSTUDIO 0x00427ac0
void CAudioStream::sub_427AC0()
{
	sub_CF6970(((int*)this)[20], ((int*)this)[21], 10000, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DS
} // namespace RBX
