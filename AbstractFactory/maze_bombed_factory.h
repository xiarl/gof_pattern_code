

class BombedMazeFactory : public MazeFactory
{
public:
	virtual Wall * MakeWall()const;
	virtual Room * MakeRoom(int n) const;
};
