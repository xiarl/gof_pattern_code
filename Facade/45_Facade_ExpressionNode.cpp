#include <iostream>
#include "45_Facade_CodeGenerator.h"
#include "45_Facade_ProgramNode.h"
#include "45_Facade_ExpressionNode.h"

namespace FacadeNS
{
	void ExpressionNode::Traverse(CodeGenerator & cg)
	{
		cg.Visit(this);

// 		ListIterator<ProgramNode *> i(_clildren);
// 		for(i.First(); !i.IsDone(); i.Next())
// 		{
// 			i.CurrentItem()->Traverse(cg);
// 		}
	}
}