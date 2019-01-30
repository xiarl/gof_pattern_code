#include <iostream>
#include "45_Facade_ProgramNode.h"
#include "45_Facade_ExpressionNode.h"
#include "45_Facade_StatementNode.h"
#include "45_Facade_CodeGenerator.h"
#include "45_Facade_RiscCodeGenerator.h"

namespace FacadeNS
{
	RISCCodeGenerator::RISCCodeGenerator(std::ostream & os)
		:CodeGenerator(os)
	{

	}
}
