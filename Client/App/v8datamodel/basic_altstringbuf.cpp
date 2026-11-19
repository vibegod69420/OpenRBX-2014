#include "v8datamodel/basic_altstringbuf.h"

#include "decomp.h"

namespace std {

__declspec(dllimport) void __stdcall BasicAltStringBuf_Thunk_E10140_Import(basic_altstringbuf*);

// FUNCTION: ROBLOXSTUDIO 0x00cf4f70
void basic_altstringbuf::BasicAltStringBuf_Thunk_E10140()
{
	BasicAltStringBuf_Thunk_E10140_Import(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
