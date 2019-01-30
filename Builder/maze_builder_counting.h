

namespace builder_p
{
	enum Direction;
	class CountingMazeBuilder : public MazeBuilder
	{
	public:
		CountingMazeBuilder();

		virtual void BuildMaze();
		virtual MazeX * GetMaze();
		virtual void BuildRoom(int n);
		virtual void BuildDoor(int roomFrom, int roomTo);

		virtual void AddWall(int, Direction);

		void GetCounts(int &, int &) const;
	private:
		int _doors;
		int _rooms;
		MazeX * _currentMaze;
	};
}
