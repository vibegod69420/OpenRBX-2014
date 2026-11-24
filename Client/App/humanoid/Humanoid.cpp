#include "humanoid/Humanoid.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009dae60
void Humanoid::setFlag0x31()
{
	reinterpret_cast<unsigned char*>(this)[0x31] = 1;
}

// FUNCTION: ROBLOXSTUDIO 0x009d91d0
int Humanoid::getInt148() const
{
	return *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x148) != 0;
}

struct HumanoidThunk
{
	void (__thiscall *func)(void*, void*);
	int offset;
	char* target;
};

// FUNCTION: ROBLOXSTUDIO 0x007bcdc0
void __cdecl Humanoid::dispatch(int arg)
{
	HumanoidThunk* thunk = reinterpret_cast<HumanoidThunk*>(this);
	thunk->func(thunk->target + thunk->offset, &arg);
}

// FUNCTION: ROBLOXSTUDIO 0x009d9120
float Humanoid::getUnknown200Float()
{
	void* p = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x200);
	if (p)
	{
		typedef float (__thiscall *VFunc)(void*);
		VFunc* vtable = *reinterpret_cast<VFunc**>(p);
		return vtable[12](p);
	}

	int value = 0;
	return *reinterpret_cast<float*>(&value);
}

// FUNCTION: ROBLOXSTUDIO 0x009d86b0
int Humanoid::getField270() const
{
	return field_0270;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8730
int Humanoid::getField280() const
{
	return field_0280;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8740
int Humanoid::getField290() const
{
	return field_0290;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ac0
int Humanoid::getField278() const
{
	return field_0278;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ad0
int Humanoid::getField288() const
{
	return field_0288;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ef0
int Humanoid::getField268() const
{
	return field_0268;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ed0
int Humanoid::getField268Or298()
{
	int v = field_0268;
	if (v != 0)
		return v;
	return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x298);
}

// FUNCTION: ROBLOXSTUDIO 0x009d86d0
int Humanoid::getField270DerefE0() const
{
	int obj = field_0270;
	if (obj)
		return *reinterpret_cast<int*>(reinterpret_cast<char*>(obj) + 0xE0);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8f50
int Humanoid::getField2A0DerefE0() const
{
	int obj = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x2A0);
	if (obj)
		return *reinterpret_cast<int*>(reinterpret_cast<char*>(obj) + 0xE0);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x009d90c0
int Humanoid::getField298() const
{
	return field_0298;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8f70
int Humanoid::getField268Or298DerefE0() const
{
	int obj = field_0268;
	if (!obj)
	{
		obj = field_0298;
		if (!obj)
			return 0;
	}
	return *reinterpret_cast<int*>(reinterpret_cast<char*>(obj) + 0xE0);
}

struct HumanoidSignalTarget
{
	void signal(unsigned char* flag, void* context);
};

// FUNCTION: ROBLOXSTUDIO 0x007b6760
void Humanoid::func007b6760()
{
	unsigned char flag;
	void* context = reinterpret_cast<char*>(this) + 0x48;
	HumanoidSignalTarget* target = reinterpret_cast<HumanoidSignalTarget*>(
		reinterpret_cast<char*>(*reinterpret_cast<void**>(context)) + 0x18);
	flag = 0;
	target->signal(&flag, context);
}

extern "C" void* __cdecl __RTDynamicCast(void* ptr, long vfDelta, void* srcType, void* destType, int isReference);

struct HumanoidDynamicCastTarget
{
	bool check();
};

// FUNCTION: ROBLOXSTUDIO 0x007bce10
bool Humanoid::func007bce10()
{
	void* result = __RTDynamicCast(
		*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x1A4),
		0,
		reinterpret_cast<void*>(0x012BDBF4),
		reinterpret_cast<void*>(0x011ECE78),
		0);

	if (result)
		return reinterpret_cast<HumanoidDynamicCastTarget*>(result)->check();

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x009d86f0
float Humanoid::getField200XorFloat()
{
	void* ptr = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x200);
	int value = *reinterpret_cast<int*>(ptr) ^ reinterpret_cast<int>(ptr);
	return *reinterpret_cast<float*>(&value);
}

// FUNCTION: ROBLOXSTUDIO 0x009d8820
float Humanoid::getField204XorFloat()
{
	void* ptr = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x204);
	int value = *reinterpret_cast<int*>(ptr) ^ reinterpret_cast<int>(ptr);
	return *reinterpret_cast<float*>(&value);
}

// FUNCTION: ROBLOXSTUDIO 0x009d90e0
float Humanoid::getField1F8XorFloat()
{
	void* ptr = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x1F8);
	int value = *reinterpret_cast<int*>(ptr) ^ reinterpret_cast<int>(ptr);
	return *reinterpret_cast<float*>(&value);
}

int __cdecl sub_99CF10(int, int, int);

// FUNCTION: ROBLOXSTUDIO 0x009d8860
int Humanoid::func009d8860()
{
	int v270 = field_0270;
	int v298 = field_0298;

	if (v270 && v298)
	{
		*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x265) = 1;
		return sub_99CF10(
			*reinterpret_cast<int*>(reinterpret_cast<char*>(v270) + 0xE0),
			*reinterpret_cast<int*>(reinterpret_cast<char*>(v298) + 0xE0),
			0);
	}

	return 0;
}

void* __cdecl sub_532170();

struct HumanoidCheckNode
{
	bool check(void* context);
};

// FUNCTION: ROBLOXSTUDIO 0x009d8360
void* __cdecl Humanoid::func009d8360()
{
	char* self = reinterpret_cast<char*>(this);
	if (self)
	{
		void* obj = *reinterpret_cast<void**>(self + 0x38);
		if (obj)
		{
			char* p = reinterpret_cast<char*>(obj) + 0x1c;
			if (p)
			{
				HumanoidCheckNode* node = *reinterpret_cast<HumanoidCheckNode**>(p + 0x0c);
				if (node->check(sub_532170()))
				{
					char* result = p - 0x1c;
					if (result)
						return result;
				}
			}
		}
	}
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
