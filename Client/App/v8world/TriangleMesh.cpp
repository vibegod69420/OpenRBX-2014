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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
