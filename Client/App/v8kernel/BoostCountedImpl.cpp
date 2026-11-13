// These disposers were built without a frame pointer.
// FLAGS: /nologo /c /O2 /Ob2 /Oi /Ot /Oy /GS /EHsc /GR /Gy /fp:precise /arch:SSE /Zc:wchar_t /Zc:forScope

namespace RBX {

class ViewBaseReleasable
{
public:
	virtual void slot00();
	virtual void slot01();
	virtual void slot02();
	virtual void slot03();
	virtual void slot04();
	virtual void slot05();
	virtual void slot06();
	virtual void slot07();
	virtual void slot08();
	virtual void slot09();
	virtual void slot10();
	virtual void slot11();
	virtual void slot12();
	virtual void slot13();
	virtual void slot14();
	virtual void slot15();
	virtual void slot16();
	virtual void slot17();
	virtual void slot18();
	virtual void slot19();
	virtual void slot20();
	virtual void slot21();
	virtual void slot22();
	virtual void slot23();
	virtual void slot24();
	virtual void slot25();
	virtual void release(int);
};

class CountedImplViewBase
{
public:
	void dispose();

private:
	char _pad[0x0c];
	ViewBaseReleasable* px;
};

// The held ViewBase is released through virtual slot 26.
// FUNCTION: ROBLOXSTUDIO 0x00545f00
void CountedImplViewBase::dispose()
{
	if (px)
		px->release(1);
}

class HumanoidStateReleasable
{
public:
	virtual void slot00();
	virtual void release(int);
};

class CountedImplHumanoidState
{
public:
	void dispose();

private:
	char _pad[0x0c];
	void* px;
};

// The Humanoid state subobject at +4 is released through virtual slot 1.
// FUNCTION: ROBLOXSTUDIO 0x009d6ff0
void CountedImplHumanoidState::dispose()
{
	if (px)
		((HumanoidStateReleasable*)((char*)px + 4))->release(1);
}

class BoxSelectReleasable
{
public:
	virtual void release(int);
};

class CountedImplBoxSelectCommand
{
public:
	void dispose();

private:
	char _pad[0x0c];
	void* px;
};

// The box-select subobject at +0x1c is released through virtual slot 0.
// FUNCTION: ROBLOXSTUDIO 0x00a541c0
void CountedImplBoxSelectCommand::dispose()
{
	if (px)
		((BoxSelectReleasable*)((char*)px + 0x1c))->release(1);
}

} // namespace RBX
