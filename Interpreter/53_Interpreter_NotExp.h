
namespace InterpreterNS
{
	class NotExp : public BooleanExp
	{
	public:
		NotExp(BooleanExp *);
		virtual ~NotExp();

		virtual bool Evaluate(Context &);
		virtual BooleanExp * Replace(const char *, BooleanExp &);
		virtual BooleanExp * Copy() const;
	private:
		BooleanExp * _operand;
	};
}
