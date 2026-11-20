#include "v8datamodel/stream_buffer.h"

#include "decomp.h"

namespace std {

// FUNCTION: ROBLOXSTUDIO 0x00c81470
bool stream_buffer::getFlag58() const
{
	return flag_0058;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da00
int stream_buffer::getConst19190364() const
{
	return 19190364;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da10
int stream_buffer::getConst19190288() const
{
	return 19190288;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da20
int stream_buffer::getConst19190392() const
{
	return 19190392;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da30
int stream_buffer::getConst19190592() const
{
	return 19190592;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da40
int stream_buffer::getConst19190512() const
{
	return 19190512;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da50
int stream_buffer::getConst19190472() const
{
	return 19190472;
}

// FUNCTION: ROBLOXSTUDIO 0x00a320c0
int stream_buffer::getConst19196136() const
{
	return 19196136;
}

// FUNCTION: ROBLOXSTUDIO 0x00c81bb0
int stream_buffer::getConst19553048() const
{
	return 19553048;
}

// FUNCTION: ROBLOXSTUDIO 0x00c81bc0
int stream_buffer::getConst19554176() const
{
	return 19554176;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d210
bool stream_buffer::getFlag60Bit2() const
{
	return ((*(const unsigned int*)((const char*)this + 0x60)) >> 2) & 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d220
bool stream_buffer::getFlag68Bit2() const
{
	return ((*(const unsigned int*)((const char*)this + 0x68)) >> 2) & 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d1f0
bool stream_buffer::getFlagA0Bit2() const
{
	return ((*(const unsigned int*)((const char*)this + 0xa0)) >> 2) & 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d200
bool stream_buffer::getFlagF0Bit2() const
{
	return ((*(const unsigned int*)((const char*)this + 0xf0)) >> 2) & 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2f000
extern "C" __declspec(dllimport) void __stdcall stream_buffer_iat_e102e8(void*, void*, void*);

void stream_buffer::vslot22()
{
	void* p = *(void**)((char*)this + 0x88);
	stream_buffer_iat_e102e8(p, p, p);
}

// FUNCTION: ROBLOXSTUDIO 0x00a2f010
void stream_buffer::vslot22_d8()
{
	void* p = *(void**)((char*)this + 0xd8);
	stream_buffer_iat_e102e8(p, p, p);
}

// FUNCTION: ROBLOXSTUDIO 0x00a2f020
void stream_buffer::vslot22_50()
{
	void* p = *(void**)((char*)this + 0x50);
	stream_buffer_iat_e102e8(p, p, p);
}

// FUNCTION: ROBLOXSTUDIO 0x00a33490
void stream_buffer::vslot22_48()
{
	void* p = *(void**)((char*)this + 0x48);
	stream_buffer_iat_e102e8(p, p, p);
}

// FUNCTION: ROBLOXSTUDIO 0x00c862e0
int stream_buffer::getField2198() const
{
	return field_2198;
}

// FUNCTION: ROBLOXSTUDIO 0x00c86400
void stream_buffer::syncState()
{
	char* v50 = *(char**)((char*)this + 0x50);
	char* v54 = *(char**)((char*)this + 0x54);

	**(char***)((char*)this + 0x10) = v50;
	**(char***)((char*)this + 0x20) = v50;
	**(int**)((char*)this + 0x30) = v54 - v50;

	char* v48 = *(char**)((char*)this + 0x48);
	if (!v48)
		return;

	char* v50b = *(char**)((char*)this + 0x50);
	if (!v50b)
		return;

	if (v48 != v50b)
		return;

	char* v1c = **(char***)((char*)this + 0x1c);
	if (!v1c)
		return;

	int delta = v1c - v48;
	**(int**)((char*)this + 0x30) -= delta;
	**(char***)((char*)this + 0x20) += delta;

	**(int**)((char*)this + 0x0c) = 0;
	**(char***)((char*)this + 0x1c) = 0;
	**(int**)((char*)this + 0x2c) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
