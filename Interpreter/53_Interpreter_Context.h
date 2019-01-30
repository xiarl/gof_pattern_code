
namespace InterpreterNS
{
	class VariableExp;

	class Context
	{
	public:
		bool Lookup(const char *) const;
		void Assign(VariableExp *, bool);
	};
}
