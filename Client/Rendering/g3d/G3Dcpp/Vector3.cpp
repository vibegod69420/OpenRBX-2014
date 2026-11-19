#include "G3D/Vector3.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x007b3ff0
struct Vector3Callee7B5910
{
	void call(bool* flag, void** slot);
};

void Vector3::sub_007B3FF0()
{
	bool flag = true;
	void** slot = reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x48);
	Vector3Callee7B5910* target =
		reinterpret_cast<Vector3Callee7B5910*>(reinterpret_cast<char*>(*slot) + 0x18);
	target->call(&flag, slot);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
