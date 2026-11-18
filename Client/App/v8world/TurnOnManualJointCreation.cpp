#include "v8world/TurnOnManualJointCreation.h"

#include "decomp.h"

namespace RBX {

extern unsigned char g_manualJointCreationFlag_011EDC12;
extern unsigned char g_manualJointCreationFlag_011EDC13;

// FUNCTION: ROBLOXSTUDIO 0x0082e5f0
bool TurnOnManualJointCreation::shouldTurnOn()
{
	return g_manualJointCreationFlag_011EDC12 && g_manualJointCreationFlag_011EDC13;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
