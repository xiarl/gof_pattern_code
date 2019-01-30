#include "51_CoR_HelpHandler.h"
#include "51_CoR_Widget.h"
#include "51_CoR_Application.h"
#include "51_CoR_Dialog.h"
#include "51_CoR_Button.h"

void Test_Chain_of_Responsibility_181028()
{
	const CoR::Topic PRINT_TOPIC = 1;
	const CoR::Topic PAPER_ORIENTATION_TOPIC = 2;
	const CoR::Topic APPLICATION_TOPIC = 3;

	CoR::Application * application = new CoR::Application(APPLICATION_TOPIC);
	CoR::Dialog * dialog = new CoR::Dialog(application, PRINT_TOPIC);
	CoR::Button * button = new CoR::Button(dialog, PAPER_ORIENTATION_TOPIC);
}

