#include "v8datamodel/http_status_error.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00d02320
http_status_error::http_status_error()
{
	*(void**)this = ::operator new(0x38);
	*((unsigned char*)this + 4) = 0;
	*((int*)this + 2) = 0;
	*((int*)this + 3) = 0;
}

extern "C" __declspec(dllimport) void __stdcall HttpStatusError_Free1(int);
extern "C" __declspec(dllimport) void __stdcall HttpStatusError_Free2(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00d03370
void http_status_error::destroy()
{
	HttpStatusError_Free1(*((int*)this + 1));
	HttpStatusError_Free2(*(void**)this, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
