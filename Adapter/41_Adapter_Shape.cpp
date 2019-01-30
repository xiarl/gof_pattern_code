#include "41_Adapter_Coord.h"
#include "41_Adapter_TextView.h"

#include "41_Adapter_Point.h"
#include "41_Adapter_Manipulator.h"
#include "41_Adapter_Shape.h"
namespace Adapter
{
	Shape::Shape()
	{

	}

	void Shape::BoundingBox(Point & bottomLeft, Point & topRight)const
	{

	}

	Manipulator * Shape::CreateManipulator()const
	{
		Manipulator * newObj = new Manipulator;

		return newObj;
	}
}



