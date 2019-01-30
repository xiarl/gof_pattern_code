#include "43_Composite_Iterator.h"
#include "43_Composite_Equipment.h"

namespace CompositeNS
{
	Equipment::Equipment(const char * appp):_name(appp)
	{

	}
	Equipment::~Equipment()
	{

	}

	Watt Equipment::Power()
	{
		Watt ttt;
		return ttt;
	}
	Currency Equipment::NetPrice()
	{
		Currency ttt;
		return ttt;
	}
	Currency Equipment::DiscountPrice()
	{
		Currency ttt;
		return ttt;
	}

	void Equipment::Add(Equipment *)
	{

	}
	void Equipment::Remove(Equipment *)
	{

	}
	Iterator<Equipment*> * Equipment::CreateIterator()
	{
		Iterator<Equipment*> * ttt = 0;
		return ttt;
	}
}

