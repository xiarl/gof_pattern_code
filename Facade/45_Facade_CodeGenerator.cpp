#include <iostream>
#include "45_Facade_ProgramNode.h"
#include "45_Facade_ExpressionNode.h"
#include "45_Facade_StatementNode.h"
#include "45_Facade_CodeGenerator.h"


namespace FacadeNS
{
	void CodeGenerator::Visit(StatementNode *)
	{

	}

	void CodeGenerator::Visit(ExpressionNode *)
	{

	}

	CodeGenerator::CodeGenerator(std::ostream & os)
		:_output(os)
	{

	}
}
