#include "ShaderProgramFFPD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x005e6910
int ShaderProgramFFPD3D9::getConst1() const
{
	return 1;
}

struct StdStringData
{
	union
	{
		char* ptr;
		char buf[16];
	};
	unsigned int size;
	unsigned int capacity;
};

// FUNCTION: ROBLOXSTUDIO 0x005e6ce0
void __cdecl ShaderProgramFFPD3D9::clearStdString()
{
	StdStringData* str = (StdStringData*)this;
	str->size = 0;
	if (str->capacity < 16)
		str->buf[0] = 0;
	else
		str->ptr[0] = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x005e7400

typedef void* (__stdcall *PFN_LoadLibraryA)(const char*);

extern void* g_d3dx9Module;           // 0x12d97ac
extern PFN_LoadLibraryA g_pfnLoadLibraryA; // 0xe10148

extern StdStringData* __cdecl sub_6B98C0(StdStringData* dest, const char* fmt, int version);
extern void __cdecl sub_CF6522(void* ptr);

void* ShaderProgramFFPD3D9::loadD3DXModule()
{
	void* module = g_d3dx9Module;
	if (module)
		return module;

	PFN_LoadLibraryA loadLibrary = g_pfnLoadLibraryA;
	StdStringData str;

	for (int version = 43; version >= 24; --version)
	{
		StdStringData* formatted = sub_6B98C0(&str, "d3dx9_%d.dll", version);
		const char* dllName;
		if (formatted->capacity < 16)
			dllName = formatted->buf;
		else
			dllName = formatted->ptr;

		module = loadLibrary(dllName);
		g_d3dx9Module = module;

		if (str.capacity >= 16)
		{
			sub_CF6522(str.ptr);
			module = g_d3dx9Module;
		}

		if (module)
		{
			formatted = sub_6B98C0(&str, "D3DCompiler_%d.dll", version);
			if (formatted->capacity < 16)
				dllName = formatted->buf;
			else
				dllName = formatted->ptr;

			loadLibrary(dllName);

			if (str.capacity >= 16)
				sub_CF6522(str.ptr);

			return g_d3dx9Module;
		}
	}

	return module;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
