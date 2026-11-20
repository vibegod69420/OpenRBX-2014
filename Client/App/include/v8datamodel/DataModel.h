#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_DATAMODEL_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_DATAMODEL_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class DataModel
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_0b68[0xb68]; bool flag_0b68; };
		// AUTO-GENERATED FIELDS
	};

	bool getFlagB68() const;
	DataModel* getDataModel();
	int getZero() const;
	bool isStateValid() const;
	void dispatchBdcMember();
	void __cdecl initData();
	int getNetworkStatsTotal();
	void unlinkIntrusive();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_DATAMODEL_H
