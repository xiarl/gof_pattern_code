
namespace FacadeNS
{
	class StatementNode;
	class ExpressionNode;

	class CodeGenerator
	{
	public:
		virtual void Visit(StatementNode *);
		virtual void Visit(ExpressionNode *);
		// ...
	protected:
	//	CodeGenerator(BytecodeStream &);
		CodeGenerator(std::ostream  &);
	protected:
		//BytecodeStream & _output;
		std::ostream & _output;
	};
}

