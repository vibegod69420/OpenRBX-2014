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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
