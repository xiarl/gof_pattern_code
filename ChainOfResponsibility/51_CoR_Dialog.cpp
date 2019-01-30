#include "51_CoR_HelpHandler.h"
#include "51_CoR_Widget.h"
#include "51_CoR_Dialog.h"


namespace CoR
{
	Dialog::Dialog(HelpHandler * h, Topic t /* = NO_HELP_TOPIC */)
		:Widget(0)
	{
		SetHandler(h, t);
	}

	void Dialog::HandleHelp()
	{
		if (HasHelp())
		{
			// offer help on the dialog
		} 
		else
		{
			HelpHandler::HandleHelp();
		}
	}
}
