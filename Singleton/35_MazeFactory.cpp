
#include "35_MazeFactory.h"
#include <intrin.h> // strcmp
#include <stdlib.h> // getenv

namespace Singleton
{
	MazeFactory * MazeFactory::_instance = 0;


	MazeFactory::MazeFactory()
	{
	}

	MazeFactory::~MazeFactory()
	{

	}
	MazeFactory * MazeFactory::Instance()
	{
		if (_instance == 0)
		{
			const char * mazeStyle = getenv("PATH");

			if (strcmp(mazeStyle, "bombed") == 0)
			{
				_instance = new BombedMazeFactory;
			} 
			else if (strcmp(mazeStyle, "enchanted") == 0)
			{
				_instance = new EnchantedMazeFactory;

			} 
			else
			{
				_instance = new MazeFactory;
			}
		}
		return _instance;
	}
}
