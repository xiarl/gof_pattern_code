
namespace InterpreterNS
{
	class Constant : public BooleanExp
	{
	public:
		Constant(bool);
		virtual ~Constant();

		virtual bool Evaluate(Context &);
		virtual BooleanExp * Replace(const char *, BooleanExp &);
		virtual BooleanExp * Copy() const;
	private:
		bool _bvalue;
	};
}
