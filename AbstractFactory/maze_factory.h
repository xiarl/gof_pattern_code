
class Maze;
class Wall;
class Room;
class Door;

class MazeFactory{
public:
//	MazeFactory();
	virtual ~MazeFactory();
	virtual Maze * MakeMaze()const;
	virtual Wall * MakeWall()const;
	virtual Room * MakeRoom(int n) const;
	virtual Door * MakeDoor(Room * r1, Room * r2)const;

};




