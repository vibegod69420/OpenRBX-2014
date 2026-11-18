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

// AUTO-GENERATED IMPLEMENTATIONS


