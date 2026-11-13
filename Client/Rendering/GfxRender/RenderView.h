#pragma once

namespace RBX {
namespace Graphics {

// Only the members the four matched vtable slots touch are laid out; the
// unnamed members are padding and keep each proven offset exact.
class RenderView
{
public:
	bool consumeFlagA0();
	void setFlag9D(bool value);
	void* getField8C_BA0() const;
	void* getField0C_1C8() const;
	void* getField0C_1B0() const;
	void* getField8CRaw() const;

private:
	char _pad0C[0x0C];
	void* field0C;
	char _pad10[0x8C - 0x10];
	void* field8C;
	char _pad90[0x9D - 0x90];
	bool flag9D;
	char _pad9E[0xA0 - 0x9E];
	bool flagA0;
};

} // namespace Graphics
} // namespace RBX
