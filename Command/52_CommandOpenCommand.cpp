#include <vector>
#include "52_Command_Document.h"
#include "52_Command_Application.h"
#include "52_Command_Command.h"
#include "52_CommandOpenCommand.h"

namespace CMDNS
{
	OpenCommand::OpenCommand(Application * app)
		:_application(app)
	{

	}

	void OpenCommand::Execute()
	{
		const char * name = AskUser();
		if (name != 0)
		{
			Document * document = new Document(name);
			_application->AddDocument(document);
			document->Open();
		} 
		else
		{
		}
	}

	const char * OpenCommand::AskUser()
	{
		return _response;
	}
}
