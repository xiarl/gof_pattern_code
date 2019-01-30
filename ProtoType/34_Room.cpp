#include "34_Room.h"


namespace ProtoType
{
	Room * Room::Clone()const
	{
		return new Room(*this);
	}
}
