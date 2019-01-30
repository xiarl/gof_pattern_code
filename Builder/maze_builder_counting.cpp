
#include "maze_builder.h"
#include "maze_builder_counting.h"
#include "maze_part_x.h"

namespace builder_p
{
	CountingMazeBuilder::CountingMazeBuilder():_doors(0), _rooms(0)
	{

	}

	void CountingMazeBuilder::BuildMaze()
	{
		_currentMaze = new MazeX;
	}
	MazeX * CountingMazeBuilder::GetMaze()
	{
		return _currentMaze;
	}

	void CountingMazeBuilder::BuildRoom(int n)
	{
		++_rooms;
	}

	void CountingMazeBuilder::BuildDoor(int roomFrom, int roomTo)
	{
		++_doors;
	}

	void CountingMazeBuilder::AddWall(int, Direction)
	{

	}

	void CountingMazeBuilder::GetCounts(int & rooms, int & doors) const
	{
		rooms = _rooms;
		doors = _doors;
	}
}
