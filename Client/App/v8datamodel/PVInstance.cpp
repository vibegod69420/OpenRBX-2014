#include "v8datamodel/PVInstance.h"

#include "decomp.h"

namespace RBX {

class PVInstanceHelper0x4959D0
{
public:
	void* fn();
};

class PVInstanceHelper0x7CD560
{
public:
	bool fn(void* arg);
};

// FUNCTION: ROBLOXSTUDIO 0x0083b190
PVInstance* PVInstance::getAncestorPVInstance()
{
	PVInstanceHelper0x7CD560* obj = *(PVInstanceHelper0x7CD560**)((char*)this + 0xC);
	void* arg = ((PVInstanceHelper0x4959D0*)this)->fn();
	if (obj->fn(arg))
		return (PVInstance*)((char*)this - 0x1C);
	return 0;
}

class PVInstanceHelper0x8449A0
{
public:
	void fn(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0083aeb0
PVInstance* __cdecl PVInstance::getTopLevelPVInstance(void* arg)
{
	volatile int local = 0;
	((PVInstanceHelper0x8449A0*)this)->fn(arg, 1);
	return this;
}

class PVInstanceHelper0x844C60
{
public:
	void fn(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0083aed0
PVInstance* __cdecl PVInstance::getTopLevelPVInstanceEx(void* arg)
{
	volatile int local = 0;
	((PVInstanceHelper0x844C60*)this)->fn(arg, 1);
	return this;
}

class PVInstanceHelper0x844F20
{
public:
	void fn(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0083aef0
PVInstance* __cdecl PVInstance::getTopLevelPVInstance2(void* arg)
{
	volatile int local = 0;
	((PVInstanceHelper0x844F20*)this)->fn(arg, 1);
	return this;
}

class PVInstanceHelper0x8451E0
{
public:
	void fn(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0083af10
PVInstance* __cdecl PVInstance::getTopLevelPVInstance3(void* arg)
{
	volatile int local = 0;
	((PVInstanceHelper0x8451E0*)this)->fn(arg, 1);
	return this;
}

class PVInstanceHelper0x6BC9A0
{
public:
	void fn();
};

// FUNCTION: ROBLOXSTUDIO 0x00835d60
void __cdecl PVInstance::destroy()
{
	if (this == NULL)
		return;

	((PVInstanceHelper0x6BC9A0*)((char*)this + 4))->fn();
	((PVInstanceHelper0x6BC9A0*)this)->fn();
	::operator delete(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
