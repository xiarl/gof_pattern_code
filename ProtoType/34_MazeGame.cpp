#include "34_Maze.h"
#include "34_MazeFactory.h"

#include "34_MazeGame.h"

namespace ProtoType
{

	Maze * MazeGame::CreateMaze(MazeFactory & factory)
	{
		Maze * m = factory.MakeMaze();

		return m;
	}
	
}
