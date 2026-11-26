#include "RobloxPluginHost.h"

#include "decomp.h"



struct RobloxPluginHostSubCtor
{
	void sub_514FF0();
};

// FUNCTION: ROBLOXSTUDIO 0x0057a230
RobloxPluginHost::RobloxPluginHost()
{
	volatile int state = 0;
	reinterpret_cast<RobloxPluginHostSubCtor*>(this)->sub_514FF0();
}

typedef void (__thiscall *RobloxPluginHost_UnkE1106C_t)(void*);
extern RobloxPluginHost_UnkE1106C_t g_rbxsPluginHostUnkE1106C;

void* __stdcall rbxs_sub_4140A0(void*);

// FUNCTION: ROBLOXSTUDIO 0x0057a250
RobloxPluginHost* RobloxPluginHost::sub_57A250()
{
	volatile int state = 0;
	void* ret = rbxs_sub_4140A0(this);
	g_rbxsPluginHostUnkE1106C((char*)ret + 0x80);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0057a280
RobloxPluginHost* RobloxPluginHost::sub_57A280()
{
	volatile int state = 0;
	void* ret = rbxs_sub_4140A0(this);
	g_rbxsPluginHostUnkE1106C((char*)ret + 0x84);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


