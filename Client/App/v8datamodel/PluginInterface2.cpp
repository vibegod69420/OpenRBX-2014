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

// FUNCTION: ROBLOXSTUDIO 0x00cc7750
void __cdecl PluginInterface2::Sub_CC7750(int value)
{
	if ((unsigned int)(value - 1) <= 2)
	{
		((PluginInterface2CallSite*)this)->Call(&value, 2, 1);
	}
	else
	{
		unsigned char temp = 0;
		((PluginInterface2CallSite*)this)->Call((int*)&temp, 2, 1);

		if (PluginInterface2_CheckC85D70() || PluginInterface2_CheckCA6930())
		{
			((PluginInterface2CallSite*)this)->Call(&value, 5, 1);
		}
		else
		{
			((PluginInterface2CallSite*)this)->Call(&value, 4, 1);
		}
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00cc6590
void __cdecl PluginInterface2::Sub_CC6590()
{
	char* p = (char*)this;
	if (*(unsigned int*)(p + 0x14) < 0x10)
	{
		*(unsigned int*)(p + 0x10) = 0;
		*p = 0;
	}
	else
	{
		*(unsigned int*)(p + 0x10) = 0;
		**(char**)p = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RakNet
