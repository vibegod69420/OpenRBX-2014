#include "v8datamodel/PluginInterface2.h"

#include "decomp.h"

namespace RakNet {

// FUNCTION: ROBLOXSTUDIO 0x00cc7320
bool PluginInterface2::IsEmpty() const
{
	void* value = *(void**)((char*)this + 4);
	return value == 0 || value == (void*)((char*)this + 4);
}

struct PluginInterface2CallSite
{
	void Call(int* out, int mode, int flag);
};

bool PluginInterface2_CheckC85D70();
bool PluginInterface2_CheckCA6930();

// FUNCTION: ROBLOXSTUDIO 0x00cc76f0
void __cdecl PluginInterface2::Sub_CC76F0(int* out)
{
	*out = 0;
	((PluginInterface2CallSite*)this)->Call(out, 2, 1);

	if (*out == 0)
	{
		if (PluginInterface2_CheckC85D70() || PluginInterface2_CheckCA6930())
		{
			((PluginInterface2CallSite*)this)->Call(out, 5, 1);
		}
		else
		{
			((PluginInterface2CallSite*)this)->Call(out, 4, 1);
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RakNet
