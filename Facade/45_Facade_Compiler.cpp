

#include <iostream>
#include "45_Facade_CodeGenerator.h"
#include "45_Facade_ProgramNode.h"
#include "45_Facade_ProgramNodeBuilder.h"

#include "45_Facade_Token.h"
#include "45_Facade_Scanner.h"

#include "45_Facade_Parser.h"

#include <iostream>
#include "45_Facade_ExpressionNode.h"
#include "45_Facade_StatementNode.h"
#include "45_Facade_RiscCodeGenerator.h"

#include "45_Facade_Compiler.h"



namespace FacadeNS
{
	Compiler::Compiler()
	{

	}

	void Compiler::Compile(std::istream & is, std::ostream & os)
	{
		Scanner aScanner(is);
		ProgramNodeBuilder builder;
		Parser aParser;

		aParser.Parse(aScanner, builder);

		RISCCodeGenerator generator(os);

		ProgramNode * parseTree = builder.GetRootNode();
		parseTree->Traverse(generator);
	}
}
