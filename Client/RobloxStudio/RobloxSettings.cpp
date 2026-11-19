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

// AUTO-GENERATED IMPLEMENTATIONS


