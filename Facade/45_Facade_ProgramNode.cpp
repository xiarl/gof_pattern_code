#include <iostream>
#include "45_Facade_CodeGenerator.h"
#include "45_Facade_ProgramNode.h"

namespace FacadeNS
{
	ProgramNode::ProgramNode()
	{

	}

	void ProgramNode::GetSourcePosition(int & line, int & index)
	{
		line = 0;
		index = 0;
	}


	void ProgramNode::Add(ProgramNode *)
	{

	}

	void ProgramNode::Remove(ProgramNode *)
	{

	}


	void ProgramNode::Traverse(CodeGenerator &)
	{

	}
}
