#include "v8kernel/btBvhTriangleMeshShape.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0059b8a0
int btBvhTriangleMeshShape::getConst17002256() const
{
	return 17002256;
}

// FUNCTION: ROBLOXSTUDIO 0x0059b8b0
int btBvhTriangleMeshShape::getConst60() const
{
	return 60;
}

// FUNCTION: ROBLOXSTUDIO 0x005b87e0
char* btBvhTriangleMeshShape::getBufferOffset30_10() const
{
	return buf_0030 + 16;
}

extern int g_btBvhShapeDeallocCounter; // 0x01318FC0
extern void (__cdecl* g_btBvhShapeFreeFunc)(void*); // 0x012BFC70

class btBvhShapeElement
{
public:
	virtual void destroy(int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0059b7e0
void btBvhTriangleMeshShape::destroyInternalBuffer()
{
	int count = *reinterpret_cast<int*>(this->_pad_buf_0030 + 4);
	if (count > 0)
	{
		int offset = 0;
		do
		{
			char* base = *reinterpret_cast<char**>(this->_pad_buf_0030 + 0x0c);
			reinterpret_cast<btBvhShapeElement*>(base + offset)->destroy(0);
			offset += 0x50;
			--count;
		}
		while (count != 0);
	}

	char* buffer = *reinterpret_cast<char**>(this->_pad_buf_0030 + 0x0c);
	if (buffer)
	{
		if (this->_pad_buf_0030[0x10] != 0)
		{
			++g_btBvhShapeDeallocCounter;
			g_btBvhShapeFreeFunc(buffer);
		}
		*reinterpret_cast<char**>(this->_pad_buf_0030 + 0x0c) = 0;
	}

	this->_pad_buf_0030[0x10] = 1;
	*reinterpret_cast<char**>(this->_pad_buf_0030 + 0x0c) = 0;
	*reinterpret_cast<int*>(this->_pad_buf_0030 + 4) = 0;
	*reinterpret_cast<int*>(this->_pad_buf_0030 + 8) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


