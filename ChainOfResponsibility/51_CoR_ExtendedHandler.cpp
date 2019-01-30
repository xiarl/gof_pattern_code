#include "51_CoR_Request.h"
#include "51_CoR_Handler.h"
#include "51_CoR_ExtendedHandler.h"

namespace CoR
{
	void ExtendedHandler::HandleRequest(Request * theRequest)
	{
		switch (theRequest->GetKind())
		{
		case Preview:
			// handle the preview request
			break;
		default:
			//let Handler handle other requests
			Handler::HandleRequest(theRequest);
			break;
		}
	}
}

