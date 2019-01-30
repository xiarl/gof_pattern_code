
namespace FacadeNS
{
	class CodeGenerator;

	class ProgramNode
	{
	public:
		// program node manipulation
		virtual void GetSourcePosition(int & line, int & index);
		//...

		// child manipulation
		virtual void Add(ProgramNode *);
		virtual void Remove(ProgramNode *);
		//...

		virtual void Traverse(CodeGenerator &);
	protected:
		ProgramNode();
	};
}

