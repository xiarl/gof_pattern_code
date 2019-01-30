
namespace CoR
{
	class Application : public HelpHandler
	{
	public:
		Application(Topic t);

		virtual void HandleHelp();
		// application-specific operations
	};
}
