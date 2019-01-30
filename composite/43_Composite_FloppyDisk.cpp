#include "43_Composite_Iterator.h"
#include "43_Composite_Equipment.h"
#include "43_Composite_FloppyDisk.h"

namespace CompositeNS
{
	FloppyDisk::FloppyDisk(const char * sss)
		:Equipment(sss)
	{

	}

	FloppyDisk::~FloppyDisk()
	{

	}

	Watt FloppyDisk::Power()
	{
		Watt ttt;
		return ttt;
	}
	Currency FloppyDisk::NetPrice()
	{
		Currency ttt;
		return ttt;
	}
	Currency FloppyDisk::DiscountPrice()
	{
		Currency ttt;
		return ttt;
	}


}
