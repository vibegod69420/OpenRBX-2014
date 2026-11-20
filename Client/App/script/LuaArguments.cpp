#include "script/LuaArguments.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

int __cdecl luaArgumentsStackSize(void* stack);

// FUNCTION: ROBLOXSTUDIO 0x008e3c90
int LuaArguments::size()
{
	return luaArgumentsStackSize(*(void**)((char*)this + 0x4c)) - 1;
}

void __cdecl sub_A389C0(void* a, void* b, void* c);

// FUNCTION: ROBLOXSTUDIO 0x008d8bf0
void __cdecl LuaArguments::pushAllValues(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EAC8);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c10
void __cdecl LuaArguments::pushAllResults(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EAD0);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c30
void __cdecl LuaArguments::pushAllEvents(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB28);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c50
void __cdecl LuaArguments::pushAllObjects(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EACC);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c70
void __cdecl LuaArguments::pushAllArgs(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EAC4);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c90
void __cdecl LuaArguments::pushAllYields(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB1C);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8cb0
void __cdecl LuaArguments::pushAllThreads(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB30);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8cf0
void __cdecl LuaArguments::pushAllFunctions(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB20);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8d10
void __cdecl LuaArguments::pushAllUserdatas(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB14);
}

void __cdecl sub_B7A8D0(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40340
void __cdecl LuaArguments::pushObject()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EACC);
	sub_B7A8D0(result, this);
}

void __cdecl sub_B7ABC0(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40370
void __cdecl LuaArguments::pushThread()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB30);
	sub_B7ABC0(result, this);
}

void __cdecl sub_B7AC30(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a403a0
void __cdecl LuaArguments::pushFunction()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB2C);
	sub_B7AC30(result, this);
}

void __cdecl sub_B7ACA0(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a403d0
void __cdecl LuaArguments::pushFunctionValue()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB20);
	sub_B7ACA0(result, this);
}

void __cdecl sub_B7AD10(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40400
void __cdecl LuaArguments::pushString()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB24);
	sub_B7AD10(result, this);
}

void __cdecl sub_B7AD80(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40430
void __cdecl LuaArguments::pushUserdata()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB14);
	sub_B7AD80(result, this);
}

void __cdecl sub_B7ADF0(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40460
void __cdecl LuaArguments::pushRBXScriptSignal()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB18);
	sub_B7ADF0(result, this);
}

void __cdecl sub_A39240(void*, void*, void*);
void __cdecl sub_A35CC0(void*, int, int);
void __cdecl sub_A35D10(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00a416f0
void __cdecl LuaArguments::pushGlobal()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EAC8, (void*)0x00EA71D0);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41720
void __cdecl LuaArguments::pushGlobalResults()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EAD0, (void*)0x00EA71E0);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41750
void __cdecl LuaArguments::pushGlobalValues()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EAD4, (void*)0x00EA7278);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41780
void __cdecl LuaArguments::pushGlobalEvents()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB28, (void*)0x00EA7308);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a417b0
void __cdecl LuaArguments::pushGlobalObjects()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EACC, (void*)0x00EA7250);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a417e0
void __cdecl LuaArguments::pushGlobalArgs()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EAC4, (void*)0x00EA71C0);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41810
void __cdecl LuaArguments::pushGlobalYields()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB1C, (void*)0x00EA72D8);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41870
void __cdecl LuaArguments::pushGlobalFunctions()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EADC, (void*)0x00EA7298);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a418a0
void __cdecl LuaArguments::pushGlobalThreads()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB30, (void*)0x00EA71B0);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a418d0
void __cdecl LuaArguments::pushGlobalFunction()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB2C, (void*)0x00EA7318);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41900
void __cdecl LuaArguments::pushGlobalFunctionValue()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB20, (void*)0x00EA72E8);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41930
void __cdecl LuaArguments::pushGlobalString()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB24, (void*)0x00EA72F8);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41960
void __cdecl LuaArguments::pushGlobalUserdata()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB14, (void*)0x00EA72A8);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41990
void __cdecl LuaArguments::pushGlobalRBXScriptSignal()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB18, (void*)0x00EA72C8);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

void* __cdecl sub_A360A0(void*, void*);
int __cdecl sub_A350C0(void*, void*);
void __cdecl sub_A35060(void*, int, void*);
int __cdecl sub_A35810(void*, int, int);
void __cdecl sub_A35D10(void*, int);
void* __cdecl sub_7D60A0();

class DummySub7CFF40
{
public:
	void __thiscall sub_7CFF40(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43000
bool __cdecl LuaArguments::getYield(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EB1C);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D60A0();
				((DummySub7CFF40*)((char*)out + 4))->sub_7CFF40(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D5A20();

class DummySub7D0280
{
public:
	void __thiscall sub_7D0280(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43180
bool __cdecl LuaArguments::getThread(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EB30);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5A20();
				((DummySub7D0280*)((char*)out + 4))->sub_7D0280(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D5BE0();

class DummySub7D0510
{
public:
	void __thiscall sub_7D0510(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43380
bool __cdecl LuaArguments::getUserdata(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EB14);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5BE0();
				((DummySub7D0510*)((char*)out + 4))->sub_7D0510(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D5940();

class DummySub7CFEB0
{
public:
	void __thiscall sub_7CFEB0(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a42f80
bool __cdecl LuaArguments::getArg(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EAC4);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5940();
				((DummySub7CFEB0*)((char*)out + 4))->sub_7CFEB0(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D5B70();

class DummySub7D0480
{
public:
	void __thiscall sub_7D0480(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43300
bool __cdecl LuaArguments::getString(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EB24);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5B70();
				((DummySub7D0480*)((char*)out + 4))->sub_7D0480(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D5B00();

class DummySub7D03E0
{
public:
	void __thiscall sub_7D03E0(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43280
bool __cdecl LuaArguments::getFunctionValue(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EB20);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5B00();
				((DummySub7D03E0*)((char*)out + 4))->sub_7D03E0(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_A559F0();

class DummySub7D0020
{
public:
	void __thiscall sub_7D0020(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43080
bool __cdecl LuaArguments::getValue(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EAD8);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_A559F0();
				((DummySub7D0020*)((char*)out + 4))->sub_7D0020(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D5C50();

class DummySub7D05C0
{
public:
	void __thiscall sub_7D05C0(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43400
bool __cdecl LuaArguments::getRBXScriptSignal(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EB18);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5C50();
				((DummySub7D05C0*)((char*)out + 4))->sub_7D05C0(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_A353E0(void*, int);
void __cdecl sub_A35BF0(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00a40c40
void __cdecl LuaArguments::pushVector2(void* arg)
{
	float x = *(float*)arg;
	float y = *(float*)((char*)arg + 4);
	void* p = sub_A353E0(this, 8);
	if (p)
	{
		*(float*)p = x;
		*(float*)((char*)p + 4) = y;
	}
	sub_A35060(this, -10000, *(void**)0x0124EB20);
	sub_A35BF0(this, -2);
}

void* __cdecl sub_A353E0(void*, int);
void __cdecl sub_A35BF0(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00a40620
int __cdecl LuaArguments::pushVector2int16()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* src = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB24);

	short x = *(short*)src;
	short y = *((short*)src + 1);
	x = -x;
	y = -y;

	int local;
	*(short*)&local = x;
	*((short*)&local + 1) = y;

	void* p = sub_A353E0(this, 4);
	if (p)
	{
		*(int*)p = local;
	}

	sub_A35060(this, -10000, *(void**)0x0124EB24);
	sub_A35BF0(this, -2);
	return 1;
}

void* __cdecl sub_A360A0(void*, void*);
int __cdecl sub_A350C0(void*, void*);
void __cdecl sub_A35060(void*, int, void*);
int __cdecl sub_A35810(void*, int, int);
void __cdecl sub_A35D10(void*, int);

class DummySubA41D20
{
public:
	void __thiscall sub_A41D20(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a42ae0
bool __cdecl LuaArguments::getScript(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0128D3B4);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				((DummySubA41D20*)out)->sub_A41D20(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00a40b80
void __cdecl LuaArguments::pushVector3(void* arg)
{
	float x = *(float*)arg;
	float y = *(float*)((char*)arg + 4);
	float z = *(float*)((char*)arg + 8);
	void* p = sub_A353E0(this, 12);
	if (p)
	{
		*(float*)p = x;
		*(float*)((char*)p + 4) = y;
		*(float*)((char*)p + 8) = z;
	}
	sub_A35060(this, -10000, *(void**)0x0124EB28);
	sub_A35BF0(this, -2);
}

void* __cdecl sub_7D5710();

class DummySub788700
{
public:
	void __thiscall sub_788700(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a42c80
bool __cdecl LuaArguments::getScriptShared(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0128D3B4);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5710();
				((DummySub788700*)((char*)out + 4))->sub_788700(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D6030();

class DummySub7CFCA0
{
public:
	void __thiscall sub_7CFCA0(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a42d00
bool __cdecl LuaArguments::getGlobal(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EAC8);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D6030();
				((DummySub7CFCA0*)((char*)out + 4))->sub_7CFCA0(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D57F0();

class DummySub7CFE20
{
public:
	void __thiscall sub_7CFE20(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a42d80
bool __cdecl LuaArguments::getResult(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EAD0);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D57F0();
				((DummySub7CFE20*)((char*)out + 4))->sub_7CFE20(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_B092E0();

class DummySubA41BF0
{
public:
	void __thiscall sub_A41BF0(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a42e00
bool __cdecl LuaArguments::getValues(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EAD4);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_B092E0();
				((DummySubA41BF0*)((char*)out + 4))->sub_A41BF0(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_7D5860();

class DummySub40E3E0
{
public:
	void __thiscall sub_40E3E0(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a42e80
bool __cdecl LuaArguments::getEvent(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EB28);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5860();
				((DummySub40E3E0*)((char*)out + 4))->sub_40E3E0(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_88BD20();

class DummySub7B78E0
{
public:
	void __thiscall sub_7B78E0(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a42f00
bool __cdecl LuaArguments::getObject(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EACC);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_88BD20();
				((DummySub7B78E0*)((char*)out + 4))->sub_7B78E0(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_A56540();

class DummySub7D0130
{
public:
	void __thiscall sub_7D0130(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43100
bool __cdecl LuaArguments::getFunctions(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EADC);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_A56540();
				((DummySub7D0130*)((char*)out + 4))->sub_7D0130(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

void* __cdecl sub_A360A0(void*, void*);
int __cdecl sub_A350C0(void*, void*);
void __cdecl sub_A35060(void*, int, void*);
int __cdecl sub_A35810(void*, int, int);
void __cdecl sub_A35D10(void*, int);
void* __cdecl sub_7D5A90();

class DummySub7D0340
{
public:
	void __thiscall sub_7D0340(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00a43200
bool __cdecl LuaArguments::getFunction(void* arg, void* out)
{
	void* L = this;
	void* tmp = sub_A360A0(L, arg);
	if (tmp)
	{
		if (sub_A350C0(L, arg))
		{
			sub_A35060(L, -10000, *(void**)0x0124EB2C);
			if (sub_A35810(L, -1, -2))
			{
				sub_A35D10(L, -3);
				*(void**)out = sub_7D5A90();
				((DummySub7D0340*)((char*)out + 4))->sub_7D0340(tmp);
				return true;
			}
			sub_A35D10(L, -3);
		}
	}
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00a40690
int __cdecl LuaArguments::pushVector3()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* src = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB14);

	float v[3];
	v[0] = -*(float*)src;
	v[1] = -*(float*)((char*)src + 4);
	v[2] = -*(float*)((char*)src + 8);

	void* p = sub_A353E0(this, 12);
	if (p)
	{
		*(int*)p = *(int*)&v[0];
		*(int*)((char*)p + 4) = *(int*)&v[1];
		*(int*)((char*)p + 8) = *(int*)&v[2];
	}

	sub_A35060(this, -10000, *(void**)0x0124EB14);
	sub_A35BF0(this, -2);

	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3fde0
int __cdecl LuaArguments::pushVector2Sub()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* a = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB20);
	void* b = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)2, *(void**)0x0124EB20);

	float x = *(float*)a - *(float*)b;
	float y = *(float*)((char*)a + 4) - *(float*)((char*)b + 4);

	void* p = sub_A353E0(this, 8);
	if (p)
	{
		*(float*)p = x;
		*(float*)((char*)p + 4) = y;
	}

	sub_A35060(this, -10000, *(void**)0x0124EB20);
	sub_A35BF0(this, -2);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3fef0
int __cdecl LuaArguments::pushVector3Sub()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* a = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB14);
	void* b = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)2, *(void**)0x0124EB14);

	float v[3];
	v[0] = *(float*)a - *(float*)b;
	v[1] = *(float*)((char*)a + 4) - *(float*)((char*)b + 4);
	v[2] = *(float*)((char*)a + 8) - *(float*)((char*)b + 8);

	void* p = sub_A353E0(this, 12);
	if (p)
	{
		*(int*)p = *(int*)&v[0];
		*(int*)((char*)p + 4) = *(int*)&v[1];
		*(int*)((char*)p + 8) = *(int*)&v[2];
	}

	sub_A35060(this, -10000, *(void**)0x0124EB14);
	sub_A35BF0(this, -2);

	return 1;
}

void __cdecl sub_A38FC0(void*, void*);
void __cdecl sub_8DFAC0(void*, int);
void __cdecl sub_A35710(void*, void*);
void __cdecl sub_A35580(void*, void*, int);
void __cdecl sub_A35CE0(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00a40d10
void __cdecl LuaArguments::registerObject(void* arg1, void* arg2)
{
	void* self = this;

	sub_A38FC0(self, *(void**)0x0124EACC);
	sub_8DFAC0(self, -1);

	sub_A35710(self, (void*)0x00E53324);
	sub_A35580(self, arg1, 0);
	sub_A35CE0(self, -3);

	sub_A35710(self, (void*)0x00E5332C);
	sub_A35580(self, arg2, 0);

	sub_A35CE0(self, -3);

	sub_A35710(self, (void*)0x00EA7B60);
	sub_A35580(self, (void*)0x00A3CD40, 0);
	sub_A35CE0(self, -3);

	sub_A35710(self, (void*)0x00EA7B68);
	sub_A35580(self, (void*)0x00A3CA10, 0);
	sub_A35CE0(self, -3);

	sub_A35710(self, (void*)0x00EA7B70);
	sub_A35580(self, (void*)0x00A40340, 0);
	sub_A35CE0(self, -3);

	sub_A35710(self, (void*)0x00EA7B7C);
	sub_A35580(self, (void*)0x00A3BD40, 0);
	sub_A35CE0(self, -3);

	sub_A35710(self, (void*)0x00EA7B84);

	sub_A35580(self, (void*)0x00A3FC50, 0);
	sub_A35CE0(self, -3);

	sub_A35710(self, (void*)0x00EA7B8C);
	sub_A35580(self, (void*)0x00A3EDA0, 0);
	sub_A35CE0(self, -3);

	sub_A35710(self, (void*)0x00EA78F4);
	sub_A35580(self, (void*)0x00A3ED40, 0);

	sub_A35CE0(self, -3);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
