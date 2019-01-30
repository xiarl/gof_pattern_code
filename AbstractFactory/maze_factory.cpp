#include "maze_factory.h"
#include "maze_part.h"
#include "maze_room.h"
#include "maze_door.h"


MazeFactory::~MazeFactory()
{

}

Maze * MazeFactory::MakeMaze()const
{
	return new Maze;
}
Wall * MazeFactory::MakeWall()const
{
	return new Wall;
}
Room * MazeFactory::MakeRoom(int n)const
{
	return new Room(n);
}
Door * MazeFactory::MakeDoor(Room * r1, Room * r2)const
{
	return new Door(r1,r2);
}
