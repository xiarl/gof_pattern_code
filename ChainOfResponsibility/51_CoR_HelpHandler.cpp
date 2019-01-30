#include "51_CoR_HelpHandler.h"

namespace CoR
{
	HelpHandler::HelpHandler(HelpHandler * s/*= 0*/, Topic t/*= NO_HELP_TOPIC*/) :_successor(s), _topic(t)
	{}

	void HelpHandler::HandleHelp()
	{
		if (_successor)
		{
			_successor->HandleHelp();
		}
	}

	bool HelpHandler::HasHelp()
	{
		return _topic != NO_HELP_TOPIC;
	}

	void HelpHandler::SetHandler(HelpHandler * s, Topic t)
	{
		_successor = s;
		_topic = t;
	}
}

