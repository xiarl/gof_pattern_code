#include "53_Interpreter_BooleanExp.h"
#include "53_Interpreter_VariableExp.h"
#include "53_Interpreter_Context.h"
#include "53_Interpreter_NotExp.h"

namespace InterpreterNS
{
	NotExp::NotExp(BooleanExp * op)
		:_operand(op)
	{

	}

	NotExp::~NotExp()
	{

	}

	bool NotExp::Evaluate(Context & c)
	{
		return ! _operand->Evaluate(c);
	}

	BooleanExp * NotExp::Copy()const
	{
		return new NotExp(_operand->Copy());
	}

	BooleanExp * NotExp::Replace(const char * name, BooleanExp & exp)
	{
		return new NotExp(_operand->Replace(name, exp));
	}
}

