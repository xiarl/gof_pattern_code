
#include "maze_builder.h"
#include "maze_bulider_standard.h"

#include "maze_game_x.h"



void Test_Maze_Builder()
{
	builder_p::MazeGameX game;
	builder_p::StandardMazeBuilder builder;

	game.CreateMaze(builder);

	builder_p::MazeX * maze = builder.GetMaze();
}


#include "maze_builder_counting.h"

void Test_Maze_Builder2()
{
	builder_p::MazeGameX game;
	builder_p::CountingMazeBuilder builder;

	game.CreateMaze(builder);

	builder_p::MazeX * maze = builder.GetMaze();

	int rooms, doors;
	builder.GetCounts(rooms, doors);
}
