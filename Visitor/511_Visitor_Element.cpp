#include "511_Visitor_Element.h"
#include "511_Visitor_Visitor.h"

namespace VisitorNS
{

	ElementA::ElementA()
	{

	}

	void ElementA::Accept(Visitor & v)
	{
		v.VisitElementA(this);
	}


	ElementB::ElementB()
	{

	}

	void ElementB::Accept(Visitor & v)
	{
		v.VisitElementB(this);
	}
}
