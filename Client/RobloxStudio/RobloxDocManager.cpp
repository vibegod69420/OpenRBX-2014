#include "RobloxDocManager.h"

#include "decomp.h"



struct RobloxDocManagerDocListData
{
	void* unk00;      // 0x00
	int* items;       // 0x04
	char pad08[0x2C]; // 0x08
	int state;        // 0x34
	char pad38[0x04]; // 0x38
	int count;        // 0x3C
};

struct RobloxDocManagerDocList
{
	RobloxDocManagerDocListData* data; // 0x00
	void sub_4781C0();
};

struct RobloxDocManager_Callees
{
	void sub_4A5A90(int index);
};

// FUNCTION: ROBLOXSTUDIO 0x004a5070
void RobloxDocManager::CloseAllDocuments()
{
	RobloxDocManagerDocList* list = (RobloxDocManagerDocList*)((char*)this + 0x0C);
	RobloxDocManagerDocListData* data = list->data;

	if (data->count != 0)
	{
		do
		{
			if (data->state != 1)
				list->sub_4781C0();

			data = list->data;
			((RobloxDocManager_Callees*)this)->sub_4A5A90(data->items[-1]);
			data = list->data;
		}
		while (data->count != 0);
	}
}

struct RobloxDocManager_SaveCallee
{
	bool sub_4ECB70(int doc, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x004a4fc0
bool RobloxDocManager::SaveAllDocuments()
{
	RobloxDocManagerDocList* list = (RobloxDocManagerDocList*)((char*)this + 0x0C);
	RobloxDocManagerDocListData* data = list->data;

	if (data->count != 0)
	{
		do
		{
			if (data->state != 1)
				list->sub_4781C0();

			data = list->data;
			if (!(*(RobloxDocManager_SaveCallee**)((char*)this + 8))->sub_4ECB70(data->items[-1], 1))
				return false;

			data = list->data;
		}
		while (data->count != 0);
	}

	return true;
}

// AUTO-GENERATED IMPLEMENTATIONS


