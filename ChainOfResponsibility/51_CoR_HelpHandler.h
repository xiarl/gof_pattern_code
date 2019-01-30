
namespace CoR
{
	typedef int Topic;
	const Topic NO_HELP_TOPIC = -1;

	class HelpHandler
	{
	public:
		HelpHandler(HelpHandler * = 0, Topic = NO_HELP_TOPIC);
		virtual bool HasHelp();
		virtual void SetHandler(HelpHandler *, Topic);
		virtual void HandleHelp();
	private:
		HelpHandler * _successor;
		Topic _topic;
	};
}

