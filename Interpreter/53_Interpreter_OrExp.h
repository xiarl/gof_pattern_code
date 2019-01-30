
namespace InterpreterNS
{
	class OrExp : public BooleanExp
	{
	public:
		OrExp(BooleanExp *, BooleanExp *);
		virtual ~OrExp();

		virtual bool Evaluate(Context &);
		virtual BooleanExp * Replace(const char *, BooleanExp &);
		virtual BooleanExp * Copy() const;
	private:
		BooleanExp * _operand1;
		BooleanExp * _operand2;
	};
}
