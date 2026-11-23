#include "RobloxSettings.h"

#include "decomp.h"



class UnkManager515360;

typedef void (__thiscall *UnkFunc515360)(UnkManager515360*, RobloxSettings*, void*, int);
extern UnkManager515360 g_unkManager515360;
extern UnkFunc515360 g_unkFunc515360;

// FUNCTION: ROBLOXSTUDIO 0x00515360
RobloxSettings* __fastcall RobloxSettings::sub_515360(void* arg)
{
	volatile int local;
	local = 0;
	g_unkFunc515360(&g_unkManager515360, this, arg, 0);
	return this;
}

typedef void (__cdecl *UnkFunc515260)(RobloxSettings*);
extern UnkFunc515260 g_unkFunc515260;

// FUNCTION: ROBLOXSTUDIO 0x00515260
RobloxSettings* RobloxSettings::sub_515260()
{
	volatile int local;
	local = 0;
	g_unkFunc515260(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


