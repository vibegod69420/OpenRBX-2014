#include "ReplaceDialog.h"

#include "decomp.h"



__declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

// FUNCTION: ROBLOXSTUDIO 0x005859b0
void* ReplaceDialog::getReplaceValue()
{
	struct Data
	{
		char pad[0x18];
		void* value;
	};

	struct ScopedPointer
	{
		Data* d;

		Data* operator->() const
		{
			if (!d)
			{
				qt_assert(
					"d",
					"d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h",
					90);
			}
			return d;
		}
	};

	ScopedPointer* ptr = (ScopedPointer*)((char*)this + 4);
	Data* p = ptr->operator->();
	if (p->value)
	{
		p = ptr->operator->();
		return p->value;
	}

	return (void*)0x00F1D6C8;
}

// AUTO-GENERATED IMPLEMENTATIONS


