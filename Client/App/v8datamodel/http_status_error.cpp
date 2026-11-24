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

// FUNCTION: ROBLOXSTUDIO 0x00d00180
void __cdecl http_status_error::flush()
{
	int bits = *(int*)((char*)this + 0x16bc);
	if (bits > 8)
	{
		int idx = *(int*)((char*)this + 0x14);
		unsigned char byte0 = *(unsigned char*)((char*)this + 0x16b8);
		unsigned char* buf = *(unsigned char**)((char*)this + 8);
		buf[idx] = byte0;
		++*(int*)((char*)this + 0x14);

		idx = *(int*)((char*)this + 0x14);
		buf = *(unsigned char**)((char*)this + 8);
		unsigned char byte1 = *(unsigned char*)((char*)this + 0x16b9);
		buf[idx] = byte1;
		++*(int*)((char*)this + 0x14);
	}
	else if (bits > 0)
	{
		unsigned char* buf = *(unsigned char**)((char*)this + 8);
		int idx = *(int*)((char*)this + 0x14);
		buf[idx] = *(unsigned char*)((char*)this + 0x16b8);
		++*(int*)((char*)this + 0x14);
	}

	*(unsigned short*)((char*)this + 0x16b8) = 0;
	*(int*)((char*)this + 0x16bc) = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00d00940
int __cdecl http_status_error::check()
{
	unsigned int mask = 0xF3FFC07F;
	int i = 0;
	char* p = (char*)this + 0x94;

	do
	{
		if (mask & 1)
		{
			if (*(unsigned short*)p != 0)
				return 0;
		}
		++i;
		p += 4;
		mask >>= 1;
	} while (i <= 31);

	if (*(unsigned short*)((char*)this + 0xB8) != 0)
		return 1;
	if (*(unsigned short*)((char*)this + 0xBC) != 0)
		return 1;
	if (*(unsigned short*)((char*)this + 0xC8) != 0)
		return 1;

	{
		int j = 0x20;
		char* q = (char*)this + 0x114;

		do
		{
			if (*(unsigned short*)q != 0)
				return 1;
			++j;
			q += 4;
		} while (j < 0x100);
	}

	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00d008c0
void __cdecl http_status_error::copy_block(const unsigned char* buf, unsigned int len, int header)
{
	flush();

	if (header != 0)
	{
		unsigned char* out = *(unsigned char**)((char*)this + 8);
		int idx = *(int*)((char*)this + 0x14);
		out[idx] = (unsigned char)len;
		++*(int*)((char*)this + 0x14);

		idx = *(int*)((char*)this + 0x14);
		out = *(unsigned char**)((char*)this + 8);
		out[idx] = (unsigned char)(len >> 8);
		++*(int*)((char*)this + 0x14);

		idx = *(int*)((char*)this + 0x14);
		out = *(unsigned char**)((char*)this + 8);
		out[idx] = (unsigned char)(~len);
		++*(int*)((char*)this + 0x14);

		idx = *(int*)((char*)this + 0x14);
		out = *(unsigned char**)((char*)this + 8);
		out[idx] = (unsigned char)(~len >> 8);
		++*(int*)((char*)this + 0x14);
	}

	if (len != 0)
	{
		do
		{
			int idx = *(int*)((char*)this + 0x14);
			unsigned char* out = *(unsigned char**)((char*)this + 8);
			out[idx] = *buf;
			++buf;
			++*(int*)((char*)this + 0x14);
			--len;
		} while (len != 0);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
