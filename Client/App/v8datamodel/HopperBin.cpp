#include "v8datamodel/HopperBin.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00928940
bool HopperBin::getFlag190() const
{
	return flag_0190;
}

namespace {

struct HopperBinMember1B0
{
	void disconnect();
};

struct HopperBinThisCall
{
	void raisePropertyChanged(const void* prop);
};

struct HopperBinScriptContext
{
	void onDeactivate();
};

HopperBinScriptContext* __cdecl getHopperBinScriptContext(HopperBin* bin);

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x009288f0
void HopperBin::deactivate()
{
	if (flag_0190)
	{
		if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x194) == 0)
		{
			reinterpret_cast<HopperBinMember1B0*>(reinterpret_cast<char*>(this) + 0x1B0)->disconnect();
		}

		flag_0190 = false;
		reinterpret_cast<HopperBinThisCall*>(this)->raisePropertyChanged(reinterpret_cast<const void*>(0x012FF6C8));

		HopperBinScriptContext* context = getHopperBinScriptContext(this);
		if (context)
		{
			return context->onDeactivate();
		}
	}
}

namespace {

struct HopperBinBase
{
	void construct();
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00928040
HopperBin::HopperBin()
{
	reinterpret_cast<HopperBinBase*>(this)->construct();

	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x00) = 0x00E7FB14;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x04) = 0x00E7FBB0;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x18) = 0x00E7FBB8;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x1C) = 0x00E7FBC4;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x64) = 0x00E7FBD4;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x94) = 1;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x90) = 4;
}

namespace {

struct HopperBinScriptHost
{
	int run(HopperBin* owner);
};

typedef unsigned char (__cdecl *HopperBinAssertCallback)(int, const char*, int);

void __cdecl HopperBin_assertFailure(int level, const char* message);

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00928950
int HopperBin::runScript()
{
	HopperBinScriptHost* host = *reinterpret_cast<HopperBinScriptHost**>(reinterpret_cast<char*>(this) + 0x38);
	if (host)
	{
		return host->run(this);
	}

	unsigned char enabled = *reinterpret_cast<unsigned char*>(0x012DE657);
	if (enabled)
	{
		HopperBinAssertCallback callback = *reinterpret_cast<HopperBinAssertCallback*>(0x012DE694);
		if (callback)
		{
			if (callback(0x0010062B8, (const char*)0x00E80064, 0x69))
			{
				goto done;
			}

			enabled = *reinterpret_cast<unsigned char*>(0x012DE657);
		}

		HopperBin_assertFailure((int)enabled, (const char*)0x00E800A8);
	}

done:
	return -1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
