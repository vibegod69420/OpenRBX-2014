#include "ParticleEmitter.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct ParticleEmitterSimManager;

struct ParticleEmitterSimOwner
{
	char pad[0x198];
	ParticleEmitterSimManager* simManager; // 0x198
};

class ParticleEmitterSimManager
{
public:
	void queueEmitter(ParticleEmitter* emitter); // 0x00681470
};

// FUNCTION: ROBLOXSTUDIO 0x0066e5c0
void ParticleEmitter::queueSimulation()
{
	if (*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0xF4) == 0)
	{
		*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0xF4) = 1;

		ParticleEmitterSimOwner* owner = *reinterpret_cast<ParticleEmitterSimOwner**>(
			reinterpret_cast<char*>(this) + 0x38);
		owner->simManager->queueEmitter(this);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
