#include "v8datamodel/filtering_stream.h"

#include "decomp.h"

namespace std {

class filtering_stream_buffer
{
public:
	char _pad[0x40];
	unsigned char active; // 0x40

	void clear(); // 0xa2bde0
};

// FUNCTION: ROBLOXSTUDIO 0x00a2cb70
void filtering_stream::reset()
{
	filtering_stream_buffer* buffer = (filtering_stream_buffer*)_vtable_or_head;
	if (buffer->active)
	{
		buffer->clear();
		buffer->active = 0;
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a2cb30
struct filtering_stream_buffer_iface
{
    virtual void _v0() {}
    virtual void _v1() {}
    virtual void _v2() {}
    virtual void _v3() {}
    virtual void _v4() {}
    virtual void _v5() {}
    virtual void _v6() {}
    virtual void _v7() {}
    virtual void _v8() {}
    virtual void _v9() {}
    virtual void _v10() {}
    virtual void _v11() {}
    virtual void _v12() {}
    virtual void _v13() {}
    virtual void _v14() {}
    virtual void _v15() {}
    virtual void _call(int) {}
};

void filtering_stream::sync()
{
    int mode = reinterpret_cast<const int*>(this)[1];
    filtering_stream_buffer* buffer = reinterpret_cast<filtering_stream_buffer*>(_vtable_or_head);

    if (mode == 1)
    {
        int state = *reinterpret_cast<int*>(reinterpret_cast<char*>(buffer) + 0x38);
        if (!(state & 2))
        {
            *reinterpret_cast<int*>(reinterpret_cast<char*>(buffer) + 0x38) = state | 2;
            reinterpret_cast<filtering_stream_buffer_iface*>(buffer)->_call(1);
        }
    }
    else if (mode == 2)
    {
        int state = *reinterpret_cast<int*>(reinterpret_cast<char*>(buffer) + 0x38);
        if (!(state & 4))
        {
            *reinterpret_cast<int*>(reinterpret_cast<char*>(buffer) + 0x38) = state | 4;
            reinterpret_cast<filtering_stream_buffer_iface*>(buffer)->_call(2);
        }
    }
}

void* __stdcall sub_953940(int, int);

// FUNCTION: ROBLOXSTUDIO 0x00a2b9b0
filtering_stream::filtering_stream()
{
	reinterpret_cast<int*>(this)[0] = 0;
	reinterpret_cast<int*>(this)[1] = 0;
	reinterpret_cast<int*>(this)[0] = reinterpret_cast<int>(sub_953940(0, 0));
	reinterpret_cast<int*>(this)[2] = 0;
	reinterpret_cast<int*>(this)[4] = 0x1000;
	reinterpret_cast<int*>(this)[5] = 0;
	reinterpret_cast<int*>(this)[6] = 0x80;
	reinterpret_cast<int*>(this)[7] = 0;
	reinterpret_cast<int*>(this)[8] = 4;
	reinterpret_cast<int*>(this)[9] = 0;
	reinterpret_cast<int*>(this)[10] = 4;
}

__declspec(dllimport) void __cdecl rbxi_fs_ctor_0xe1031c();

// FUNCTION: ROBLOXSTUDIO 0x00a2b610
filtering_stream* filtering_stream::sub_a2b610()
{
	rbxi_fs_ctor_0xe1031c();

	*(int*)((char*)this + 0x38) = 0;
	*(int*)this = 0x00EA622C;
	*((unsigned char*)this + 0xC8) = 0;
	*(int*)((char*)this + 0xD0) = 0;
	*(int*)((char*)this + 0xD8) = 0;
	*(int*)((char*)this + 0xE0) = 0;
	*(int*)((char*)this + 0xE4) = 0;
	*(int*)((char*)this + 0xE8) = 0;
	*(int*)((char*)this + 0xEC) = 0;
	*(int*)((char*)this + 0xF0) = 4;

	return this;
}

struct filtering_stream_buffer_88
{
	char _pad[0x88];
	unsigned char flag; // 0x88

	void sub_a2be60(); // 0xa2be60
};

// FUNCTION: ROBLOXSTUDIO 0x00a2cb90
void filtering_stream::sub_a2cb90()
{
	filtering_stream_buffer_88* buffer = (filtering_stream_buffer_88*)_vtable_or_head;
	if (buffer->flag)
	{
		buffer->sub_a2be60();
		buffer->flag = 0;
	}
}

__declspec(dllimport) void __cdecl rbxi_fs_ctor_0xe1031c();

// FUNCTION: ROBLOXSTUDIO 0x00a2b5a0
filtering_stream* filtering_stream::sub_a2b5a0()
{
	rbxi_fs_ctor_0xe1031c();

	*(int*)((char*)this + 0x38) = 0;
	*(int*)this = 0x00EA60F4;
	*((unsigned char*)this + 0x7c) = 0;
	*(int*)((char*)this + 0x80) = 0;
	*(int*)((char*)this + 0x88) = 0;
	*(int*)((char*)this + 0x90) = 0;
	*(int*)((char*)this + 0x94) = 0;
	*(int*)((char*)this + 0x98) = 0;
	*(int*)((char*)this + 0x9c) = 0;
	*(int*)((char*)this + 0xa0) = 4;

	return this;
}

class filtering_stream_a2a4f0
{
public:
	void sub_a2a4f0(int);
};

// FUNCTION: ROBLOXSTUDIO 0x00a29d30
filtering_stream* __cdecl filtering_stream::sub_a29d30(int mode)
{
	volatile int local = 0;
	((filtering_stream_a2a4f0*)this)->sub_a2a4f0(mode);
	return this;
}

class filtering_stream_a2a5a0
{
public:
	void sub_a2a5a0(int);
};

// FUNCTION: ROBLOXSTUDIO 0x00a29d50
filtering_stream* __cdecl filtering_stream::sub_a29d50(int mode)
{
	volatile int local = 0;
	((filtering_stream_a2a5a0*)this)->sub_a2a5a0(mode);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
