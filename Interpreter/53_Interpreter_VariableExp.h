namespace InterpreterNS
{
	class VariableExp : public BooleanExp
	{
	public:
		explicit VariableExp(const char *);
		virtual ~VariableExp();

		virtual bool Evaluate(Context &);
		virtual BooleanExp * Replace(const char *, BooleanExp &);
		virtual BooleanExp * Copy() const;
	private:
		char * _name;
	};
}