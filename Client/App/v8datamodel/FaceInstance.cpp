#include "v8datamodel/FaceInstance.h"

#include "decomp.h"

namespace RBX {

class Instance
{
public:
	Instance();
};

// FUNCTION: ROBLOXSTUDIO 0x009a3d00
FaceInstance::FaceInstance()
{
	reinterpret_cast<Instance*>(this)->Instance::Instance();

	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x68) = -1;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x6C) = -1;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x70) = -1;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x74) = 0;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x78) = 0;

	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x00) = 0x00E92ACC;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x04) = 0x00E92B44;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x18) = 0x00E92B4C;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x1C) = 0x00E92B58;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x64) = 0x00E92B68;

	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x7C) = 5;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
