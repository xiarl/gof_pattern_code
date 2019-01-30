

enum
{
	North,
	East,
	South,
	West,
};

class Wall;
class Door;

class Room
{
public:
	explicit Room(int n);
	virtual ~Room();
	void SetSide(int direction, Wall * w);
	void SetSide(int direction, Door * w);
};

