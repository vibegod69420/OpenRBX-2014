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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
