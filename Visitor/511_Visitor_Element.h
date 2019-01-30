
namespace VisitorNS
{
	class Visitor;
	class Element
	{
	public:
		virtual ~Element(){};
		virtual void Accept(Visitor &) = 0;
	protected:
		Element(){};
	};

	class ElementA : public Element
	{
	public:
		ElementA();
		virtual void Accept(Visitor &);
	};

	class ElementB : public Element
	{
	public:
		ElementB();
		virtual void Accept(Visitor &);
	};
}
