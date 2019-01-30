#include "51_CoR_HelpHandler.h"
#include "51_CoR_Application.h"

namespace CoR
{
	Application::Application(Topic t)
		:HelpHandler(0, t)
	{

	}

	void Application::HandleHelp()
	{
		//show a list of help topics
	}
}
