#include "51_CoR_Request.h"
#include "51_CoR_Handler.h"

namespace CoR
{
	void Handler::HandleRequest(Request * theRequest)
	{
		switch (theRequest->GetKind())
		{
		case Help:
			//cast argument to appropriate type
			HandleHelp((HelpRequest *)theRequest);
			break;
		case Print:
			HandlePrint((PrintRequest *)theRequest);
			break;
		default:
			//...
			break;
		}
	}

	void Handler::HandleHelp(HelpRequest *)
	{

	}

	void Handler::HandlePrint(PrintRequest *)
	{

	}
}
