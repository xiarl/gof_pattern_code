
namespace ProtoType
{
	class Room;
	class Wall;
	class Door;
	class MazeFactory
	{
	public:
		virtual ~MazeFactory();
		virtual Maze * MakeMaze()const;
		virtual Room * MakeRoom(int)const;
		virtual Wall * MakeWall()const;
		virtual Door * MakeDoor(Room *, Room *)const;
	};
}
