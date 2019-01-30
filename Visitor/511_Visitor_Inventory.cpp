#include "511_Visitor_StDef.h"
#include "511_Visitor_EquipmentVisitor.h"
#include "511_Visitor_Equipment.h"
#include "511_Visitor_Inventory.h"

namespace VisitorNS
{

	void Inventory::Accumulate(Equipment * e)
	{
		_total += e->NetPrice();
	}
	int Inventory::GetValue()const
	{
		return _total;
	}
}
