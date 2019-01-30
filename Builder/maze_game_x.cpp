#include "maze_builder.h"
#include "maze_game_x.h"

namespace builder_p
{
	MazeX * MazeGameX::CreateMaze(MazeBuilder & builder)
	{
		builder.BuildMaze();
		builder.BuildRoom(1);
		builder.BuildRoom(2);
		builder.BuildDoor(1,2);

		return builder.GetMaze();
	}

	MazeX * MazeGameX::CreateCompleMaze(MazeBuilder & builder)
	{
		builder.BuildRoom(1);
		//...
		builder.BuildRoom(101);

		return builder.GetMaze();
	}
}

