#include "TextureProxy.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

namespace {

struct TextureProxyOwnedObject
{
	virtual ~TextureProxyOwnedObject() {}
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x004cef90
void TextureProxy::release()
{
	delete *reinterpret_cast<TextureProxyOwnedObject**>(reinterpret_cast<char*>(this) + 0xC);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
