#include "34_Wall.h"
#include "34_Room.h"
#include "34_Maze.h"
#include "34_Door.h"

#include "34_MazeFactory.h"
#include "34_MazePrototypeFactory.h"

namespace ProtoType
{
	MazePrototypeFactory::MazePrototypeFactory(Maze * m, Wall * w, Room * r, Door * d)
		:_prototypeMaze(m),_prototypeRoom(r), _prototypeWall(w), _prototypeDoor(d)
	{
	}

	Maze * MazePrototypeFactory::MakeMaze()const
	{
		return _prototypeMaze->Clone();
	}
	Room * MazePrototypeFactory::MakeRoom(int)const
	{
		return _prototypeRoom->Clone();
	}
	Wall * MazePrototypeFactory::MakeWall()const
	{
		return _prototypeWall->Clone();
	}
	Door * MazePrototypeFactory::MakeDoor(Room * r1, Room * r2)const
	{
		Door * door = _prototypeDoor->Clone();
		door->Initialize(r1, r2);
		return door;
	}
}

