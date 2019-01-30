
namespace builder_p
{
	enum Direction;
	class RoomX;
	class StandardMazeBuilder : public MazeBuilder
	{
	public:
		StandardMazeBuilder();

		virtual void BuildMaze();
		virtual void BuildRoom(int room);
		virtual void BuildDoor(int roomFrom, int roomTo);

		virtual MazeX * GetMaze();
	private:
		Direction CommonWall(RoomX *, RoomX *);
		MazeX * _currentMaze;
	};
}
