
#include "maze_factory.h"
#include "maze_bombed_factory.h"

#include "maze_part.h"
#include "maze_bombed_wall.h"
#include "maze_room.h"
#include "maze_bombed_room.h"


Wall * BombedMazeFactory::MakeWall()const
{
	return new BombedWall;
}
Room * BombedMazeFactory::MakeRoom(int n) const
{
	return new RoomWithABomb(n);
}
