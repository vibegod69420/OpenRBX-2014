#include "v8world/Assembly.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b5c020
void Assembly::setSleepEligible()
{
	reinterpret_cast<unsigned char*>(this)[0x74] = 1;
}

class IStage
{
public:
	virtual ~IStage();
	virtual int getStageType();
};

struct AssemblyStageHelper
{
	void putInStage(IStage* stage);
};

void __cdecl AssemblyAssertFailure(int enabled, const char* message);

// FUNCTION: ROBLOXSTUDIO 0x00b8c490
void Assembly::putInKernel()
{
	typedef bool (__cdecl *AssertHook)(const char*, const char*, int);

	if (*(unsigned char*)0x012DE657)
	{
		if (*reinterpret_cast<IStage**>(reinterpret_cast<char*>(this) + 4) == 0)
		{
			AssertHook hook = *(AssertHook*)0x012DE694;
			if (hook == 0 || hook("currentStage", "D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\V8World\\IPipelined.cpp", 24) == 0)
			{
				AssemblyAssertFailure(*(unsigned char*)0x012DE657,
					"currentStage file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\V8World\\IPipelined.cpp line: 24");
			}
		}

		if (*(unsigned char*)0x012DE657)
		{
			IStage* stage = *reinterpret_cast<IStage**>(reinterpret_cast<char*>(this) + 4);
			if (stage->getStageType() != 15)
			{
				AssertHook hook = *(AssertHook*)0x012DE694;
				if (hook == 0 || hook("currentStage->getStageType() == IStage::KERNEL_STAGE",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\V8World\\IPipelined.cpp", 25) == 0)
				{
					AssemblyAssertFailure(*(unsigned char*)0x012DE657,
						"currentStage->getStageType() == IStage::KERNEL_STAGE file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\V8World\\IPipelined.cpp line: 25");
				}
			}
		}
	}

	((AssemblyStageHelper*)this)->putInStage(*reinterpret_cast<IStage**>(reinterpret_cast<char*>(this) + 4));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
