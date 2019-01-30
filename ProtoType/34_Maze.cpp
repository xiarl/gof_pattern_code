#include "34_Maze.h"



namespace ProtoType
{
	Maze * Maze::Clone()const
	{
		return new Maze(*this);
	}
}
