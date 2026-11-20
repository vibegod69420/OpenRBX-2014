#include "v8world/TriangleMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099d310
float TriangleMesh::getGridSize() const
{
	return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x2C);
}

namespace
{
struct TriangleMeshCallTarget
{
	virtual void v0();
	virtual void v1();
	virtual void v2(int arg);
};
}

// FUNCTION: ROBLOXSTUDIO 0x00b6c280
bool TriangleMesh::update()
{
	void* p18 = reinterpret_cast<void**>(this)[6];
	if (p18)
	{
		void* p = reinterpret_cast<void**>(p18)[6];
		TriangleMeshCallTarget* target = reinterpret_cast<TriangleMeshCallTarget**>(this)[4];
		p = *reinterpret_cast<void**>(p);
		target->v2(*reinterpret_cast<int*>(p));
		return true;
	}
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x0099d2d0
int TriangleMesh::getTriangleCount() const
{
	struct TriangleElement
	{
		char data[36];
	};

	struct TriangleArray
	{
		char pad[0x18];
		TriangleElement* begin;
		TriangleElement* end;
	};

	struct TriangleMeshData
	{
		char pad[0x18];
		TriangleArray* array;
	};

	TriangleMeshData* meshData = *reinterpret_cast<TriangleMeshData* const*>(
		reinterpret_cast<const char*>(this) + 0x28);
	TriangleArray* array = meshData->array;
	return static_cast<int>(array->end - array->begin);
}

void* sub_B5BD60(void*);

// FUNCTION: ROBLOXSTUDIO 0x0099c7f0
void* TriangleMesh::getPart() const
{
	return sub_B5BD60(const_cast<TriangleMesh*>(this));
}

void* sub_B5A020(void*);

// FUNCTION: ROBLOXSTUDIO 0x0099c800
void* TriangleMesh::getPrimitive() const
{
	return sub_B5A020(const_cast<TriangleMesh*>(this));
}

// FUNCTION: ROBLOXSTUDIO 0x0099d320
void* TriangleMesh::getGrid() const
{
	return reinterpret_cast<char*>(
		*reinterpret_cast<void* const*>(reinterpret_cast<const char*>(this) + 0x100)) + 4;
}

// FUNCTION: ROBLOXSTUDIO 0x00b6ffd0
int sub_B71570(int, int);

int __cdecl TriangleMesh::getValue()
{
	return sub_B71570((int)this, 0);
}

void sub_A38A50(void*, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00b70040
void __cdecl TriangleMesh::stringGfindRenamed()
{
	sub_A38A50(this, "'string.gfind' was renamed to 'string.gmatch'");
}

int sub_A35150(void*);
void sub_A36E40(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6ebd0
void __cdecl TriangleMesh::checkStack()
{
	sub_A36E40(this, sub_A35150(this));
}

int sub_A34EF0(void*, int, int);
void sub_A35650(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6e380
int __cdecl TriangleMesh::getOptInt3()
{
	sub_A35650(this, sub_A34EF0(this, 3, 0));
	return 1;
}

int sub_A35780(void*);
void sub_A356D0(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b6ebf0
int __cdecl TriangleMesh::checkCondition()
{
	if (sub_A35780(this))
		sub_A356D0(this);

	return 1;
}

void sub_B6ECF0(void*);
void sub_A39240(void*, const char*, void*);

// FUNCTION: ROBLOXSTUDIO 0x00b6f170
int __cdecl TriangleMesh::openCoroutine()
{
	sub_B6ECF0(this);
	sub_A39240(this, "coroutine", reinterpret_cast<void*>(0x00ED0EF0));
	return 2;
}

void sub_B70830(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b70a80
int __cdecl TriangleMesh::openString()
{
	sub_A39240(this, "string", reinterpret_cast<void*>(0x00ED1330));
	sub_B70830(this);
	return 1;
}

double __cdecl sub_A38810(void*, int);
extern double(__cdecl* dword_E104FC)(double);
void __cdecl sub_A356F0(void*, double);

// FUNCTION: ROBLOXSTUDIO 0x00b71950
int __cdecl TriangleMesh::mathOp()
{
	sub_A356F0(this, dword_E104FC(sub_A38810(this, 1)));
	return 1;
}

int sub_A38710(void*, int);
int sub_A35810(void*, int, int);
void sub_A35560(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6e2c0
int __cdecl TriangleMesh::func_B6E2C0()
{
	void* state = this;
	sub_A38710(state, 1);
	sub_A38710(state, 2);
	sub_A35560(state, sub_A35810(state, 1, 2));
	return 1;
}

void sub_A38960(void*, int, int);
void sub_A35D10(void*, int);
void sub_A35850(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6e300
int __cdecl TriangleMesh::func_B6E300()
{
	sub_A38960(this, 1, 5);
	sub_A38710(this, 2);
	sub_A35D10(this, 2);
	sub_A35850(this, 1);
	return 1;
}

void sub_A357B0(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6f130
int __cdecl TriangleMesh::func_B6F130()
{
	sub_A38960(this, 1, 5);
	sub_A357B0(this, 0xFFFFD8ED);
	sub_A357B0(this, 1);
	sub_A356D0(this);
	return 3;
}

// FUNCTION: ROBLOXSTUDIO 0x00b6f060
int __cdecl TriangleMesh::func_B6F060()
{
	sub_A38960(this, 1, 5);
	sub_A357B0(this, 0xFFFFD8ED);
	sub_A357B0(this, 1);
	sub_A35650(this, 0);
	return 3;
}

void sub_A358D0(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6e340
int __cdecl TriangleMesh::func_B6E340()
{
	sub_A38960(this, 1, 5);
	sub_A38710(this, 2);
	sub_A38710(this, 3);
	sub_A35D10(this, 3);
	sub_A358D0(this, 1);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b6f380
int __cdecl TriangleMesh::func_B6F380()
{
	sub_A38960(this, 1, 5);
	sub_A38A50(this, "'setn' is obsolete");
	sub_A357B0(this, 1);
	return 1;
}

const char* sub_A39080(void*, int, int, int);
int sub_A38C20(void*, const char*);
void sub_A351C0(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6e5f0
int __cdecl TriangleMesh::func_B6E5F0()
{
	void* state = this;
	if (sub_A38C20(state, sub_A39080(state, 1, 0, 0)) == 0)
		return 1;

	sub_A356D0(state);
	sub_A351C0(state, -2);
	return 2;
}

int sub_A38740(void*, int);
void sub_A35890(void*, int, int);
int sub_A360D0(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6efa0
int __cdecl TriangleMesh::func_B6EFA0()
{
	int idx = sub_A38740(this, 2) + 1;
	sub_A38960(this, 1, 5);
	sub_A35650(this, idx);
	sub_A35890(this, 1, idx);
	return sub_A360D0(this, -1) != 0 ? 2 : 0;
}

int sub_A387B0(void*, int, int);
void sub_A35580(void*, void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6fff0
int __cdecl TriangleMesh::func_B6FFF0()
{
	void* state = this;
	sub_A387B0(state, 1, 0);
	sub_A387B0(state, 2, 0);
	sub_A35D10(state, 2);
	sub_A35650(state, 0);
	sub_A35580(state, reinterpret_cast<void*>(0x00B708F0), 3);
	return 1;
}

void* sub_A36080(void*, int);
void sub_A385A0(void*, int, const char*);
int sub_B6EDF0(void*, void*);
void sub_A35710(void*, void*);

// FUNCTION: ROBLOXSTUDIO 0x00b6ea30
int __cdecl TriangleMesh::func_B6EA30()
{
	void* co = sub_A36080(this, 1);
	if (!co)
		sub_A385A0(this, 1, "coroutine expected");

	sub_A35710(this, reinterpret_cast<void**>(0x00ED0EE0)[sub_B6EDF0(this, co)]);
	return 1;
}

int sub_B70AB0(void*, const char*, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00b71520
int __cdecl TriangleMesh::func_B71520(const char* s, const char* p, int what)
{
	int level = *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x0C);
	if (level >= 32)
	{
		sub_A38A50(*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x08), "too many captures");
	}

	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x14 + level * 8) = what;
	*reinterpret_cast<const char**>(reinterpret_cast<char*>(this) + 0x10 + level * 8) = s;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x0C) = level + 1;

	int res = sub_B70AB0(this, s, p);
	if (res == 0)
	{
		--(*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x0C));
	}

	return res;
}

int sub_A35350(void*);
int sub_A35220(void*, int);
void sub_A36120(void*, void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6eb00
int __cdecl TriangleMesh::func_B6EB00()
{
	void* state = this;
	int saved = sub_A35350(state);

	if (sub_A360D0(state, 1) != 6 || sub_A35220(state, 1))
		sub_A385A0(state, 1, "Lua function expected");

	sub_A357B0(state, 1);
	sub_A36120(state, (void*)saved, 1);
	return 1;
}

int sub_A39050(void*, int, int);
int sub_A35290(void*, int);
void sub_A39300(void*, int);
void sub_A34DD0(void*, int);
int sub_A34ED0(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b6e0a0
int __cdecl TriangleMesh::func_B6E0A0()
{
	int opt = sub_A39050(this, 2, 1);
	sub_A35D10(this, 1);
	if (sub_A35290(this, 1) && opt > 0)
	{
		sub_A39300(this, opt);
		sub_A357B0(this, 1);
		sub_A34DD0(this, 2);
	}
	return sub_A34ED0(this);
}

int sub_B6EC20(void*, void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6eff0
int __cdecl TriangleMesh::func_B6EFF0()
{
	void* co = sub_A36080(this, 0xFFFFD8ED);
	int n = sub_A35150(this);
	int res = sub_B6EC20(this, co, n);
	if (res >= 0)
		return res;

	if (sub_A35290(this, -1))
	{
		sub_A39300(this, 1);
		sub_A351C0(this, -2);
		sub_A34DD0(this, 2);
	}
	sub_A34ED0(this);
	return res;
}

// FUNCTION: ROBLOXSTUDIO 0x00b70f70
const char* __cdecl TriangleMesh::func_B70F70(const char* s, const char* p)
{
	if (*p == 0 || *(p + 1) == 0)
		sub_A38A50(*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 8), "unbalanced pattern");

	if (*s != *p)
		return 0;

	{
		int b = *p;
		int e = *(p + 1);
		const char* src_end = *reinterpret_cast<const char**>(reinterpret_cast<char*>(this) + 4);
		int cont = 1;

		while (++s < src_end)
		{
			if (*s == e)
			{
				if (--cont == 0)
					return s + 1;
			}
			else if (*s == b)
			{
				cont++;
			}
		}
	}

	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00b6f630
int sub_A35480(void*, int);
void sub_A38930(void*, int, const char*);
void sub_B6F690(void*, int, int);

int __cdecl TriangleMesh::func_B6F630()
{
	void* state = this;
	sub_A38960(state, 1, 5);
	int v = sub_A35480(state, 1);
	sub_A38930(state, 40, (const char*)0x00F12F2D);
	if (sub_A360D0(state, 2) > 0)
	{
		sub_A38960(state, 2, 6);
	}
	sub_A35D10(state, 2);
	sub_B6F690(state, 1, v);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00b6aec0
} // namespace RBX
#include <intrin.h>
namespace RBX {

void* __cdecl sub_B6A570();
void __fastcall sub_40ED30(void*);
void* __fastcall sub_48AF30(void*);
void* __fastcall sub_40FB10(void*);
extern void (__stdcall* dword_E10198)(void*);

void* __cdecl TriangleMesh::func_B6AEC0()
{
	void* pool = sub_B6A570();
	sub_40ED30(pool);

	void* node = *((void**)pool + 2);
	if (node)
	{
		*((void**)pool + 2) = *(void**)node;
	}
	else
	{
		node = sub_48AF30((char*)pool + 8);
	}

	long old = _InterlockedExchangeAdd((long volatile*)pool, 0x80000000);
	if ((old & 0x40000000) == 0 && old > (long)0x80000000)
	{
		if (_interlockedbittestandset((long volatile*)pool, 30) == 0)
		{
			dword_E10198(sub_40FB10(pool));
		}
	}

	return node;
}

void sub_A34E50(void*, int, int);
void sub_A35690(void*, const char*, int);
void sub_A35BF0(void*, int);
void sub_A35B70(void*, int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00b70830
void __cdecl TriangleMesh::func_B70830()
{
	sub_A34E50(this, 0, 1);
	sub_A35690(this, (const char*)0x00F12F2D, 0);
	sub_A357B0(this, -2);
	sub_A35BF0(this, -2);
	sub_A35D10(this, -2);
	sub_A357B0(this, -2);
	sub_A35B70(this, -2, (const char*)0x00E53324);
	sub_A35D10(this, -2);
}

int __cdecl sub_B6D0D0(void* a1, void* a2, void* a3, void* a4);
void* __cdecl sub_CF6804(void* dst, int val, unsigned int size);

extern void* (__cdecl* dword_E10668)(unsigned int, unsigned int);
extern void (__cdecl* dword_E104F4)(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b6d060
int __cdecl TriangleMesh::func_B6D060(void* a2, void* a3)
{
	void* block = dword_E10668(1u, 0x40008u);

	sub_CF6804((char*)block + 4, 0, 0x20000u);
	sub_CF6804((char*)block + 0x20004, 0xFF, 0x20000u);

	*(void**)((char*)block + 0x40004) = this;
	*(void**)block = this;

	int result = sub_B6D0D0(block, this, a2, a3);

	dword_E104F4(block);

	return result;
}

// FUNCTION: ROBLOXSTUDIO 0x00b6eb60
int __cdecl TriangleMesh::func_B6EB60()
{
	void* state = this;
	int saved = sub_A35350(state);

	if (sub_A360D0(state, 1) != 6 || sub_A35220(state, 1))
		sub_A385A0(state, 1, "Lua function expected");

	sub_A357B0(state, 1);
	sub_A36120(state, (void*)saved, 1);
	sub_A35580(state, reinterpret_cast<void*>(0x00B6EFF0), 1);
	return 1;
}

int sub_A38BC0(void*, int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00b6e150
int __cdecl TriangleMesh::setMetatable()
{
	int type = sub_A360D0(this, 2);
	sub_A38960(this, 1, 5);

	if (type != 0 && type != 5)
	{
		sub_A385A0(this, 2, "nil or table expected");
	}

	if (sub_A38BC0(this, 1, "__metatable"))
	{
		sub_A38A50(this, "cannot change a protected metatable");
	}

	sub_A35D10(this, 2);
	sub_A35BF0(this, 1);
	return 1;
}

void* sub_A36080(void*, int);
void sub_A385A0(void*, int, const char*);
int sub_A35150(void*);
int sub_B6EC20(void*, void*, int);
void sub_A35560(void*, int);
void sub_A351C0(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6ea80
int __cdecl TriangleMesh::func_B6EA80()
{
	void* co = sub_A36080(this, 1);
	if (!co)
		sub_A385A0(this, 1, "coroutine expected");

	int res = sub_B6EC20(this, co, sub_A35150(this) - 1);
	if (res < 0)
	{
		sub_A35560(this, 0);
		sub_A351C0(this, -2);
		return 2;
	}

	sub_A35560(this, 1);
	sub_A351C0(this, -1 - res);
	return res + 1;
}

void sub_A34D20(void*, int, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6f1a0
int __cdecl TriangleMesh::func_B6F1A0()
{
	sub_A38960(this, 1, 5);
	int v = sub_A35480(this, 1);
	sub_A38960(this, 2, 6);

	int i = 1;
	if (v < i)
	{
	}
	else
	{
		do
		{
			sub_A357B0(this, 2);
			sub_A35650(this, i);
			sub_A35890(this, 1, i);
			sub_A34D20(this, 2, 1);
			if (sub_A360D0(this, -1))
				return 1;
			sub_A35D10(this, -2);
			++i;
		}
		while (i <= v);
	}

	return 0;
}

int sub_A35440(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b6f230
int __cdecl TriangleMesh::func_B6F230()
{
	sub_A38960(this, 1, 5);
	sub_A38960(this, 2, 6);
	sub_A356D0(this);
	if (sub_A35440(this, 1))
	{
		do
		{
			sub_A357B0(this, 2);
			sub_A357B0(this, -3);
			sub_A357B0(this, -3);
			sub_A34D20(this, 2, 1);
			if (sub_A360D0(this, -1))
				return 1;
			sub_A35D10(this, -3);
		}
		while (sub_A35440(this, 1));
	}
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
