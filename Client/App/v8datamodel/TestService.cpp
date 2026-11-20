#include "v8datamodel/TestService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a7dbe0
class TestServiceRunHelper {
public:
	void prepare();
};

class RunServiceBridge {
public:
	void setRunMode(int mode);
};

class PhysicsSettingsBridge {
public:
	void setThrottleAdjustTime(int value);
	void setIsThrottled(unsigned char value);
	void setAllowSleep(unsigned char value);
};

class SignalBridge {
public:
	void fire();
};

RunServiceBridge* findRunServiceBridge(TestService* service);
PhysicsSettingsBridge* getPhysicsSettings();
void fireTestServiceSignal(void* signal);

void TestService::run()
{
	((TestServiceRunHelper*)this)->prepare();

	if (*(unsigned char*)((char*)this + 0xA0) == 0)
	{
		RunServiceBridge* runService = findRunServiceBridge(this);
		if (runService)
			runService->setRunMode(2);
	}

	*(unsigned char*)0x012DE657 = *(unsigned char*)((char*)this + 0xAA);

	PhysicsSettingsBridge* settings = getPhysicsSettings();
	settings->setThrottleAdjustTime(*(int*)((char*)this + 0xA4));
	settings->setIsThrottled(*(unsigned char*)((char*)this + 0xA8));
	settings->setAllowSleep(*(unsigned char*)((char*)this + 0xA9));

	if (*(int*)((char*)this + 0x68))
		((SignalBridge*)((char*)this + 0x68))->fire();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
