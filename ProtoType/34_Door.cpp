#include "34_Room.h"
#include "34_Door.h"


namespace ProtoType
{
	Door * Door::Clone()const
	{
		return new Door(*this);
	}

	void Door::Initialize(Room * r1, Room * r2)
	{

	}
}
