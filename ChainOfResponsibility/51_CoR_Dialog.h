
namespace CoR
{
	class Dialog : public Widget
	{
	public:
		Dialog(HelpHandler * h, Topic t = NO_HELP_TOPIC);

		virtual void HandleHelp();

		// widget operations that Dialog overrides
		// ...
	};
}
