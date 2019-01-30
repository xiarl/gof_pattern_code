
namespace CMDNS
{
	class Application;

	class OpenCommand : public Command
	{
	public:
		explicit OpenCommand(Application *);
		virtual void Execute();
	protected:
		virtual const char * AskUser();
	private:
		Application * _application;
		char * _response;
	};
}
