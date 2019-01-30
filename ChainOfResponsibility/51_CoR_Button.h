
namespace CoR
{
	class Button : public Widget
	{
	public:
		Button(Widget * d, Topic t = NO_HELP_TOPIC);

		virtual void HandleHelp();
	};
}
