#include "v8datamodel/Smoke.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a0a240
struct SmokeParticleCount {
    char _pad[0x18];
    unsigned int count;
};

int Smoke::hasParticles() const
{
    return 0u < reinterpret_cast<const SmokeParticleCount*>(this)->count;
}

// FUNCTION: ROBLOXSTUDIO 0x00a08e00
struct SmokeLocal
{
    int f0;
    unsigned char f4;
};

class SmokeEmitter
{
public:
    void emit(void* arg2, void* config, SmokeLocal* local);
};

void __cdecl sub_A0A250(void* arg1, SmokeLocal* local);

void __cdecl Smoke::sub_A08E00(void* arg1, void* arg2)
{
    SmokeLocal local;
    local.f0 = 0;
    local.f4 = 0;

    unsigned int index = *(unsigned char*)arg1 >> 6;
    void* config = (void*)(0x013067F8 + ((index << 4) - index) * 2);

    SmokeEmitter* emitter = *(SmokeEmitter**)((char*)this + 0x20);
    emitter->emit(arg2, config, &local);
    sub_A0A250(arg1, &local);
}

// FUNCTION: ROBLOXSTUDIO 0x00a08e50
struct SmokeInitData
{
	unsigned char flag;
	char pad[3];
	int contentRef;
	int field8;
	float opacity;
	int field10;
	int field14;
	int field18;
	int field1c;
	int field20;
	int field24;
};

Smoke* Smoke::sub_A08E50()
{
	extern char byte_F12E90;
	extern char byte_F12F28;
	void* __cdecl sub_403110(void* start, void* end, int* out, int value);

	SmokeInitData* self = (SmokeInitData*)this;
	int local;

	self->flag = 0;
	local = 11;

	void* result = sub_403110(&byte_F12E90, &byte_F12F28, &local, 0);
	if (result == &byte_F12F28)
		result = (char*)result - 4;

	self->contentRef = *(int*)result;
	self->field8 = 0;
	self->opacity = 1.0f;
	self->field10 = 0;
	self->field14 = 0;
	self->field18 = 0;
	self->field1c = 0;
	self->field20 = 0;
	self->field24 = 0;

	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
