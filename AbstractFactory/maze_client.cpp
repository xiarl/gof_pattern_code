#include "maze_factory.h"
#include "maze_bombed_factory.h"
#include "maze_game.h"


void Test_Maze_AbstractFactory()
{
	MazeGame game;
	BombedMazeFactory factory;

	game.CreateMaze(factory);
}
