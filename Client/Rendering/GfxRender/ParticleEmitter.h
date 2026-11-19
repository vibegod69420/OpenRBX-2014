#ifndef CLIENT_RENDERING_GFXRENDER_PARTICLEEMITTER_H
#define CLIENT_RENDERING_GFXRENDER_PARTICLEEMITTER_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

class ParticleEmitter
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void queueSimulation();
	void onDestroy();
	static void destroyInstance(ParticleEmitter* p);
	ParticleEmitter*fastDynamicCast();
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_PARTICLEEMITTER_H
