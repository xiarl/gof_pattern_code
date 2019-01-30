
namespace builder_p
{
	class MazeX;
	class MazeGameX
	{
	public:
		MazeX * CreateMaze(MazeBuilder & builder);
		MazeX * CreateCompleMaze(MazeBuilder & builder);
	};
}
