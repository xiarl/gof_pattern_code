#include "34_Wall.h"


namespace ProtoType
{
	Wall * Wall::Clone()const
	{
		return new Wall(*this);
	}
}
