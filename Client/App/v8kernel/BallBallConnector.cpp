#include "v8kernel/BallBallConnector.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b4ebf0
int BallBallConnector::getConst30() const
{
	return 30;
}

// FUNCTION: ROBLOXSTUDIO 0x00b4ec80
int BallBallConnector::getKernelSteps() const
{
	return (*(unsigned char*)0x0130EBE4 == 0) * 4 + 4;
}

// FUNCTION: ROBLOXSTUDIO 0x00b4ebd0
int BallBallConnector::getConst19() const
{
	return 19;
}

// FUNCTION: ROBLOXSTUDIO 0x00b4eb50
int BallBallConnector::getConst400() const
{
	return 400;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
