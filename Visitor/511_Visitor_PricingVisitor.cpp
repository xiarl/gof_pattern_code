#include "511_Visitor_StDef.h"
#include <vector>
#include "511_Visitor_EquipmentVisitor.h"
#include "511_Visitor_Equipment.h"

#include "511_Visitor_CompositeEquipment.h"

#include "511_Visitor_PricingVisitor.h"


namespace VisitorNS
{

	PricingVisitor::PricingVisitor()
	{
	}

	Currency PricingVisitor::GetTotalPrice()
	{
		return _total;
	}

	void PricingVisitor::VisitFloppyDisk(FloppyDisk * fd)
	{
		_total += fd->NetPrice();
	}

	void PricingVisitor::VisitChassis(Chassis * ch)
	{
		_total += ch->DiscountPrice();
	}
}
