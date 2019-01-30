#include "511_Visitor_StDef.h"
#include <vector>
#include "511_Visitor_EquipmentVisitor.h"
#include "511_Visitor_Equipment.h"
#include "511_Visitor_CompositeEquipment.h"

namespace VisitorNS
{
	FloppyDisk::FloppyDisk()
		:Equipment("FloppyDisk")
	{
	}
	void FloppyDisk::Accept(EquipmentVisitor & ev)
	{
		ev.VisitFloppyDisk(this);
	}

	Card::Card()
		:Equipment("Card")
	{
	}
	void Card::Accept(EquipmentVisitor & ev)
	{
		ev.VisitCard(this);
	}

	Chassis::Chassis()
		:Equipment("Chassis")
	{
	}
	void Chassis::Accept(EquipmentVisitor & ev)
	{
		for (unsigned int index = 0; index < _parts.size(); ++index)
		{
			_parts[index]->Accept(ev);
		}
		ev.VisitChassis(this);
	}

	Bus::Bus()
		:Equipment("Bus")
	{
	}
	void Bus::Accept(EquipmentVisitor & ev)
	{
		ev.VisitBus(this);
	}
}
