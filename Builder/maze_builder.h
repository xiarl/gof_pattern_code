
namespace builder_p
{
	class MazeX;
	class MazeBuilder
	{
	public:
		virtual void BuildMaze(){}
		virtual void BuildRoom(int room){}
		virtual void BuildDoor(int roomFrom, int roomTo){}

		virtual MazeX * GetMaze(){return 0;}
	protected:
	//private:// 子类中要访问
		MazeBuilder();
	};
}

