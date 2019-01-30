#include "53_Interpreter_BooleanExp.h"
#include "53_Interpreter_VariableExp.h"
#include "53_Interpreter_Context.h"
#include "53_Interpreter_OrExp.h"
#include "53_Interpreter_Constant.h"
#include "53_Interpreter_AndExp.h"
#include "53_Interpreter_NotExp.h"

namespace InterpreterNS
{
	void funtest()
	{
 		BooleanExp * expression;
 		Context context;
 
 		VariableExp * x = new VariableExp("X");
 		VariableExp * y = new VariableExp("Y");
 
 		expression = new OrExp(
 			new AndExp(new Constant(true), x),
			new AndExp(y, new NotExp(x))
 			);

		context.Assign(x, false);
		context.Assign(y, true);

		bool result = expression->Evaluate(context);

		VariableExp * z = new VariableExp("Z");
		NotExp not_z(z);

		BooleanExp * replacement = expression->Replace("Y", not_z);

		context.Assign(z, true);
		result = replacement->Evaluate(context);
	}
}

