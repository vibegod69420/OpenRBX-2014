#include "Network/ProfiledRakPeer.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00ce9cb0
unsigned short ProfiledRakPeer::GetMaximumIncomingConnections() const
{
	return *reinterpret_cast<const unsigned short*>(reinterpret_cast<const char*>(this) + 0x10);
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9cc0
unsigned short ProfiledRakPeer::GetNumberOfAddresses() const
{
	return *reinterpret_cast<const unsigned short*>(reinterpret_cast<const char*>(this) + 0x0e);
}

// FUNCTION: ROBLOXSTUDIO 0x00cea7a0
int ProfiledRakPeer::getField484() const
{
	return field_0484;
}

namespace RakNet
{
	struct SimpleMutex
	{
		void Lock();
		void Unlock();
	};
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9e00
int ProfiledRakPeer::getField5E0() const
{
	char* base = reinterpret_cast<char*>(const_cast<ProfiledRakPeer*>(this));
	RakNet::SimpleMutex* lock = reinterpret_cast<RakNet::SimpleMutex*>(base + 0x5c8);
	lock->Lock();
	int value = *reinterpret_cast<int*>(base + 0x5e0);
	lock->Unlock();
	return value;
}

namespace
{
struct SystemAddress
{
	bool operator==(const SystemAddress& right) const;
};
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9e30
int ProfiledRakPeer::GetLeadingUnassignedAddressCount() const
{
	const SystemAddress* address =
		reinterpret_cast<const SystemAddress*>(reinterpret_cast<const char*>(this) + 0x498);
	int count = 0;

	if (*address == *reinterpret_cast<const SystemAddress*>(0x0131581C))
	{
		do
		{
			address = reinterpret_cast<const SystemAddress*>(
				reinterpret_cast<const char*>(address) + 0x14);
			++count;
		} while (*address == *reinterpret_cast<const SystemAddress*>(0x0131581C));
	}

	return count;
}

// FUNCTION: ROBLOXSTUDIO 0x00cead10
int ProfiledRakPeer::GetNextSendReceipt()
{
	char* base = reinterpret_cast<char*>(this);
	reinterpret_cast<RakNet::SimpleMutex*>(base + 0x5c8)->Lock();

	int value = *reinterpret_cast<int*>(base + 0x5e0);
	int next = value + 1;
	*reinterpret_cast<int*>(base + 0x5e0) = next;
	if (next == 0)
	{
		*reinterpret_cast<int*>(base + 0x5e0) = 1;
	}

	reinterpret_cast<RakNet::SimpleMutex*>(base + 0x5c8)->Unlock();
	return value;
}

namespace
{
struct RakNetGUID
{
	bool operator==(const RakNetGUID& right) const;
};
}

// FUNCTION: ROBLOXSTUDIO 0x00ceb740
bool ProfiledRakPeer::IsUnassigned() const
{
	if (*reinterpret_cast<const RakNetGUID*>(this) == *reinterpret_cast<const RakNetGUID*>(0x012B1EF8))
	{
		if (*reinterpret_cast<const SystemAddress*>(reinterpret_cast<const char*>(this) + 0x10) ==
			*reinterpret_cast<const SystemAddress*>(0x0131581C))
		{
			return true;
		}
	}

	return false;
}

namespace {

struct ProfiledPacketData
{
	~ProfiledPacketData();
};

struct ProfiledPacketEntry
{
	ProfiledPacketData* data;
	int* refCount;
	~ProfiledPacketEntry();
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00ce8e60
void ProfiledRakPeer::ClearProfilingData()
{
	char* self = (char*)this;
	unsigned int i = 0;

	if (*(unsigned int*)(self + 0x430) > 0)
	{
		do
		{
			ProfiledPacketEntry* entry = *(ProfiledPacketEntry**)(self + 0x42c) + i;

			if (entry->refCount)
			{
				if (--(*entry->refCount) == 0)
				{
					ProfiledPacketData* data = entry->data;
					if (data)
					{
						data->~ProfiledPacketData();
						::operator delete(data);
					}

					if (entry->refCount)
					{
						::operator delete(entry->refCount);
					}
				}
			}

			++i;
			entry->data = 0;
			entry->refCount = 0;
		}
		while (i < *(unsigned int*)(self + 0x430));
	}

	if (*(unsigned int*)(self + 0x434) != 0)
	{
		ProfiledPacketEntry* data = *(ProfiledPacketEntry**)(self + 0x42c);
		if (data)
		{
			delete[] data;
		}

		*(unsigned int*)(self + 0x434) = 0;
		*(ProfiledPacketEntry**)(self + 0x42c) = 0;
		*(unsigned int*)(self + 0x430) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
