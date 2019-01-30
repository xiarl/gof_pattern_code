#include "53_Interpreter_BooleanExp.h"
#include "53_Interpreter_VariableExp.h"
#include "53_Interpreter_Context.h"
#include "53_Interpreter_Constant.h"
namespace InterpreterNS
{
	Constant::Constant(bool bv)
		:_bvalue(bv)
	{

	}

	Constant::~Constant()
	{

	}

	bool Constant::Evaluate(Context & )
	{
		return _bvalue;
	}

	BooleanExp * Constant::Copy()const
	{
		return new Constant(_bvalue);
	}

	BooleanExp * Constant::Replace(const char * /*name*/, BooleanExp & exp)
	{
		return new Constant(_bvalue);
	}
}
