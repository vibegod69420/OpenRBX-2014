#include "v8kernel/btGImpactShapeInterface.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0059ab00
int btGImpactShapeInterface::getConst25() const
{
	return 25;
}

// FUNCTION: ROBLOXSTUDIO 0x0059aaf0

void btGImpactShapeInterface::setFlag()
{
    // Set the 48th bit (0x30) to 1
    reinterpret_cast<unsigned char*>(this)[0x30] = 1;
}

// AUTO-GENERATED IMPLEMENTATIONS


