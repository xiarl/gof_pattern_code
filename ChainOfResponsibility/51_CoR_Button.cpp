#include "51_CoR_HelpHandler.h"
#include "51_CoR_Widget.h"
#include "51_CoR_Button.h"

namespace CoR
{
	Button::Button(Widget * d, Topic t /* = NO_HELP_TOPIC */)
		:Widget(d, t)
	{

	}

	void Button::HandleHelp()
	{
		if (HasHelp())
		{
			// offer help on the button
		} 
		else
		{
			HelpHandler::HandleHelp();
		}
	}
}
