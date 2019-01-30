
#include "41_Adapter_Coord.h"
#include "41_Adapter_Point.h"

#include "41_Adapter_Shape.h"
#include "41_Adapter_Manipulator.h"

#include "41_Adapter_TextView.h"
#include "41_Adapter_TextShape.h"

void Test_Adapter_fun()
{
	bool bret = true;
	Adapter::Manipulator * pMor = 0;

	Adapter_Class::TextShape sc_obj;

	Adapter::Coord c1,c2,c3,c4;
	Adapter::Point ptA(c1,c2),ptB(c3,c4);

	sc_obj.BoundingBox(ptA, ptB);
	bret = sc_obj.IsEmpty();
	pMor = sc_obj.CreateManipulator();

	Adapter::TextView viewObj_explicit;
	Adapter_Obj::TextShape so_obj(&viewObj_explicit);
	so_obj.BoundingBox(ptA, ptB);
	bret = so_obj.IsEmpty();
	pMor = so_obj.CreateManipulator();
}

