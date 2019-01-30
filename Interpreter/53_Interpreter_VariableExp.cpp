#include "53_Interpreter_Context.h"
#include "53_Interpreter_BooleanExp.h"
#include "53_Interpreter_VariableExp.h"
#include <string.h>

namespace InterpreterNS
{
	VariableExp::VariableExp(const char * name)
		: _name(_strdup(name))
	{

	}
	VariableExp::~VariableExp()
	{

	}

	bool VariableExp::Evaluate(Context & aContext)
	{

		return aContext.Lookup(_name);
	}

	BooleanExp * VariableExp::Replace(const char * name, BooleanExp & exp)
	{
		if (strcmp(name, _name) == 0)
		{
			return exp.Copy();
		} 
		else
		{
			return new VariableExp(_name);
		}
		return this;
	}

	BooleanExp * VariableExp::Copy()const
	{
		return new VariableExp(_name);
	}
}
