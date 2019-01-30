namespace Singleton
{
	class MazeFactory
	{
	public:
		static MazeFactory * Instance();

		//existing interface goes here

		virtual ~MazeFactory();
	protected:
		MazeFactory();
	private:
		static MazeFactory * _instance;

	};


	class BombedMazeFactory : public MazeFactory
	{

	};

	class EnchantedMazeFactory : public MazeFactory
	{

	};
}


