
namespace FacadeNS
{
	class ExpressionNode : public ProgramNode
	{
	public:
		virtual void Traverse(CodeGenerator &);
	};
}

