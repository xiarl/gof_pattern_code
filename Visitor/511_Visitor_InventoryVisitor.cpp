#include "511_Visitor_StDef.h"
#include <vector>
#include "511_Visitor_EquipmentVisitor.h"
#include "511_Visitor_Equipment.h"

#include "511_Visitor_CompositeEquipment.h"

#include "511_Visitor_Inventory.h"
#include "511_Visitor_InventoryVisitor.h"



namespace VisitorNS
{

	InventoryVisitor::InventoryVisitor()
	{
	}

	Inventory InventoryVisitor::GetInventory()
	{
		return _inventory;
	}

	void InventoryVisitor::VisitFloppyDisk(FloppyDisk * fd)
	{
		_inventory.Accumulate(fd);
	}

	void InventoryVisitor::VisitChassis(Chassis * ch)
	{
		_inventory.Accumulate(ch);
	}
}
