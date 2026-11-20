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

// FUNCTION: ROBLOXSTUDIO 0x00b5b980
Assembly* Assembly::getRootAssembly()
{
	void* const ownerData = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x28);
	void* const link = *reinterpret_cast<void**>(reinterpret_cast<char*>(ownerData) + 0x20);
	Assembly* answer;

	if (link != 0)
		answer = reinterpret_cast<Assembly*>(reinterpret_cast<char*>(link) - 8);
	else
		answer = 0;

	unsigned char flag = *reinterpret_cast<unsigned char*>(0x012DE657);
	if (flag)
	{
		if (answer == 0)
		{
			typedef bool (__cdecl *AssertHook)(const char*, const char*, int);
			AssertHook hook = *reinterpret_cast<AssertHook*>(0x012DE694);
			if (hook != 0)
			{
				if (hook("answer", "D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\v8world\\Assembly.cpp", 107))
					goto done;
				flag = *reinterpret_cast<unsigned char*>(0x012DE657);
			}
			AssemblyAssertFailure(flag, "answer file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\v8world\\Assembly.cpp line: 107");
		}
	}

done:
	return answer;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
