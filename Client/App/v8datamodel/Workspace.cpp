#include "v8datamodel/Workspace.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009688c0
void* Workspace::getBasePtr()
{
	return reinterpret_cast<char*>(this) - 0x128;
}

extern "C" int __cdecl rbx_helper_0x7b3b40();

// FUNCTION: ROBLOXSTUDIO 0x00888300
int Workspace::method_00888300()
{
    return rbx_helper_0x7b3b40() + 6;
}

// FUNCTION: ROBLOXSTUDIO 0x009689f0
void* Workspace::getSomeField()
{
	void* v = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xB4);
	if (v != 0)
		return v;
	return *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xBC);
}

// FUNCTION: ROBLOXSTUDIO 0x00969740
bool Workspace::method_00969740()
{
	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x68) == 0 &&
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x64) == 2)
	{
		return true;
	}
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00969760
bool Workspace::method_00969760()
{
	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x68) == 2 &&
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x64) == 2)
	{
		return true;
	}
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00969fc0
bool Workspace::method_00969fc0()
{
    // Original assembly:
    //   cmp dword ptr [ecx + 0x70], 1
    //   jne 0x969fd2
    //   cmp byte ptr [ecx + 0x80], 0
    //   je 0x969fd2
    //   mov al, 1
    //   ret
    //   xor al, al
    //   ret
    if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x70) == 1 &&
        *reinterpret_cast<char*>(reinterpret_cast<char*>(this) + 0x80) != 0)
    {
        return true;
    }
    return false;
}

struct WorkspaceCallee007c4b50
{
	void method_007c4b50(void* arg);
};

// FUNCTION: ROBLOXSTUDIO 0x0099fe10
void Workspace::method_0099fe10()
{
	void* local = (void*)0x0099FD30;
	((WorkspaceCallee007c4b50*)this)->method_007c4b50(&local);
}

// FUNCTION: ROBLOXSTUDIO 0x009a11a0
void Workspace::method_009a11a0()
{
	void* local = (void*)0x009a10c0;
	((WorkspaceCallee007c4b50*)this)->method_007c4b50(&local);
}

// FUNCTION: ROBLOXSTUDIO 0x0096bbd0
struct Workspace_method_0096d160 { void method_0096d160(); };
extern "C" void __cdecl rbx_sub_006B9740(int, const char*);
typedef unsigned char (__cdecl *WorkspaceAssertCallback_t)(const char*, const char*, int);

void Workspace::method_0096bbd0()
{
	((Workspace_method_0096d160*)this)->method_0096d160();

	unsigned char flag = *(unsigned char*)0x012DE657;
	char* world = *(char**)((char*)this + 0x148);

	if (flag != 0)
	{
		if (*(unsigned char*)(world + 0x30) != 0)
		{
			WorkspaceAssertCallback_t callback = *(WorkspaceAssertCallback_t*)0x012DE694;

			if (callback == 0)
				goto L_fail;

			if (callback("!inStepCode",
				"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\V8World/World.h",
				0xB2) != 0)
				goto L_end;

			flag = *(unsigned char*)0x012DE657;

		L_fail:
			rbx_sub_006B9740(flag,
				"!inStepCode file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\V8World/World.h line: 178");
		}
	}

L_end:
	*(int*)(world + 0x38) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
