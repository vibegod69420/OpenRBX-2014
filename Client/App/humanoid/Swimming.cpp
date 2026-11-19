#include "humanoid/Swimming.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// FUNCTION: ROBLOXSTUDIO 0x00c17e70
void __cdecl Swimming::onEvent(int* event)
{
	if (event[0] == 12)
	{
		int data = event[2];
		if ((data & 0x100) == 0)
		{
			if (data >= *(unsigned char*)((char*)this + 0x32))
				--*(int*)((char*)this + 0x24);
		}
	}
}

void __cdecl sub_C18030(Swimming* self, int packed, int arg3);

// FUNCTION: ROBLOXSTUDIO 0x00c18100
void __cdecl Swimming::setState(int a, int b, int c)
{
	sub_C18030(this, ((c << 8) | b) << 6 | a, (*(int**)((char*)this + 0x0C))[2]);
}

// FUNCTION: ROBLOXSTUDIO 0x00c180d0
void __cdecl Swimming::setState(int a, int b, int c, int d)
{
	sub_C18030(this, (((c << 9) | d) << 8 | b) << 6 | a, (*(int**)((char*)this + 0x0C))[2]);
}

// FUNCTION: ROBLOXSTUDIO 0x00c17ff0
void __cdecl sub_BC88E0(void* arg0, const char* message);

void __cdecl Swimming::accumulate(int delta)
{
    void* obj = *(void**)this;
    int val = *(int*)((char*)this + 0x24);
    int limit = *(unsigned char*)((char*)obj + 0x4B);
    val += delta;

    if (val <= limit)
        return;

    if (val >= 250)
        sub_BC88E0(*(void**)((char*)this + 0x0C), "function or expression too complex");

    *(unsigned char*)((char*)*(void**)this + 0x4B) = (unsigned char)val;
}

void __cdecl sub_C17BA0(Swimming* self, int* event, int arg3);

// FUNCTION: ROBLOXSTUDIO 0x00c17b40
void __cdecl Swimming::accumulate(int* event)
{
	if (event[0] != 12)
	{
		void* obj = *(void**)this;
		int val = *(int*)((char*)this + 0x24);
		int limit = *(unsigned char*)((char*)obj + 0x4B);
		++val;

		if (val > limit)
		{
			if (val >= 250)
				sub_BC88E0(*(void**)((char*)this + 0x0C), "function or expression too complex");

			*(unsigned char*)((char*)*(void**)this + 0x4B) = (unsigned char)val;
		}

		++*(int*)((char*)this + 0x24);
		sub_C17BA0(this, event, *(int*)((char*)this + 0x24) - 1);
	}
}

void __cdecl sub_C18130(Swimming* self, int* result, int oldValue);

// FUNCTION: ROBLOXSTUDIO 0x00c179f0
int __cdecl Swimming::applyState(int a, int b, int c, int d)
{
	typedef int (__cdecl *SubC18030RetFn)(Swimming*, int, int);

	sub_C18030(this, (((c << 9) | d) << 8 | b) << 6 | a, (*(int**)((char*)this + 0x0C))[2]);

	int oldValue = *(int*)((char*)this + 0x20);
	*(int*)((char*)this + 0x20) = -1;

	int result = ((SubC18030RetFn)sub_C18030)(this, 0x7fff8016, (*(int**)((char*)this + 0x0C))[2]);
	sub_C18130(this, &result, oldValue);

	return result;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
