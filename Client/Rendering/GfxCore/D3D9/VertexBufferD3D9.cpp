#include "VertexBufferD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct VertexBufferTableEntry
{
	void* ptr;
	void* data;
};

extern VertexBufferTableEntry g_vertexBufferTable[];

void* sub_5E5560(void* device, void* elementCount, void* elementSize, unsigned int index);

// FUNCTION: ROBLOXSTUDIO 0x005e5140
void VertexBufferD3D9::upload()
{
	unsigned int index = ((unsigned int*)this)[12];
	if (g_vertexBufferTable[index].ptr == 0)
	{
		void* deviceWrapper = ((void**)this)[1];
		((void**)this)[13] = sub_5E5560(
			((void**)deviceWrapper)[5],
			((void**)this)[10],
			((void**)this)[11],
			index);
	}
}

struct IUnknownStub
{
	virtual long __stdcall QueryInterface(void* riid, void** ppvObject) = 0;
	virtual unsigned long __stdcall AddRef() = 0;
	virtual unsigned long __stdcall Release() = 0;
};

// FUNCTION: ROBLOXSTUDIO 0x005e5110
void VertexBufferD3D9::release()
{
	IUnknownStub* resource = (IUnknownStub*)((void**)this)[13];
	if (resource != 0)
	{
		unsigned int index = ((unsigned int*)this)[12];
		if (g_vertexBufferTable[index].ptr == 0)
		{
			resource->Release();
			((void**)this)[13] = 0;
		}
	}
}

struct IDirect3DVertexBuffer9Stub
{
	virtual long __stdcall QueryInterface(void* riid, void** ppvObject) = 0;
	virtual unsigned long __stdcall AddRef() = 0;
	virtual unsigned long __stdcall Release() = 0;
	virtual long __stdcall GetDevice(void** ppDevice) = 0;
	virtual long __stdcall SetPrivateData(const void* refguid, const void* pData, unsigned long SizeOfData, unsigned long Flags) = 0;
	virtual long __stdcall GetPrivateData(const void* refguid, void* pData, unsigned long* pSizeOfData) = 0;
	virtual long __stdcall FreePrivateData(const void* refguid) = 0;
	virtual unsigned long __stdcall SetPriority(unsigned long PriorityNew) = 0;
	virtual unsigned long __stdcall GetPriority() = 0;
	virtual void __stdcall PreLoad() = 0;
	virtual unsigned long __stdcall GetType() = 0;
	virtual long __stdcall Lock(unsigned int OffsetToLock, unsigned int SizeToLock, void** ppbData, unsigned long Flags) = 0;
	virtual long __stdcall Unlock() = 0;
};

// FUNCTION: ROBLOXSTUDIO 0x005e5070
void VertexBufferD3D9::unlock()
{
	IDirect3DVertexBuffer9Stub* buffer = (IDirect3DVertexBuffer9Stub*)((void**)this)[13];
	buffer->Unlock();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
