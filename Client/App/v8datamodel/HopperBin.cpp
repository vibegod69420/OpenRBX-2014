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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
