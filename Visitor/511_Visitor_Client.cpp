
#include "511_Visitor_StDef.h"
#include <vector>
#include "511_Visitor_EquipmentVisitor.h"
#include "511_Visitor_Equipment.h"

#include "511_Visitor_CompositeEquipment.h"

#include "511_Visitor_Inventory.h"
#include "511_Visitor_InventoryVisitor.h"
#include <iostream>


namespace VisitorNS
{

	std::ostream & operator<<(std::ostream & os, const Inventory & inv)
	{
		os<<inv.GetValue();
		return os;
	}
	void funtest()
	{
		Equipment * commponent = 0;
		InventoryVisitor visitor;

		//...

		commponent->Accept(visitor);

		std::cout<<"Inventory "
			<<commponent->Name()
			<<visitor.GetInventory();

	}
}
