
namespace VisitorNS
{
	class CompositeElement : public Element
	{
	public:
		virtual void Accept(Visitor & v);
	private:
		std::vector<Element *> _children;
	};
}
