#include "34_Maze.h"
#include "34_Wall.h"
#include "34_Room.h"
#include "34_Door.h"
#include "34_MazeFactory.h"
#include "34_MazeGame.h"
#include "34_MazePrototypeFactory.h"


void Test_ProtoType_fun()
{
	ProtoType::MazeGame game;


	ProtoType::MazePrototypeFactory simpleMazeFactoryObj(new ProtoType::Maze
		, new ProtoType::Wall, new ProtoType::Room, new ProtoType::Door);

	ProtoType::Maze * maze = game.CreateMaze(simpleMazeFactoryObj);
}
