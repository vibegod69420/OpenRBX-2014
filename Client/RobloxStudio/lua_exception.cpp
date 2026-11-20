#include "lua_exception.h"

#include "decomp.h"



// Forward declaration for callee at 0x00a35e70
void __cdecl lua_exception_throw(int state, int code, int flags);

// FUNCTION: ROBLOXSTUDIO 0x00a37120
void lua_exception::raise()
{
	lua_exception_throw(*(int*)((char*)this + 0x0C), -1, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x00a37a80
int __cdecl lua_exception::getCode()
{
	return *(int*)((char*)this + 0x44);
}

// FUNCTION: ROBLOXSTUDIO 0x00a37a90
int __cdecl lua_exception::getLine()
{
	return *(int*)((char*)this + 0x3C);
}

// FUNCTION: ROBLOXSTUDIO 0x00a35de0
int __cdecl lua_exception::getType()
{
    return *(unsigned char*)((char*)this + 6);
}

// FUNCTION: ROBLOXSTUDIO 0x00a37aa0
int __cdecl lua_exception::getLevel()
{
	return *(unsigned char*)((char*)this + 0x38);
}

// FUNCTION: ROBLOXSTUDIO 0x00a39240
void __cdecl lua_exception_dispatch(int, int, int, int);

void __cdecl lua_exception::raise(int arg1, int arg2)
{
	lua_exception_dispatch((int)this, arg1, arg2, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x00a38660
void __cdecl lua_exception::initContext(void* context)
{
	char* p = (char*)context;
	*(void**)(p + 8) = this;
	*(char**)(p + 0) = p + 0x0C;
	*(int*)(p + 4) = 0;
}

// Forward declaration for callee at 0x00a389c0
void __cdecl lua_exception_dispatchGlobal(int arg1, int arg2, int arg3);

// FUNCTION: ROBLOXSTUDIO 0x00a3cd40
int __cdecl lua_exception::dispatchGlobal()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EACC);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3cd80
int __cdecl lua_exception::dispatchGlobalState()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB2C);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3cda0
int __cdecl lua_exception::dispatchGlobalState2()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB20);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3cdc0
int __cdecl lua_exception::dispatchGlobalState3()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB24);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3cde0
int __cdecl lua_exception::dispatchGlobalState4()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB14);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3ce00
int __cdecl lua_exception::dispatchGlobalState5()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB18);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a35670
void __cdecl lua_exception::pushValue(int value)
{
	char* top = *(char**)((char*)this + 8);
	*(int*)top = value;
	*(int*)(top + 8) = 2;
	*(char**)((char*)this + 8) += 16;
}

// Forward declaration for callee at 0x00a34c10
void* __cdecl index2adr(int state, int index);

// FUNCTION: ROBLOXSTUDIO 0x00a35cc0
void __cdecl lua_exception::setStackTag(int index, unsigned char tag)
{
	void** slot = (void**)index2adr((int)this, index);
	*((unsigned char*)*slot + 7) = tag;
}

// FUNCTION: ROBLOXSTUDIO 0x00a36100
const char* __cdecl lua_exception::getTypeName(int type)
{
	if (type == -1)
		return (const char*)0x00EA6EA0;

	return ((const char**)0x00EE1BC0)[type];
}

// FUNCTION: ROBLOXSTUDIO 0x00a35560
void __cdecl lua_exception::pushBoolean(int value)
{
	char* top = *(char**)((char*)this + 8);
	*(int*)(top + 8) = 1;
	*(int*)top = (value != 0);
	*(char**)((char*)this + 8) += 16;
}

// FUNCTION: ROBLOXSTUDIO 0x00a38320
int __cdecl lua_exception::popError(int* pPair, int* outCode)
{
	if (pPair[1] == 0)
		return 0;

	*outCode = pPair[1];
	pPair[1] = 0;
	return pPair[0];
}

// FUNCTION: ROBLOXSTUDIO 0x00a360d0
int __cdecl lua_exception::getStackType(int index)
{
	char* o = (char*)index2adr((int)this, index);
	if (o == (char*)0x00EA7E68)
		return -1;
	return *(int*)(o + 8);
}

// FUNCTION: ROBLOXSTUDIO 0x00a35780
int __cdecl lua_exception::pushThread()
{
	char* top = *(char**)((char*)this + 8);
	*(int*)top = (int)this;
	*(int*)(top + 8) = 8;

	char* g = *(char**)((char*)this + 0x10);
	*(char**)((char*)this + 8) += 16;

	return *(void**)(g + 0x70) == this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a379c0
const char* __cdecl luaO_pushvfstring(lua_exception* L, const char* fmt, char* argp);
void __cdecl luaG_addinfo(lua_exception* L, const char* msg);
void __cdecl luaG_errormsg(lua_exception* L);

void __cdecl lua_exception::runError(const char* fmt, ...)
{
	const char* msg = luaO_pushvfstring(this, fmt, (char*)(&fmt + 1));
	luaG_addinfo(this, msg);
	luaG_errormsg(this);
}

// Forward declarations for callees
void* __cdecl lua_newstate(void* f, void* ud);
void* __cdecl lua_atpanic(void* L, void* panicf);

// FUNCTION: ROBLOXSTUDIO 0x00a39020
void* __cdecl lua_exception::luaL_newstate()
{
	void* L = lua_newstate((void*)0x00A38350, 0);
	if (L)
	{
		lua_atpanic(L, (void*)0x00A39370);
	}
	return L;
}

// Forward declaration for callee at 0x00bcc7e0
void __cdecl luaV_settable(lua_exception* L, void* t, void* key, void* val);

// FUNCTION: ROBLOXSTUDIO 0x00a35ce0
void __cdecl lua_exception::setTable(int index)
{
	void* t = index2adr((int)this, index);
	char* top = *(char**)((char*)this + 8);
	luaV_settable(this, t, top - 0x20, top - 0x10);
	*(char**)((char*)this + 8) += -0x20;
}

// FUNCTION: ROBLOXSTUDIO 0x00a357b0
void __cdecl lua_exception::pushValueAtIndex(int index)
{
	char* src = (char*)index2adr((int)this, index);
	char* top = *(char**)((char*)this + 8);

	*(int*)top = *(int*)src;
	*(int*)(top + 4) = *(int*)(src + 4);
	*(int*)(top + 8) = *(int*)(src + 8);

	*(char**)((char*)this + 8) += 16;
}

// Forward declarations for callees
void __cdecl luaC_step(lua_exception* L);
void __cdecl luaD_call(lua_exception* L, int a, int b);

// FUNCTION: ROBLOXSTUDIO 0x00a357e0
void __cdecl lua_exception::call(int a, int b)
{
	char* g = *(char**)((char*)this + 0x10);
	if (*(unsigned int*)(g + 0x44) >= *(unsigned int*)(g + 0x40))
	{
		luaC_step(this);
	}
	luaD_call(this, a, b);
}

// FUNCTION: ROBLOXSTUDIO 0x00a38710
int __cdecl lua_type(lua_exception* L, int index);
void __cdecl luaL_argerror(lua_exception* L, int narg, const char* extramsg);

void __cdecl lua_exception::checkAny(int index)
{
	if (lua_type(this, index) == -1)
	{
		luaL_argerror(this, index, "value expected");
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a35620
void __cdecl luaC_step(lua_exception* L);
void __cdecl luaG_runerror(lua_exception* L, const char* fmt, void* argp);

void __cdecl lua_exception::runErrorV(const char* fmt, ...)
{
	char* g = *(char**)((char*)this + 0x10);
	if (*(unsigned int*)(g + 0x44) >= *(unsigned int*)(g + 0x40))
	{
		luaC_step(this);
	}
	luaG_runerror(this, fmt, (void*)(&fmt + 1));
}

// FUNCTION: ROBLOXSTUDIO 0x00a37c30
int __cdecl lua_exception::setErrorData(int code, int level, int line)
{
	int resultCode = code;
	int resultLevel;

	if (resultCode == 0)
		goto clear;

	resultLevel = level;
	if (resultLevel != 0)
		goto store;

clear:
	resultLevel = 0;
	resultCode = 0;

store:
	*(int*)((char*)this + 0x44) = resultCode;
	*(int*)((char*)this + 0x3C) = line;
	*(int*)((char*)this + 0x40) = line;
	*(unsigned char*)((char*)this + 0x38) = (unsigned char)resultLevel;
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a37800
const char* __cdecl lua_exception::getString(int index)
{
	if (index & 0x100)
	{
		int idx = index & ~0x100;
		idx += idx;
		char* base = *(char**)((char*)this + 8);
		if (*(int*)(base + idx * 8 + 8) == 4)
		{
			return *(char**)(base + idx * 8) + 0x10;
		}
	}
	return (const char*)0x0101EB04;
}

// Forward declaration for callee at 0x00a35690
void __cdecl sub_A35690(void* L, void* buf, int size);
// Forward declaration for callee at 0x00a381e0
void __cdecl sub_A381E0(void* B);

// FUNCTION: ROBLOXSTUDIO 0x00a39110
char* __cdecl lua_exception::prepBuffer()
{
	char* base = (char*)this;
	int size = *(char**)base - base - 0x0C;

	if (size != 0)
	{
		char* buf = base + 0x0C;
		sub_A35690(*(void**)(base + 8), buf, size);
		++*(int*)(base + 4);
		*(char**)base = buf;
		sub_A381E0(base);
	}

	return base + 0x0C;
}

// Forward declarations for callees
void* __cdecl sub_A353E0(lua_exception* L, int size);
void __cdecl sub_A35060(lua_exception* L, int idx, int n);
int __cdecl sub_A35BF0(lua_exception* L, int idx);

// FUNCTION: ROBLOXSTUDIO 0x00a3b1d0
void* __cdecl lua_exception::sub_A3B1D0(int value)
{
	lua_exception* L = this;
	void* p = sub_A353E0(L, 4);
	if (p)
	{
		*(int*)p = value;
	}

	sub_A35060(L, -10000, *(int*)0x0124EAC4);
	sub_A35BF0(L, -2);
	return p;
}

// FUNCTION: ROBLOXSTUDIO 0x00a36e40
int __cdecl lua_exception::yield(int nresults)
{
	if (*(unsigned short*)((char*)this + 0x34) > *(unsigned short*)((char*)this + 0x36))
	{
		runError("attempt to yield across metamethod/C-call boundary");
	}

	char* base = *(char**)((char*)this + 8) - (nresults << 4);
	*(char**)((char*)this + 0x0C) = base;
	*(unsigned char*)((char*)this + 6) = 1;
	return (int)base | -1;
}

// Forward declaration for callee at 0x00bc9a00
void* __cdecl sub_BC9A00(void* t, int n);

// FUNCTION: ROBLOXSTUDIO 0x00a35890
void __cdecl lua_exception::rawgeti(int index, int n)
{
    void* o = index2adr((int)this, index);
    char* src = (char*)sub_BC9A00(*(void**)o, n);
    char* top = *(char**)((char*)this + 8);

    *(int*)top = *(int*)src;
    *(int*)(top + 4) = *(int*)(src + 4);
    *(int*)(top + 8) = *(int*)(src + 8);

    *(char**)((char*)this + 8) += 16;
}

// FUNCTION: ROBLOXSTUDIO 0x00a37970
int __cdecl lua_exception::orderError(void* p1, void* p2)
{
	const char* name1 = ((const char**)0x00EE1BC0)[*(int*)((char*)p1 + 8)];
	const char* name2 = ((const char**)0x00EE1BC0)[*(int*)((char*)p2 + 8)];

	if (name1[2] == name2[2])
	{
		runError("attempt to compare two %s values", name1);
	}
	else
	{
		runError("attempt to compare %s with %s", name1, name2);
	}

	return 0;
}

// Forward declarations for callees
int __cdecl sub_A37410(lua_exception* L, void* p, int n);
void __cdecl sub_A34CD0(lua_exception* L, void* src);

// FUNCTION: ROBLOXSTUDIO 0x00a37b60
int __cdecl lua_exception::findLocal(void* ci, int n)
{
	char* upval = (char*)*(void**)((char*)this + 0x28) + *(int*)((char*)ci + 0x60) * 24;
	int result = sub_A37410(this, upval, n);
	if (result)
	{
		sub_A34CD0(this, *(char**)upval - 16 + n * 16);
	}
	return result;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3aff0
void* __cdecl lua_exception::sub_A3AFF0(int value)
{
	lua_exception* L = this;
	void* p = sub_A353E0(L, 4);
	if (p)
	{
		*(int*)p = value;
	}

	sub_A35060(L, -10000, *(int*)0x0124EAD0);
	sub_A35BF0(L, -2);
	return p;
}

// FUNCTION: ROBLOXSTUDIO 0x00a35d10
void __cdecl lua_exception::setTop(int n)
{
	if (n >= 0)
	{
		while (*(char**)((char*)this + 8) < *(char**)((char*)this + 0x0C) + n * 16)
		{
			*(int*)(*(char**)((char*)this + 8) + 8) = 0;
			*(char**)((char*)this + 8) += 16;
		}

		*(char**)((char*)this + 8) = *(char**)((char*)this + 0x0C) + n * 16;
	}
	else
	{
		*(char**)((char*)this + 8) += n * 16 + 16;
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a3b450
void* __cdecl lua_exception::sub_A3B450(float arg1, float arg2)
{
	lua_exception* L = this;
	void* p = sub_A353E0(L, 8);
	if (p)
	{
		*(float*)p = arg1;
		*((float*)p + 1) = arg2;
	}

	sub_A35060(L, -10000, *(int*)0x0124EB20);
	sub_A35BF0(L, -2);
	return p;
}

// FUNCTION: ROBLOXSTUDIO 0x00a35fd0
void* __cdecl sub_BCC910(void* o, void* n);

double __cdecl lua_exception::tonumber(int index)
{
	void* o = index2adr((int)this, index);
	if (*(int*)((char*)o + 8) != 3)
	{
		double n[2];
		o = sub_BCC910(o, n);
		if (!o)
			return 0.0;
	}
	return *(double*)o;
}

// Forward declaration for callee at 0x00bc98e0
void* __cdecl sub_BC98E0(void* t, void* key);

// FUNCTION: ROBLOXSTUDIO 0x00a35850
void __cdecl lua_exception::rawget(int index)
{
	void* o = index2adr((int)this, index);
	char* res = (char*)sub_BC98E0(*(void**)o, *(char**)((char*)this + 8) - 0x10);
	char* top = *(char**)((char*)this + 8);

	*(int*)(top - 0x10) = *(int*)res;
	*(int*)(top - 0x0C) = *(int*)(res + 4);
	*(int*)(top - 0x08) = *(int*)(res + 8);
}

// Forward declaration for callee at 0x00a34dd0
void __cdecl sub_A34DD0(void* L, int n);

// FUNCTION: ROBLOXSTUDIO 0x00a39150
void __cdecl lua_exception::sub_A39150()
{
	char* base = (char*)this;
	int size = *(char**)base - base - 0x0C;

	if (size != 0)
	{
		char* buf = base + 0x0C;
		sub_A35690(*(void**)(base + 8), buf, size);
		++*(int*)(base + 4);
		*(char**)base = buf;
	}

	sub_A34DD0(*(void**)(base + 8), *(int*)(base + 4));
	*(int*)(base + 4) = 1;
}

// Forward declarations for callees
void* __cdecl index2adr(int state, int index);
int __cdecl sub_A45B00(void* p1, void* p2);

// FUNCTION: ROBLOXSTUDIO 0x00a35810
int __cdecl lua_exception::rawequal(int index1, int index2)
{
	void* o1 = index2adr((int)this, index1);
	void* o2 = index2adr((int)this, index2);

	if (o1 == (void*)0x00EA7E68 || o2 == (void*)0x00EA7E68)
		return 0;

	return sub_A45B00(o1, o2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a3afb0
void* __cdecl lua_exception::sub_A3AFB0(int value)
{
	lua_exception* L = this;
	void* p = sub_A353E0(L, 4);
	if (p)
	{
		*(int*)p = value;
	}

	sub_A35060(L, -10000, *(int*)0x0124EAC8);
	sub_A35BF0(L, -2);
	return p;
}

void* __cdecl index2adr(int state, int index);

// FUNCTION: ROBLOXSTUDIO 0x00a359d0
void __cdecl lua_exception::remove(int index)
{
	char* src = (char*)index2adr((int)this, index) + 0x10;
	if (src < *(char**)((char*)this + 8))
	{
		char* dst = src - 0x10;
		do
		{
			*(int*)dst = *(int*)src;
			*(int*)(dst + 4) = *(int*)(src + 4);
			*(int*)(dst + 8) = *(int*)(dst + 0x18);
			src += 0x10;
			dst += 0x10;
		} while (src < *(char**)((char*)this + 8));
	}
	*(char**)((char*)this + 8) -= 0x10;
}

// Forward declaration for callee at 0x00bcc760
int __cdecl sub_BCC760(lua_exception* L, void* o1, void* o2);

// FUNCTION: ROBLOXSTUDIO 0x00a352c0
int __cdecl lua_exception::equal(int index1, int index2)
{
	void* o1 = index2adr((int)this, index1);
	void* o2 = index2adr((int)this, index2);

	if (o1 == (void*)0x00EA7E68 || o2 == (void*)0x00EA7E68)
		return 0;

	return sub_BCC760(this, o1, o2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a3b400
void* __cdecl lua_exception::sub_A3B400(int arg1, int arg2)
{
	lua_exception* L = this;
	void* p = sub_A353E0(L, 8);
	if (p)
	{
		*(int*)p = arg1;
		*((int*)p + 1) = arg2;
	}

	sub_A35060(L, -10000, *(int*)0x0124EB2C);
	sub_A35BF0(L, -2);
	return p;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3b350
void* __cdecl lua_exception::sub_A3B350(int arg1, int arg2, int arg3)
{
	lua_exception* L = this;
	void* p = sub_A353E0(L, 12);
	if (p)
	{
		*(int*)p = arg1;
		*((int*)p + 1) = arg2;
		*((int*)p + 2) = arg3;
	}

	sub_A35060(L, -10000, *(int*)0x0124EADC);
	sub_A35BF0(L, -2);
	return p;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3b4a0
void* __cdecl lua_exception::sub_A3B4A0(int arg1, int arg2, int arg3)
{
	lua_exception* L = this;
	void* p = sub_A353E0(L, 12);
	if (p)
	{
		*(int*)p = arg1;
		*((int*)p + 1) = arg2;
		*((int*)p + 2) = arg3;
	}

	sub_A35060(L, -10000, *(int*)0x0124EB14);
	sub_A35BF0(L, -2);
	return p;
}

// Forward declarations
void __cdecl luaC_step(lua_exception* L);
void* __cdecl sub_BC95C0(lua_exception* L, int size, void* env);

// FUNCTION: ROBLOXSTUDIO 0x00a353e0
void* __cdecl sub_A353E0(lua_exception* L, int size)
{
	char* g = *(char**)((char*)L + 0x10);
	if (*(unsigned int*)(g + 0x44) >= *(unsigned int*)(g + 0x40))
	{
		luaC_step(L);
	}

	void* env;
	char* ci = *(char**)((char*)L + 0x14);
	if (ci == *(char**)((char*)L + 0x28))
	{
		env = *(void**)((char*)L + 0x48);
	}
	else
	{
		env = *(void**)(*(char**)(*(void**)(ci + 4)) + 0x0C);
	}

	void* u = sub_BC95C0(L, size, env);
	char* top = *(char**)((char*)L + 8);
	*(void**)top = u;
	*(int*)(top + 8) = 7;
	*(char**)((char*)L + 8) += 16;
	return (char*)u + 0x18;
}

void* __cdecl lua_exception::sub_A353E0(lua_exception* L, int size)
{
	return sub_A353E0(L, size);
}

void __cdecl sub_A45610(char* dest, const char* src, int size);

// FUNCTION: ROBLOXSTUDIO 0x00a377a0
void __cdecl lua_exception::sub_A377A0()
{
	*(int*)((char*)this + 8) = 0x00F12F2D;
	*(int*)((char*)this + 4) = 0x00F12F2D;
	*(const char**)((char*)this + 0x0C) = "tail";
	*(int*)((char*)this + 0x14) = -1;
	*(int*)((char*)this + 0x1C) = -1;
	*(int*)((char*)this + 0x20) = -1;
	*(const char**)((char*)this + 0x10) = "=(tail call)";
	sub_A45610((char*)this + 0x24, "=(tail call)", 0x3C);
	*(int*)((char*)this + 0x18) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


