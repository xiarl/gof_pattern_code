#include "43_Composite_Iterator.h"
#include "43_Composite_Equipment.h"
#include "43_Composite_CompositeEquipment.h"



namespace CompositeNS
{
	CompositeEquipment::CompositeEquipment(const char * appp)
		:Equipment(appp)
	{

	}
	CompositeEquipment::~CompositeEquipment()
	{

	}

	Watt CompositeEquipment::Power()
	{
		Watt ttt;
		return ttt;
	}
	Currency CompositeEquipment::NetPrice()
	{
		Currency total = 0;

		Iterator<Equipment*> *  iter = CreateIterator();
		for (iter->First(); !iter->IsDone(); iter->Next())
		{
			total += (*iter)->NetPrice();
		}
		return total;
	}
	Currency CompositeEquipment::DiscountPrice()
	{
		Currency ttt;
		return ttt;
	}

	void CompositeEquipment::Add(Equipment *)
	{

	}
	void CompositeEquipment::Remove(Equipment *)
	{

	}
	Iterator<Equipment*> * CompositeEquipment::CreateIterator()
	{
		Iterator<Equipment*> * ttt = 0;

		//ttt = new Equipment;
		return ttt;
	}
}
