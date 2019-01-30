#include <iostream>
#include "45_Facade_CodeGenerator.h"
#include "45_Facade_ProgramNode.h"
#include "45_Facade_ProgramNodeBuilder.h"

namespace FacadeNS
{
	ProgramNodeBuilder::ProgramNodeBuilder()
		:_node(0)
	{

	}

	ProgramNode * ProgramNodeBuilder::NewVariable(const char * variableName)const
	{

		return 0;
	}

	ProgramNode * ProgramNodeBuilder::NewAssignment(ProgramNode * variable, ProgramNode * expression)const
	{

		return 0;
	}

	ProgramNode * ProgramNodeBuilder::NewReturnStatement(ProgramNode * value) const
	{

		return 0;
	}

	ProgramNode * ProgramNodeBuilder::NewCondition(ProgramNode * condition, ProgramNode * truePart, ProgramNode * falsePart) const
	{

		return 0;
	}

	ProgramNode * ProgramNodeBuilder::GetRootNode()
	{
		return _node;
	}
}
