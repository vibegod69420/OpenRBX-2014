#include "v8datamodel/concrete_parser.h"

#include "decomp.h"

namespace std {

// FUNCTION: ROBLOXSTUDIO 0x00786180
void* concrete_parser::clone() const
{
	void* mem = ::operator new(0x10);
	if (mem)
	{
		((int*)mem)[0] = 0x00E4FA9C;
		((int*)mem)[1] = ((const int*)this)[1];
		((int*)mem)[2] = ((const int*)this)[2];
		((int*)mem)[3] = ((const int*)this)[3];
		return mem;
	}
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
