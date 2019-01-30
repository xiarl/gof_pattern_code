#include <vector>
#include "52_Command_Document.h"
#include "52_Command_Application.h"


namespace CMDNS
{
	void Application::AddDocument(Document * doc)
	{
		_docs.push_back(doc);
	}
}
