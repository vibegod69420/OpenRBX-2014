#include "v8datamodel/ContentProviderJob.h"

#include "decomp.h"

namespace RBX {

struct ContentProviderJobData
{
	char pad_0[0x0C];
	int (__cdecl *callback)(void *context, int a2, int a3, int a4);
	void *context;
	char pad_14[0x30];
	int bytesProcessed;
};

void __cdecl ContentProviderJob_SetState(ContentProviderJob *job, int state);

// FUNCTION: ROBLOXSTUDIO 0x00bc6400
int __cdecl ContentProviderJob::process(int a2, int a3, int a4)
{
	ContentProviderJobData *data = *(ContentProviderJobData **)((char *)this + 0x10);
	int result = data->callback(data->context, a2, a3, a4);

	if (result == 0 && a4 != 0)
	{
		ContentProviderJob_SetState(this, 4);
	}

	data->bytesProcessed += a4 - a3;
	return result;
}

struct ContentProviderJobEntry
{
	int data;
	int begin;
	int end;
};

// FUNCTION: ROBLOXSTUDIO 0x00bc66d0
int __cdecl ContentProviderJob::getData(int a2, int a3)
{
	int count = *(int *)((char *)this + 0x38);
	int i = 0;
	if (count > 0)
	{
		ContentProviderJobEntry *entries = *(ContentProviderJobEntry **)((char *)this + 0x18);
		int *p = &entries[0].end;
		do
		{
			if (p[-1] > a3)
				return 0;

			if (a3 < p[0])
			{
				--a2;
				if (a2 == 0)
					return entries[i].data + 0x10;
			}

			++i;
			p += 3;
		} while (i < count);
	}

	return 0;
}

struct ContentProviderJobInternalOwner;

struct ContentProviderJobInternalNode
{
	char pad0[4];
	int field4;
	ContentProviderJobInternalNode *field8;
	ContentProviderJobInternalOwner *fieldC;
};

struct ContentProviderJobInternalOwner
{
	char pad0[0x10];
	ContentProviderJobInternalNode *field10;
};

struct ContentProviderJobInternalRequest
{
	int field0;
	char pad4[0x0C];
	ContentProviderJobInternalRequest *next;
	ContentProviderJobInternalNode *node;
};

// FUNCTION: ROBLOXSTUDIO 0x00bbbcf0
void __cdecl ContentProviderJob::relink(ContentProviderJob *a2, void *a3)
{
	(*(ContentProviderJobInternalNode **)((char *)a2 + 0x14))->field4 = 1;

	ContentProviderJobInternalNode *thisNode = *(ContentProviderJobInternalNode **)((char *)this + 0x14);
	ContentProviderJobInternalNode *a2Node = *(ContentProviderJobInternalNode **)((char *)a2 + 0x14);
	if (thisNode == a2Node)
		return;

	thisNode->fieldC->field10 = a2Node->field8;

	a2Node = *(ContentProviderJobInternalNode **)((char *)a2 + 0x14);
	thisNode = *(ContentProviderJobInternalNode **)((char *)this + 0x14);
	a2Node->field8 = thisNode->field8;

	ContentProviderJobInternalRequest *req = (ContentProviderJobInternalRequest *)a3;
	thisNode = *(ContentProviderJobInternalNode **)((char *)this + 0x14);
	if (req)
	{
		do
		{
			if (req->node == thisNode)
			{
				req->field0 = 0;
				req->node = *(ContentProviderJobInternalNode **)((char *)a2 + 0x14);
			}
			req = req->next;
		} while (req);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00bbbd50
void __cdecl ContentProviderJob::detach(ContentProviderJob *a2, void *a3)
{
	(*(ContentProviderJobInternalNode **)((char *)a2 + 0x14))->field4 = 0;

	ContentProviderJobInternalNode *thisNode = *(ContentProviderJobInternalNode **)((char *)this + 0x14);
	ContentProviderJobInternalNode *a2Node = *(ContentProviderJobInternalNode **)((char *)a2 + 0x14);
	if (thisNode == a2Node)
		return;

	a2Node->fieldC->field10 = thisNode->field8;

	thisNode = *(ContentProviderJobInternalNode **)((char *)this + 0x14);
	a2Node = *(ContentProviderJobInternalNode **)((char *)a2 + 0x14);
	a2Node->fieldC = thisNode->fieldC;

	ContentProviderJobInternalRequest *req = (ContentProviderJobInternalRequest *)a3;
	thisNode = *(ContentProviderJobInternalNode **)((char *)this + 0x14);
	if (req)
	{
		do
		{
			if (req->node == thisNode)
			{
				req->field0 = 0;
				req->node = *(ContentProviderJobInternalNode **)((char *)a2 + 0x14);
			}
			req = req->next;
		} while (req);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
