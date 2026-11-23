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

int __cdecl sub_C17A50(int arg1, int* arg2, int* arg3);
int __cdecl sub_C18280(Swimming* self, int* event);

// FUNCTION: ROBLOXSTUDIO 0x00c17750
int __cdecl Swimming::processEvent(int arg1, int* arg2, int* arg3)
{
	int result = sub_C17A50(arg1, arg2, arg3);
	if (result)
		return result;

	int local;
	if (arg1 == 0x12 || arg1 == 0x14)
		local = 0;
	else
		local = sub_C18280(this, arg3);

	int val2 = sub_C18280(this, arg2);
	int data;

	if (val2 > local)
	{
		if (arg2[0] == 12)
		{
			data = arg2[2];
			if ((data & 0x100) == 0)
			{
				if (data >= *(unsigned char*)((char*)this + 0x32))
					--*(int*)((char*)this + 0x24);
			}
		}

		if (arg3[0] == 12)
		{
			data = arg3[2];
			goto check_data;
		}
	}
	else
	{
		if (arg3[0] == 12)
		{
			data = arg3[2];
			if ((data & 0x100) == 0)
			{
				if (data >= *(unsigned char*)((char*)this + 0x32))
					--*(int*)((char*)this + 0x24);
			}
		}

		if (arg2[0] == 12)
		{
			data = arg2[2];
			goto check_data;
		}
	}

	goto finish;

check_data:
	if ((data & 0x100) == 0)
	{
		if (data >= *(unsigned char*)((char*)this + 0x32))
			--*(int*)((char*)this + 0x24);
	}

finish:
	result = ((int(__cdecl*)(Swimming*, int, int))sub_C18030)(
		this,
		((val2 << 9) | local) << 14 | arg1,
		(*(int**)((char*)this + 0x0C))[2]);

	arg2[2] = result;
	arg2[0] = 11;
	return result;
}

// FUNCTION: ROBLOXSTUDIO 0x00c17ef0
int __cdecl Swimming::fireEvent(int* event, int arg3)
{
	if (event[0] == 11)
	{
		int val = (*(int**)((char*)*(void**)this + 0x0C))[event[2]];
		if ((val & 0x3F) == 0x13)
		{
			--*(int*)((char*)this + 0x18);
			return applyState(0x1A, (int)((unsigned int)val >> 0x17), 0, arg3 == 0);
		}
	}

	if (event[0] == 12)
		goto handle12;

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

	if (event[0] != 12)
		goto tail;

handle12:
	{
		int data = event[2];
		if ((data & 0x100) == 0)
		{
			if (data >= *(unsigned char*)((char*)this + 0x32))
				--*(int*)((char*)this + 0x24);
		}
	}

tail:
	sub_C18030(this, ((event[2] << 9 | arg3) << 14) | 0x3FDB, (*(int**)((char*)this + 0x0C))[2]);

	{
		int oldValue = *(int*)((char*)this + 0x20);
		*(int*)((char*)this + 0x20) = -1;

		typedef int (__cdecl *SubC18030RetFn)(Swimming*, int, int);
		int result = ((SubC18030RetFn)sub_C18030)(this, 0x7FFF8016, (*(int**)((char*)this + 0x0C))[2]);
		sub_C18130(this, &result, oldValue);

		return result;
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c17640
void __cdecl Swimming::initialize()
{
	*(int*)((char*)this + 0) = 0x61754C1B;
	*(int*)((char*)this + 4) = 0x04010051;
	*(int*)((char*)this + 8) = 0x00080404;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
