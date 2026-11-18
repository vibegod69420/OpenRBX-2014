#include "ToggleLocalSpaceVerb.h"

#include "decomp.h"



typedef unsigned char (__cdecl *AssertCallback_t)(const char*, const char*, int);

extern unsigned char byte_12DE657;
extern AssertCallback_t dword_12DE694;
extern unsigned char byte_11EDC11;
extern unsigned char byte_12E357D;

void __cdecl sub_6B9740(int cond, const char* msg);

__declspec(dllimport) void* __cdecl sub_E105BC(void* cmd);

class TypeCheckObject
{
public:
    __declspec(dllimport) unsigned char __thiscall sub_E10524(void* arg);
};

extern TypeCheckObject obj_12D1FC0;
extern TypeCheckObject obj_12D1FA0;

// FUNCTION: ROBLOXSTUDIO 0x005247e0
unsigned char ToggleLocalSpaceVerb::isChecked()
{
    void* workspace = *(void**)(*(char**)((char*)this + 0x0C) + 0xBA0);

    unsigned char flag = byte_12DE657;
    if (flag)
    {
        if (*(void**)((char*)workspace + 0x1B8) == 0)
        {
            if (dword_12DE694)
            {
                if (dword_12DE694("currentCommand.get()!=NULL",
                                  "D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
                                  0x114))
                {
                    goto afterAssert;
                }
                flag = byte_12DE657;
            }

            sub_6B9740((int)flag,
                       "currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
        }
    }

afterAssert:
    {
        void* currentCommand = *(void**)((char*)workspace + 0x1B8);
        if (!currentCommand)
            return 0;

        if (obj_12D1FC0.sub_E10524(sub_E105BC(currentCommand)))
            return byte_11EDC11;

        {
            unsigned char result = obj_12D1FA0.sub_E10524(sub_E105BC(currentCommand));
            if (result)
                return byte_12E357D;
            return 0;
        }
    }
}

// AUTO-GENERATED IMPLEMENTATIONS


