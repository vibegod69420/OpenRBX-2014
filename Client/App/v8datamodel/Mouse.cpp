#include "v8datamodel/Mouse.h"

#include "decomp.h"

namespace RBX {

class MouseTargetFilter
{
public:
	bool isActive();
};

// FUNCTION: ROBLOXSTUDIO 0x007bcc90
bool Mouse::isTargetFilterActive()
{
	MouseTargetFilter* targetFilter = *reinterpret_cast<MouseTargetFilter**>(reinterpret_cast<char*>(this) + 0xC74);
	if (targetFilter)
		return targetFilter->isActive();

	return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + 0xD1D);
}

struct MouseVt
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual void v26();
	virtual void v27();
	virtual void v28();
	virtual void v29();
	virtual void v30();
	virtual void v31();
	virtual void v32();
	virtual void v33();
	virtual void v34();
	virtual void v35();
	virtual void v36();
	virtual void v37();
	virtual void v38();
	virtual void v39();
	virtual void v40();
	virtual void v41();
	virtual void v42();
};

// FUNCTION: ROBLOXSTUDIO 0x00b0b970
int Mouse::getY()
{
	reinterpret_cast<MouseVt*>(this)->v42();

	void* object = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xB0);
	if (object)
		return static_cast<int>(*reinterpret_cast<float*>(reinterpret_cast<char*>(object) + 0x70));

	return -1;
}

class MouseBaseInit
{
public:
	void init();
};

// FUNCTION: ROBLOXSTUDIO 0x00b1a8d0
Mouse::Mouse()
{
	reinterpret_cast<MouseBaseInit*>(this)->init();

	*reinterpret_cast<int*>(this) = 0x00EC5574;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 4) = 0x00EC5624;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x18) = 0x00EC562C;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x1C) = 0x00EC5638;
}

// FUNCTION: ROBLOXSTUDIO 0x00b0b950
int Mouse::getX()
{
	reinterpret_cast<MouseVt*>(this)->v42();

	void* object = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xB0);
	if (object)
		return static_cast<int>(*reinterpret_cast<float*>(reinterpret_cast<char*>(object) + 0x6C));

	return -1;
}

class MouseViewTarget
{
public:
	float* getViewCoord(void* out);
};

MouseViewTarget* getMouseViewTarget(void* object);

// FUNCTION: ROBLOXSTUDIO 0x00b0b890
int Mouse::getViewSizeX()
{
	reinterpret_cast<MouseVt*>(this)->v42();

	if (*reinterpret_cast<unsigned char*>(0x127c0f8))
	{
		MouseViewTarget* target = getMouseViewTarget(*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x8C));
		if (target)
		{
			float out[2];
			return static_cast<int>(*target->getViewCoord(out));
		}
	}
	else
	{
		void* object = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xB0);
		if (object)
			return static_cast<int>(*reinterpret_cast<short*>(reinterpret_cast<char*>(object) + 0x88));
	}

	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00b0b8f0
int Mouse::getViewSizeY()
{
	reinterpret_cast<MouseVt*>(this)->v42();

	if (*reinterpret_cast<unsigned char*>(0x127c0f8))
	{
		MouseViewTarget* target = getMouseViewTarget(*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x8C));
		if (target)
		{
			float out[2];
			return static_cast<int>(target->getViewCoord(out)[1]);
		}
	}
	else
	{
		void* object = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xB0);
		if (object)
			return static_cast<int>(*reinterpret_cast<short*>(reinterpret_cast<char*>(object) + 0x8A));
	}

	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
