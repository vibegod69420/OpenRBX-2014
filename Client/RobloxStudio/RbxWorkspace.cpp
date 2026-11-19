#include "RbxWorkspace.h"

#include "decomp.h"



struct RbxWorkspaceInner
{
    char _pad[0x18];
    void *view;
};

__declspec(dllimport) void __cdecl qt_assert(const char *assertion, const char *file, int line);

template <class T>
class QScopedPointer
{
public:
    T *d;

    T *operator->() const
    {
        if (!d)
            qt_assert("d", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90);
        return d;
    }
};

// FUNCTION: ROBLOXSTUDIO 0x005864e0
void *RbxWorkspace::getView()
{
    QScopedPointer<RbxWorkspaceInner> &d_ptr = *(QScopedPointer<RbxWorkspaceInner> *)((char *)this + 4);

    if (d_ptr->view)
        return d_ptr->view;

    return (void *)0x012C0968;
}

// FUNCTION: ROBLOXSTUDIO 0x0047b7a0
void RbxWorkspace::reset()
{
	unsigned int cookie = *(unsigned int *)((char *)this + 0x10);
	if (cookie)
	{
		if ((cookie & 1) == 0)
		{
			void *data = (char *)this + 0x18;
			void (__cdecl *callback)(void *, void *, int) =
				*(void (__cdecl **)(void *, void *, int))(cookie & ~1u);
			if (callback)
				callback(data, data, 2);
		}
		*(unsigned int *)((char *)this + 0x10) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


