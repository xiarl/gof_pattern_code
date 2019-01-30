#include "511_Visitor_StDef.h"
#include "511_Visitor_EquipmentVisitor.h"
#include "511_Visitor_Equipment.h"

namespace VisitorNS
{


	Equipment::~Equipment()
	{

	}
	Equipment::Equipment(const char * name)
		:_name(name)
	{
	}

	Watt Equipment::Power()
	{
		Watt ret;
		return ret;
	}

	Currency Equipment::NetPrice()
	{
		return 0;
	}

	Currency Equipment::DiscountPrice()
	{
		return 1;
	}

	void Equipment::Accept(EquipmentVisitor & ev)
	{

	}
}
