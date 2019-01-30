
#include "53_Interpreter_BooleanExp.h"
#include "53_Interpreter_VariableExp.h"
#include "53_Interpreter_Context.h"
#include "53_Interpreter_AndExp.h"

namespace InterpreterNS
{
	AndExp::AndExp(BooleanExp * op1, BooleanExp * op2)
		:_operand1(op1), _operand2(op2)
	{

	}

	AndExp::~AndExp()
	{

	}

	bool AndExp::Evaluate(Context & aContext)
	{
		return
			_operand1->Evaluate(aContext) &&
			_operand2->Evaluate(aContext);
	}

	BooleanExp * AndExp::Copy()const
	{
		return
			new AndExp(_operand1->Copy(), _operand2->Copy());
	}

	BooleanExp * AndExp::Replace(const char * name, BooleanExp & exp)
	{
		return
			new AndExp(
			_operand1->Replace(name, exp),
			_operand2->Replace(name, exp)
			);
	}
}