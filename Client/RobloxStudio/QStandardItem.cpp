#include "QStandardItem.h"

#include "decomp.h"



void __stdcall sub_4B0630(void* end, int arg);

// FUNCTION: ROBLOXSTUDIO 0x004ae3e0
void QStandardItem::clear()
{
	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 8) == 0)
		return;

	int count = *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 4);
	int* data = *reinterpret_cast<int**>(reinterpret_cast<char*>(this) + 0x14);
	sub_4B0630(data + count, 0);

	int* it = *reinterpret_cast<int**>(reinterpret_cast<char*>(this) + 0x14);
	int* end = it + *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 4);
	if (it != end)
	{
		do
		{
			*it = 0;
			++it;
		} while (it != end);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


