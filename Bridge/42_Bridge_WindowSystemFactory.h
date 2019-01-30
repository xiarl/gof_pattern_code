
namespace Bridge
{
	class WindowSystemFactory
	{
	public:
		static WindowSystemFactory * Instance();

		//existing interface goes here

		virtual ~WindowSystemFactory();

		WindowImp * MakeWindowImp();
	protected:
		WindowSystemFactory();
	private:
		static WindowSystemFactory * _instance;
	};
}
