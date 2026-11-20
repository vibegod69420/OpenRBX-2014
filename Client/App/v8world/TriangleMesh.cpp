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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
