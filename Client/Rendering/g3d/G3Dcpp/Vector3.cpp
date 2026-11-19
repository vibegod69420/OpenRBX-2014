#include "G3D/Vector3.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x007b3ff0
struct Vector3Callee7B5910
{
	void call(bool* flag, void** slot);
};

void Vector3::sub_007B3FF0()
{
	bool flag = true;
	void** slot = reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x48);
	Vector3Callee7B5910* target =
		reinterpret_cast<Vector3Callee7B5910*>(reinterpret_cast<char*>(*slot) + 0x18);
	target->call(&flag, slot);
}

// FUNCTION: ROBLOXSTUDIO 0x007b4090
extern "C" long _InterlockedExchangeAdd(long volatile* Addend, long Value);
extern "C" unsigned char _interlockedbittestandset(long volatile* Base, long Offset);
#pragma intrinsic(_InterlockedExchangeAdd, _interlockedbittestandset)

struct Vector3_AllocatorState_007B4090
{
	volatile long lockState;
	void* unk4;
	void* head;

	void sub_0040ED30();
	void* sub_0040FB10();
};

struct Vector3_HeadSlot_007B4090
{
	void* sub_0048AF30();
};

Vector3_AllocatorState_007B4090* sub_0055A310();
extern void (__stdcall* sub_00E10198)(void*);

void* Vector3::sub_007B4090()
{
	Vector3_AllocatorState_007B4090* state = sub_0055A310();
	state->sub_0040ED30();

	void* node = state->head;
	if (node)
	{
		state->head = *(void**)node;
	}
	else
	{
		node = reinterpret_cast<Vector3_HeadSlot_007B4090*>(&state->head)->sub_0048AF30();
	}

	long old = _InterlockedExchangeAdd(&state->lockState, (long)0x80000000);
	if ((old & 0x40000000) == 0)
	{
		if ((long)old > (long)0x80000000)
		{
			if (_interlockedbittestandset(&state->lockState, 30) == 0)
			{
				sub_00E10198(state->sub_0040FB10());
			}
		}
	}

	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
