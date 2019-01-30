#include <vector>
#include "511_Visitor_Visitor.h"
#include "511_Visitor_Element.h"
#include "511_Visitor_CompositeElement.h"

namespace VisitorNS
{
	void CompositeElement::Accept(Visitor & v)
	{
		for (int index = 0; index < _children.size(); ++index)
		{
			_children[index]->Accept(v);
		}
		v.VisitCompositeElement(this);
	}
}
