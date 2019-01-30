//#include "maze_factory.h"

class Spell;

class EnchantedMazeFactory : public MazeFactory
{
public:
	virtual Room * MakeRoom(int n) const;
	virtual Door * MakeDoor(Room * r1, Room * r2)const;

//protected:
private:
	Spell * CastSpell()const;
};



