
#include "43_Composite_Iterator.h"
#include "43_Composite_Equipment.h"
#include "43_Composite_CompositeEquipment.h"
#include "43_Composite_Chassis.h"

#include "43_Composite_FloppyDisk.h"

namespace CompositeNS
{

	void TetFunClientTTT()
	{
		Cabinet * acabinet = new Cabinet("PC Cabinet");
		Chassis * achassis = new Chassis("PC Chassis");

		acabinet->Add(achassis);

		Bus * aBus = new Bus("MCA Bus");
		aBus->Add(new Card("16MBs Token Ring"));


		achassis->Add(aBus);
		achassis->Add(new FloppyDisk("3.5 in Floppy"));
	}
}
