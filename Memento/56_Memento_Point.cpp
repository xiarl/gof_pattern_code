#include "56_Memento_Point.h"

namespace MementoNS
{
	Point::Point()
		:_dx(.0)
	{

	}
	Point Point::operator-()
	{
		Point nePt;
		nePt._dx = - _dx;
		return nePt;
	}
}

