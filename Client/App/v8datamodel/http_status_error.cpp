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

// FUNCTION: ROBLOXSTUDIO 0x00cfdfc0
void __cdecl http_status_error::write16(unsigned int value)
{
	unsigned char* buf;
	int idx;

	idx = *(int*)((char*)this + 0x14);
	buf = *(unsigned char**)((char*)this + 8);
	buf[idx] = (unsigned char)(value >> 8);
	++*(int*)((char*)this + 0x14);

	idx = *(int*)((char*)this + 0x14);
	buf = *(unsigned char**)((char*)this + 8);
	buf[idx] = (unsigned char)value;
	++*(int*)((char*)this + 0x14);
}

extern "C" void __cdecl HttpStatusError_0x00cffe00(void*);
extern "C" void* __cdecl HttpStatusError_0x00cf67fe(void*, const void*, unsigned int);

// FUNCTION: ROBLOXSTUDIO 0x00cfdd50
void __cdecl http_status_error::transfer()
{
	char* self = (char*)this;
	char* buf = *(char**)(self + 0x1c);

	HttpStatusError_0x00cffe00(buf);

	unsigned int count = *(unsigned int*)(buf + 0x14);
	if (count > *(unsigned int*)(self + 0x10))
		count = *(unsigned int*)(self + 0x10);

	if (count != 0)
	{
		HttpStatusError_0x00cf67fe(*(void**)(self + 0x0c), *(void**)(buf + 0x10), count);
		*(unsigned int*)(self + 0x0c) += count;
		*(unsigned int*)(buf + 0x10) += count;
		*(unsigned int*)(self + 0x14) += count;
		*(unsigned int*)(self + 0x10) -= count;
		*(unsigned int*)(buf + 0x14) -= count;
		if (*(unsigned int*)(buf + 0x14) == 0)
			*(void**)(buf + 0x10) = *(void**)(buf + 8);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
