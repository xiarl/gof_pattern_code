#include "52_Command_Document.h"
#include "52_Command_Command.h"
#include "52_Command_PastedCommand.h"

namespace CMDNS
{

	PasteCommand::PasteCommand(Document * dc)
		:_document(dc)
	{

	}

	void PasteCommand::Execute()
	{
		_document->Paste();
	}
}
