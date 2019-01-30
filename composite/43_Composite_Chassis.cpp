

#include "43_Composite_Iterator.h"
#include "43_Composite_Equipment.h"
#include "43_Composite_CompositeEquipment.h"
#include "43_Composite_Chassis.h"


namespace CompositeNS
{
	Chassis::Chassis(const char *ss):CompositeEquipment(ss)
	{

	}
	Watt Chassis::Power()
	{
		return Watt();
	}
	Currency Chassis::NetPrice()
	{
		return 11;
	}
	Currency Chassis::DiscountPrice()
	{
		return 12;
	}


	Cabinet::Cabinet(const char *ss):CompositeEquipment(ss)
	{

	}
	Watt Cabinet::Power()
	{
		return Watt();
	}
	Currency Cabinet::NetPrice()
	{
		return 21;
	}
	Currency Cabinet::DiscountPrice()
	{
		return 22;
	}


	Bus::Bus(const char *ss):CompositeEquipment(ss)
	{

	}
	Watt Bus::Power()
	{
		return Watt();
	}
	Currency Bus::NetPrice()
	{
		return 31;
	}
	Currency Bus::DiscountPrice()
	{
		return 32;
	}

	Card::Card(const char *ss):CompositeEquipment(ss)
	{

	}
	Watt Card::Power()
	{
		return Watt();
	}
	Currency Card::NetPrice()
	{
		return 41;
	}
	Currency Card::DiscountPrice()
	{
		return 42;
	}
}

