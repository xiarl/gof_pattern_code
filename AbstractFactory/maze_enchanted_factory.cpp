#include "maze_room.h"
#include "maze_enchanted_room.h"
#include "maze_door.h"
#include "maze_needspell_door.h"

#include "maze_factory.h"
#include "maze_enchanted_factory.h"

#include "maze_spell.h"



Spell * EnchantedMazeFactory::CastSpell()const
{

	return 0;
}



Room * EnchantedMazeFactory::MakeRoom(int n)const
{
	return new EnchantedRoom(n, CastSpell());
}
Door * EnchantedMazeFactory::MakeDoor(Room * r1, Room * r2)const
{
	return new DoorNeedingSpell(r1,r2);
}

