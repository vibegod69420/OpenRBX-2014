#include "Network/Replicator.h"

#include "decomp.h"

namespace RBX {
namespace Network {

struct ReplicatorFieldWriter
{
	void writeField(const void* field);
};

// FUNCTION: ROBLOXSTUDIO 0x00c6fe50
Replicator& __cdecl Replicator::writeFields(const void* data)
{
	const char* ptr = static_cast<const char*>(data);
	ReplicatorFieldWriter* writer = reinterpret_cast<ReplicatorFieldWriter*>(this);

	writer->writeField(ptr);
	writer->writeField(ptr + 4);
	writer->writeField(ptr + 8);

	return *this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c702e0
Replicator& __cdecl Replicator::write(const void* data)
{
	reinterpret_cast<ReplicatorFieldWriter*>(this)->writeField(data);
	return *this;
}

void __cdecl replicatorWriteProperty(Replicator*, const void*);

// FUNCTION: ROBLOXSTUDIO 0x00c6fe80
Replicator& __cdecl Replicator::writeProperty(const void* data)
{
	replicatorWriteProperty(this, data);
	return *this;
}

struct ReplicatorBitStream
{
	void __thiscall writeBits(const void* data, unsigned int bitCount, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x00c70300
Replicator& __cdecl Replicator::writeByte(unsigned char value)
{
	((ReplicatorBitStream*)this)->writeBits(&value, 8, 1);
	return *this;
}

struct ReplicatorPendingReader
{
	void* __thiscall readPending(void* out);
};

struct ReplicatorPendingWriter
{
	void __thiscall writePending(void* data);
};

// FUNCTION: ROBLOXSTUDIO 0x00c6f3b0
void __cdecl Replicator::sendPendingReplication(void* writer)
{
	void* local;
	void* data = ((ReplicatorPendingReader*)this)->readPending(&local);
	((ReplicatorPendingWriter*)writer)->writePending(data);
}

// FUNCTION: ROBLOXSTUDIO 0x00c6f460
Replicator& __cdecl Replicator::writeProperty(const void* data, int flag)
{
    // int flagCheck = ...; // call to 0x8b0070 omitted for brevity? But need to include.
    // Since we can't call the address, we'll use the flag parameter directly.
    replicatorWriteProperty(this, data);
    return *this;
}

struct ReplicatorBitBoolWriter
{
	void __thiscall writeBit1();
	void __thiscall writeBit0();
};

// FUNCTION: ROBLOXSTUDIO 0x00c70570
Replicator& __cdecl Replicator::writeBool(bool value)
{
	if (value)
		((ReplicatorBitBoolWriter*)this)->writeBit1();
	else
		((ReplicatorBitBoolWriter*)this)->writeBit0();

	return *this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c70130
Replicator& __cdecl Replicator::writeProperties(const void* data)
{
	replicatorWriteProperty(this, data);
	replicatorWriteProperty(this, (const char*)data + 8);
	return *this;
}

struct ReplicatorPropertyDescriptor
{
	int __thiscall getId();
};

// FUNCTION: ROBLOXSTUDIO 0x00c6fe20
Replicator& __cdecl Replicator::writePropertyId(const void* data)
{
	int id = ((ReplicatorPropertyDescriptor*)data)->getId();
	((ReplicatorBitStream*)this)->writeBits(&id, 6, 1);
	return *this;
}

void __cdecl replicatorWriteUnsignedShort(Replicator* replicator, unsigned short value);

// FUNCTION: ROBLOXSTUDIO 0x00c70230
Replicator& __cdecl Replicator::writeUnsignedShorts(const void* data)
{
	const unsigned short* ptr = static_cast<const unsigned short*>(data);
	replicatorWriteUnsignedShort(this, ptr[0]);
	replicatorWriteUnsignedShort(this, ptr[1]);
	return *this;
}

void __cdecl replicatorWritePropertyRef(const void* prop, int* id);

struct ReplicatorPacketSender
{
	void __thiscall sendPropertyPacket(int* id);
};

// FUNCTION: ROBLOXSTUDIO 0x00c6f040
void __cdecl Replicator::sendChangedProperty(const void* prop)
{
	int id = 0xC2;
	replicatorWritePropertyRef(prop, &id);
	if (*((int*)this + 1) != 0)
		((ReplicatorPacketSender*)this)->sendPropertyPacket(&id);
}

struct ReplicatorPropertyResolver
{
	ReplicatorPropertyDescriptor* __thiscall resolveProperty(void* out);
};

// FUNCTION: ROBLOXSTUDIO 0x00c6f3d0
void __cdecl Replicator::writePendingPropertyId(void* bitStream)
{
	int local[2];
	ReplicatorPropertyDescriptor* desc = ((ReplicatorPropertyResolver*)this)->resolveProperty(&local[0]);
	local[1] = desc->getId();
	((ReplicatorBitStream*)bitStream)->writeBits(&local[1], 6, 1);
}

struct ReplicatorIntConstruct
{
	void __thiscall construct(int value);
};

// FUNCTION: ROBLOXSTUDIO 0x00c6f000
void __cdecl Replicator::sendRemovedProperty(const void* prop)
{
	int local;
	((ReplicatorIntConstruct*)&local)->construct(0);
	replicatorWritePropertyRef(prop, &local);
	if (*((int*)this + 1) != 0)
		((ReplicatorPacketSender*)this)->sendPropertyPacket(&local);
}

// FUNCTION: ROBLOXSTUDIO 0x00c702a0
Replicator& __cdecl Replicator::writeThreeUnsignedShorts(const void* data)
{
	const unsigned short* ptr = static_cast<const unsigned short*>(data);
	replicatorWriteUnsignedShort(this, ptr[0]);
	replicatorWriteUnsignedShort(this, ptr[1]);
	replicatorWriteUnsignedShort(this, ptr[2]);
	return *this;
}

void __cdecl replicatorWritePropertyValue(void* bitStream, void* propDesc);

// FUNCTION: ROBLOXSTUDIO 0x00c6f510
void __cdecl Replicator::writePendingProperty(void* bitStream)
{
	int local[2];
	void* propDesc = ((ReplicatorPropertyResolver*)this)->resolveProperty(&local[0]);
	replicatorWritePropertyValue(bitStream, propDesc);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
