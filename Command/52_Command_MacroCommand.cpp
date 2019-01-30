#include <vector>
#include <algorithm>
#include "52_Command_Command.h"
#include "52_Command_MacroCommand.h"

namespace CMDNS
{
	MacroCommand::MacroCommand()
	{

	}
	MacroCommand::~MacroCommand()
	{

	}

	void MacroCommand::Add(Command * cmd)
	{
		_cmds.push_back(cmd);
	}

	void MacroCommand::Remove(Command * cmd)
	{
		std::vector<Command*>::const_iterator iter = std::find(_cmds.begin(), _cmds.end(), cmd);
		if (_cmds.end() != iter)
		{
			_cmds.erase(iter);
		}
	}

	void MacroCommand::Execute()
	{
		for (unsigned int index = 0; index < _cmds.size(); ++index)
		{
			_cmds[index]->Execute();
		}
	}
}
